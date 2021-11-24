#include "sound.h"

void init_sound_tables();
void init_dac();
void init_tim2();
void init_tim16();
void init_sound_dma();

void setup_music() {
  melody_idx = 0;
  init_sound_tables();
  init_tim2();
  init_tim16();
  init_dac();
  init_sound_dma();
}

void start_music() {
  // Reset all of the global vars and enable the timers and dma
  melody_idx = 0;
  melody_select = 0;
  melody_len = melody1_len;
  DAC->CR |= DAC_CR_EN1;
  DMA1_Channel2->CCR |= DMA_CCR_EN;
  TIM2->CR1 |= TIM_CR1_CEN;
  TIM16->CR1 |= TIM_CR1_CEN;
}

void pause_music() {
  // Pause all of the timers related to music
  TIM2->CR1 &= ~TIM_CR1_CEN;
  TIM16->CR1 &= ~TIM_CR1_CEN;
  DMA1_Channel2->CCR &= ~DMA_CCR_EN;
}

void init_sound_tables() {
  for (int i = 0; i < SAMPLES; i++) {
    wavetable[i] = 2048 + 1952 * sin(2 * M_PI * i / SAMPLES);
  }
  // Precompute ARR values for each note
  for (int i = 0; i < melody1_len; i++) {
    if (melody1[i] != 0) {
      melody1[i] = (48000000 / (melody1[i] * SAMPLES)) - 1;
    }
  }
  for (int i = 0; i < melody2_len; i++) {
    if (melody2[i] != 0) {
      melody2[i] = (48000000 / (melody2[i] * SAMPLES)) - 1;
    }
  }
}

void init_tim2() {
  RCC->APB1ENR |= RCC_APB1ENR_TIM2EN;
  // Disable timer
  TIM2->CR1 &= ~(TIM_CR1_CEN);
  // Clear MMS and enable Update event
  TIM2->CR2 &= ~(TIM_CR2_MMS);
  TIM2->CR2 |= TIM_CR2_MMS_1;

  // Set no prescale for max arr freq
  TIM2->PSC = 0;
  // Calculate arr value for desired freq
  TIM2->ARR = melody1[0];
  // Buffer ARR value
  TIM2->CR1 |= TIM_CR1_ARPE;
  // Enable dma
  TIM2->DIER |= TIM_DIER_UDE;
}

void init_tim16() {
  RCC->APB2ENR |= RCC_APB2ENR_TIM16EN;
  RCC->AHBENR |= RCC_AHBENR_GPIOCEN;
  GPIOC->MODER &= ~GPIO_MODER_MODER9;
  GPIOC->MODER |= GPIO_MODER_MODER9_0;
  TIM16->CR1 &= ~TIM_CR1_CEN;

  TIM16->CR2 &= ~TIM_CR2_MMS;
  TIM16->CR2 |= TIM_CR2_MMS_1;

  TIM16->PSC = 48000 - 1;
  TIM16->ARR = noteDurations1[melody_idx] - 1;
  TIM16->CR1 |= TIM_CR1_ARPE;
  TIM16->DIER |= TIM_DIER_UIE;
  NVIC->ISER[0] |= 1 << TIM16_IRQn;
}

void TIM16_IRQHandler() {
  // Ack the interrupt
  TIM16->SR &= ~TIM_SR_UIF;
  TIM16->CR1 &= ~TIM_CR1_CEN;
  // Status led for lazy debug
  GPIOC->BSRR = GPIO_BSRR_BR_9 | (GPIO_BSRR_BS_9 & ~(GPIOC->ODR));
  melody_idx += 1;
  uint16_t nxt_note, nxt_dur;
  if (melody_select == 2) {
    if(melody_idx >= melody2_len) {
      melody_idx = 0;
      melody_select = 0;
      nxt_note = melody1[melody_idx];
      nxt_dur = noteDurations1[melody_idx];
    } else {
      nxt_note = melody2[melody_idx];
      nxt_dur = noteDurations2[melody_idx];
    }
  } else {
    if(melody_idx >= melody1_len) {
      melody_idx = 0;
      melody_select++;
    }
    if(melody_select == 2) {
      nxt_note = melody2[melody_idx];
      nxt_dur = noteDurations2[melody_idx];
    } else {
      nxt_note = melody1[melody_idx];
      nxt_dur = noteDurations1[melody_idx];
    }
  }


  // Needed to make sure we don't set the arr to zero on accident for a rest
  // note
  if (!nxt_note) {
    TIM2->CR1 &= ~(TIM_CR1_CEN);
  } else {
    TIM2->CR1 |= TIM_CR1_CEN;
  }
  TIM2->ARR = nxt_note;
  TIM16->ARR = nxt_dur;
  TIM16->CR1 |= TIM_CR1_CEN;
}

void init_sound_dma() {
  RCC->AHBENR |= RCC_AHBENR_DMA1EN;

  DMA_Channel_TypeDef *dma = DMA1_Channel2;
  // Disable DMA and clear msize and psize
  dma->CCR &= ~(DMA_CCR_EN | DMA_CCR_MSIZE | DMA_CCR_PSIZE);
  // We want to copy SAMPLES elements
  dma->CNDTR = SAMPLES;
  // from array
  dma->CMAR = (uint32_t)wavetable;
  // to the right aligned 12 bit dac
  dma->CPAR = (uint32_t)&DAC->DHR12R1;
  // Setup dma for circular, mem to periph, increment memory, set msize to 16
  // and psize to 16
  dma->CCR |= DMA_CCR_CIRC | DMA_CCR_DIR | DMA_CCR_MINC | DMA_CCR_MSIZE_0 |
              DMA_CCR_PSIZE_0;
}

void init_dac() {
  RCC->APB1ENR |= RCC_APB1ENR_DACEN;
  // Configure which TRGO event to fire on and enable the dac
  DAC->CR &= ~(DAC_CR_TSEL1);
  DAC->CR |= DAC_CR_TSEL1_2;
}

uint16_t melody1[] = {
    NOTE_E5, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4,
    NOTE_A4, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5,
    NOTE_B4, NOTE_E4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5,
    NOTE_C5, NOTE_A4, REST, NOTE_A3, NOTE_B3, NOTE_C4,
    NOTE_D4, NOTE_D5, NOTE_F5, NOTE_A5, NOTE_A5, NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5,
    NOTE_C5, NOTE_E5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4,
    NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_A4, NOTE_A4,
};

uint16_t melody2[] = {
    NOTE_E4, NOTE_C4,  NOTE_A3,  NOTE_C4,  NOTE_E4, NOTE_C4, NOTE_A3,  NOTE_C4,
    NOTE_D4, NOTE_B3,  NOTE_GS3, NOTE_B3,  NOTE_D4, NOTE_B3, NOTE_GS3, NOTE_B3,
    NOTE_C4, NOTE_A3,  NOTE_E3,  NOTE_A3,  NOTE_C4, NOTE_A3, NOTE_E3,  NOTE_A3,
    NOTE_B3, NOTE_GS3, NOTE_E3,  NOTE_GS3, NOTE_B3, NOTE_E4, NOTE_C4,  NOTE_A3,
    NOTE_C4, NOTE_E4,  NOTE_C4,  NOTE_A3,  NOTE_C4, NOTE_D4, NOTE_B3,  NOTE_GS3,
    NOTE_B3, NOTE_D4,  NOTE_B3,  NOTE_GS3, NOTE_B3, NOTE_C4, NOTE_A3,  NOTE_C4,
    NOTE_E4, NOTE_A4,  NOTE_A4,  NOTE_GS4};

uint16_t wavetable[SAMPLES];

uint16_t melody_idx;
uint8_t melody_select;
uint8_t melody_len;

const uint16_t melody1_len = sizeof(melody1) / sizeof(melody1[0]);
const uint16_t melody2_len = sizeof(melody2) / sizeof(melody2[0]);

const uint16_t noteDurations1[] = {
  QUARTER_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, SIXTEENTH_NOTE,  SIXTEENTH_NOTE,  EIGHTH_NOTE, EIGHTH_NOTE,
  QUARTER_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, QUARTER_NOTE, EIGHTH_NOTE, EIGHTH_NOTE,
  EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, QUARTER_NOTE, QUARTER_NOTE,
  QUARTER_NOTE, QUARTER_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE,
  EIGHTH_NOTE, QUARTER_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, SIXTEENTH_NOTE,  SIXTEENTH_NOTE,  EIGHTH_NOTE, EIGHTH_NOTE,
  DOT_QUARTER_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, SIXTEENTH_NOTE,  SIXTEENTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE,
  QUARTER_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, QUARTER_NOTE, QUARTER_NOTE,
  QUARTER_NOTE, QUARTER_NOTE, HALF_NOTE
};

const uint16_t noteDurations2[] = {
    EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE,
    EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE,
    EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE,
    EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE,
    EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE,
    EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE,
    EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE,
    HALF_NOTE,
    EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE,
    EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE,
    EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE,
    EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE,
    EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE, EIGHTH_NOTE,
    QUARTER_NOTE, QUARTER_NOTE, HALF_NOTE};