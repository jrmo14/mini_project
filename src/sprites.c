#include "sprites.h"

const uint16_t ufo[128] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0xffff, 0xffff, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0xffff, 0xffff, 0xffff, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0x0, 0xffff, 
	0xffff, 0xffff, 0x0, 0x0, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0, 
	0x0, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0x0, 0x0, 0xffff, 
	0xffff, 0xffff, 0x0, 0xffff, 0x0, 
	0x0, 0x0, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0x0, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0x0, 0xffff, 0xffff, 
	0xffff, 0x0, 0xffff, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0x0, 0xffff, 0xffff, 
	0x0, 0xffff, 0xffff, 0xffff, 0x0, 
	0x0, 0x0, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0x0, 0x0, 
};
extern const uint8_t ufo_width = 16;
extern const uint8_t ufo_height = 8;

const uint16_t bomb_a[24] = {
	0x0, 0x0, 0xffff, 0x0, 0x0, 
	0xffff, 0x0, 0x0, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0xffff, 0x0, 
};
extern const uint8_t bomb_a_width = 3;
extern const uint8_t bomb_a_height = 8;

const uint16_t bomb_b[24] = {
	0x0, 0xffff, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0x0, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0xffff, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 
};
extern const uint8_t bomb_b_width = 3;
extern const uint8_t bomb_b_height = 8;

const uint16_t bomb_explode[48] = {
	0x0, 0xffff, 0x0, 0x0, 0xffff, 
	0x0, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0xffff, 0x0, 0xffff, 0x0, 
	0xffff, 0xffff, 0x0, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0x0, 0xffff, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0, 
	0x0, 0x0, 0xffff, 0x0, 0x0, 
	0xffff, 0x0, 0xffff, 
};
extern const uint8_t bomb_explode_width = 6;
extern const uint8_t bomb_explode_height = 8;

const uint16_t bunker_clean[384] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0x0, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0x0, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0x0, 0x0, 
	0x0, 0x0, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0, 
	0x0, 0x0, 0x0, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0x0, 0x0, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 
};
extern const uint8_t bunker_clean_width = 24;
extern const uint8_t bunker_clean_height = 16;

const uint16_t font_0[64] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0xffff, 0x0, 0x0, 
	0x0, 0xffff, 0x0, 0xffff, 0x0, 
	0xffff, 0x0, 0x0, 0xffff, 0x0, 
	0x0, 0xffff, 0x0, 0xffff, 0x0, 
	0xffff, 0x0, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 
};
extern const uint8_t font_0_width = 8;
extern const uint8_t font_0_height = 8;

const uint16_t font_1[64] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xffff, 0x0, 
	0x0, 0x0, 0x0, 0xffff, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 
};
extern const uint8_t font_1_width = 8;
extern const uint8_t font_1_height = 8;

const uint16_t font_2[64] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0x0, 0x0, 0x0, 0xffff, 
	0xffff, 0x0, 0xffff, 0x0, 0x0, 
	0x0, 0xffff, 0x0, 0xffff, 0x0, 
	0xffff, 0x0, 0x0, 0xffff, 0x0, 
	0x0, 0xffff, 0x0, 0xffff, 0x0, 
	0x0, 0xffff, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0xffff, 0xffff, 0x0, 
	0x0, 0x0, 0xffff, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 
};
extern const uint8_t font_2_width = 8;
extern const uint8_t font_2_height = 8;

const uint16_t font_3[64] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0xffff, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xffff, 0x0, 
	0xffff, 0x0, 0x0, 0xffff, 0x0, 
	0x0, 0xffff, 0x0, 0xffff, 0x0, 
	0xffff, 0xffff, 0x0, 0x0, 0xffff, 
	0x0, 0xffff, 0xffff, 0x0, 0x0, 
	0xffff, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 
};
extern const uint8_t font_3_width = 8;
extern const uint8_t font_3_height = 8;

const uint16_t font_4[64] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0xffff, 0xffff, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0x0, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0xffff, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0x0, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 
};
extern const uint8_t font_4_width = 8;
extern const uint8_t font_4_height = 8;

const uint16_t font_5[64] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0xffff, 0xffff, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0xffff, 0x0, 0xffff, 
	0x0, 0x0, 0x0, 0xffff, 0x0, 
	0xffff, 0x0, 0xffff, 0x0, 0x0, 
	0x0, 0xffff, 0x0, 0xffff, 0x0, 
	0xffff, 0x0, 0x0, 0x0, 0xffff, 
	0x0, 0xffff, 0x0, 0x0, 0xffff, 
	0xffff, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 
};
extern const uint8_t font_5_width = 8;
extern const uint8_t font_5_height = 8;

const uint16_t font_6[64] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0x0, 0xffff, 0x0, 
	0xffff, 0x0, 0x0, 0xffff, 0x0, 
	0xffff, 0x0, 0x0, 0xffff, 0x0, 
	0x0, 0xffff, 0x0, 0xffff, 0x0, 
	0x0, 0xffff, 0x0, 0x0, 0xffff, 
	0x0, 0xffff, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 
};
extern const uint8_t font_6_width = 8;
extern const uint8_t font_6_height = 8;

const uint16_t font_7[64] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0xffff, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0xffff, 0x0, 
	0xffff, 0x0, 0x0, 0xffff, 0x0, 
	0x0, 0x0, 0x0, 0xffff, 0x0, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 
};
extern const uint8_t font_7_width = 8;
extern const uint8_t font_7_height = 8;

const uint16_t font_8[64] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0x0, 0xffff, 0xffff, 
	0x0, 0x0, 0xffff, 0x0, 0x0, 
	0xffff, 0x0, 0x0, 0xffff, 0x0, 
	0xffff, 0x0, 0x0, 0xffff, 0x0, 
	0x0, 0xffff, 0x0, 0xffff, 0x0, 
	0x0, 0xffff, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0xffff, 0xffff, 0x0, 
	0xffff, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 
};
extern const uint8_t font_8_width = 8;
extern const uint8_t font_8_height = 8;

const uint16_t font_9[64] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0x0, 0x0, 0x0, 
	0xffff, 0x0, 0xffff, 0x0, 0x0, 
	0xffff, 0x0, 0x0, 0xffff, 0x0, 
	0xffff, 0x0, 0x0, 0xffff, 0x0, 
	0x0, 0xffff, 0x0, 0xffff, 0x0, 
	0x0, 0xffff, 0x0, 0xffff, 0x0, 
	0x0, 0x0, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 
};
extern const uint8_t font_9_width = 8;
extern const uint8_t font_9_height = 8;

const uint16_t invader1_a[128] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0xffff, 0x0, 0xffff, 
	0xffff, 0x0, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0x0, 0x0, 0xffff, 
	0xffff, 0x0, 0xffff, 0xffff, 0x0, 
	0x0, 0x0, 0x0, 0xffff, 0xffff, 
	0xffff, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0xffff, 0xffff, 0xffff, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0x0, 0xffff, 
	0xffff, 0x0, 0x0, 0xffff, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0xffff, 0xffff, 0x0, 0xffff, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 
};
extern const uint8_t invader1_a_width = 16;
extern const uint8_t invader1_a_height = 8;

const uint16_t invader1_b[128] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xffff, 0xffff, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0x0, 0x0, 0x0, 
	0xffff, 0x0, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0x0, 0x0, 0xffff, 
	0xffff, 0x0, 0xffff, 0xffff, 0x0, 
	0xffff, 0x0, 0x0, 0xffff, 0xffff, 
	0xffff, 0xffff, 0x0, 0xffff, 0x0, 
	0x0, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0xffff, 0xffff, 0xffff, 0x0, 0xffff, 
	0x0, 0xffff, 0xffff, 0x0, 0xffff, 
	0xffff, 0x0, 0xffff, 0xffff, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xffff, 0xffff, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 
};
extern const uint8_t invader1_b_width = 16;
extern const uint8_t invader1_b_height = 8;

const uint16_t invader2_a[128] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xffff, 0xffff, 
	0xffff, 0x0, 0x0, 0xffff, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0, 
	0x0, 0xffff, 0x0, 0xffff, 0xffff, 
	0xffff, 0xffff, 0x0, 0xffff, 0x0, 
	0x0, 0xffff, 0xffff, 0x0, 0xffff, 
	0xffff, 0xffff, 0x0, 0xffff, 0xffff, 
	0xffff, 0x0, 0xffff, 0xffff, 0x0, 
	0x0, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0xffff, 0x0, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0, 
	0xffff, 0x0, 0xffff, 0xffff, 0xffff, 
	0x0, 0xffff, 0xffff, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0x0, 0xffff, 
	0xffff, 0xffff, 0x0, 0x0, 0xffff, 
	0xffff, 0xffff, 0xffff, 0x0, 0xffff, 
	0x0, 0x0, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0x0, 0xffff, 0x0, 
	0x0, 0xffff, 0xffff, 0xffff, 0x0, 
	0x0, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 
};
extern const uint8_t invader2_a_width = 16;
extern const uint8_t invader2_a_height = 8;

const uint16_t invader2_b[128] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xffff, 0xffff, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0, 
	0xffff, 0x0, 0x0, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0xffff, 0xffff, 0x0, 0xffff, 
	0xffff, 0x0, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0xffff, 0xffff, 0x0, 
	0x0, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0xffff, 0x0, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0, 
	0xffff, 0x0, 0xffff, 0xffff, 0xffff, 
	0x0, 0xffff, 0xffff, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0x0, 0xffff, 
	0xffff, 0x0, 0xffff, 0x0, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0xffff, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0xffff, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 
};
extern const uint8_t invader2_b_width = 16;
extern const uint8_t invader2_b_height = 8;

const uint16_t invader3_a[128] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0xffff, 0xffff, 0xffff, 
	0x0, 0xffff, 0x0, 0x0, 0xffff, 
	0xffff, 0x0, 0xffff, 0xffff, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0xffff, 0x0, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0, 
	0xffff, 0x0, 0x0, 0xffff, 0xffff, 
	0x0, 0xffff, 0xffff, 0x0, 0xffff, 
	0x0, 0x0, 0xffff, 0xffff, 0xffff, 
	0x0, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0x0, 0x0, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 
};
extern const uint8_t invader3_a_width = 16;
extern const uint8_t invader3_a_height = 8;

const uint16_t invader3_b[128] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0x0, 0xffff, 0x0, 
	0x0, 0x0, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0xffff, 0x0, 0xffff, 
	0xffff, 0x0, 0xffff, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0x0, 0x0, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0x0, 0xffff, 0xffff, 
	0x0, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0xffff, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0x0, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 
};
extern const uint8_t invader3_b_width = 16;
extern const uint8_t invader3_b_height = 8;

const uint16_t invader_explode[128] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0xffff, 0x0, 0x0, 
	0x0, 0x0, 0xffff, 0x0, 0x0, 
	0xffff, 0x0, 0x0, 0xffff, 0x0, 
	0x0, 0xffff, 0x0, 0x0, 0x0, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0x0, 0xffff, 0x0, 0x0, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0xffff, 0x0, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0x0, 0xffff, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0x0, 0xffff, 0x0, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0x0, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0xffff, 0x0, 0x0, 
	0xffff, 0x0, 0x0, 0xffff, 0x0, 
	0x0, 0x0, 0x0, 0xffff, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 
};
extern const uint8_t invader_explode_width = 16;
extern const uint8_t invader_explode_height = 8;

const uint16_t lightning_a[24] = {
	0x0, 0xffff, 0x0, 0x0, 0x0, 
	0xffff, 0x0, 0x0, 0xffff, 0x0, 
	0xffff, 0x0, 0xffff, 0x0, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 
};
extern const uint8_t lightning_a_width = 3;
extern const uint8_t lightning_a_height = 8;

const uint16_t lightning_b[24] = {
	0xffff, 0x0, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0x0, 0xffff, 0x0, 0xffff, 0x0, 
	0x0, 0x0, 0x0, 0xffff, 0x0, 
	0x0, 0x0, 0xffff, 0x0, 
};
extern const uint8_t lightning_b_width = 3;
extern const uint8_t lightning_b_height = 8;

const uint16_t tank_clean[128] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0, 
	0x0, 0x0, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0x0, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0x0, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0x0, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0, 0x0, 0x0, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0, 
	0x0, 0x0, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 
};
extern const uint8_t tank_clean_width = 16;
extern const uint8_t tank_clean_height = 8;

const uint16_t tank_fire_a[128] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xffff, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xffff, 0x0, 
	0x0, 0x0, 0xffff, 0x0, 0x0, 
	0xffff, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xffff, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0, 
	0xffff, 0xffff, 0x0, 0x0, 0xffff, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0, 
	0x0, 0xffff, 0x0, 0xffff, 0xffff, 
	0xffff, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xffff, 0xffff, 
	0x0, 0x0, 0xffff, 0x0, 0xffff, 
	0xffff, 0xffff, 0xffff, 0x0, 0xffff, 
	0x0, 0x0, 0xffff, 0x0, 0x0, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0xffff, 
};
extern const uint8_t tank_fire_a_width = 16;
extern const uint8_t tank_fire_a_height = 8;

const uint16_t tank_fire_b[128] = {
	0x0, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0xffff, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0xffff, 0x0, 0xffff, 0xffff, 
	0x0, 0xffff, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0x0, 0x0, 0x0, 
	0x0, 0xffff, 0x0, 0xffff, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0xffff, 0xffff, 0x0, 0xffff, 
	0x0, 0xffff, 0xffff, 0x0, 0xffff, 
	0xffff, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0xffff, 0xffff, 0xffff, 0x0, 
	0x0, 0xffff, 0x0, 0x0, 0xffff, 
	0xffff, 0xffff, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0xffff, 0xffff, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0x0, 0xffff, 0xffff, 0x0, 0xffff, 
	0x0, 0x0, 0xffff, 0x0, 0xffff, 
	0xffff, 0x0, 0xffff, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0x0, 0x0, 0x0, 
	0xffff, 0x0, 0x0, 0x0, 0xffff, 
	0x0, 0xffff, 0x0, 0x0, 0xffff, 
	0x0, 0x0, 0x0, 
};
extern const uint8_t tank_fire_b_width = 16;
extern const uint8_t tank_fire_b_height = 8;

const uint16_t tank_shot[8] = {
	0x0, 0x0, 0x0, 0x0, 0xffff, 
	0xffff, 0xffff, 0xffff, 
};
extern const uint8_t tank_shot_width = 1;
extern const uint8_t tank_shot_height = 8;
