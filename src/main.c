#include "bunker.h"
#include "invaders.h"
#include "lcd.h"
#include "nunchuk.h"
#include "sound.h"
#include "sprite_data.h"
#include "sprites.h"
#include "stm32f0xx.h"
#include "string.h"
#include "timer.h"
#include <stdlib.h>
#include <time.h>

#define SHOT_SPEED 10
#define LIGHTNING_SPEED 5
#define LIGHTNING_CNT 5

int score = 0;
int lives = 3; // Cannot be more than 9 for now
int all_dead = 0;

void print_glbcnt(int x, int y) {
  int toggle = 0;
  char output[5] = "G:  ";
  itoa(glbcnt, &output[2], 10);
  LCD_DrawString(x, y, 0xFFFF, 0x0000, output, 16, 0);
}

void draw_score(int x, int y) {
    char output[10] = "SCORE:   ";
    itoa(score, &output[6], 10);
    char output_2[11] = " LIVES:   ";
    itoa(lives, &output_2[7], 10);
    strcat(output, output_2);
    LCD_DrawString(x,y,0xFFFF,0x0000, output, 16, 0);
}

int main(void) {
  init_tim6();
  setup_music();
  start_music();
  LCD_Setup();
  LCD_Clear(0x0);
  // Little test guy
  //  Sprite invader;
  Sprite player;
  Sprite shot;
  //  init_sprite(40, 40, invader1_a_width, invader1_a_height,
  //  (uint16_t*)invader1_a, (uint16_t*)invader1_b, &invader);
  init_sprite(120, 25, tank_clean_width, tank_clean_height,
              (uint16_t *)tank_clean, (uint16_t *)tank_clean, &player);
  init_sprite(1000, 1000, tank_shot_width, tank_shot_height,
              (uint16_t *)tank_shot, (uint16_t *)tank_shot, &shot);
  init_4_bunkers();

  // setup five bolts
  Sprite bolts[LIGHTNING_CNT];
  for(int i = 0; i < LIGHTNING_CNT; i++) {
	  init_sprite(1000,1000,lightning_a_width, lightning_a_height, (uint16_t*)lightning_a, (uint16_t*)lightning_b, &bolts[i]);
  }

  // Setup randomness
  srand(1);

  // Initialize the invader army
  init_invaders(0, 230, 5, 2);
  // Init i2c and nunchuk
  //
//  uint16_t mov_x = 5, mov_y = 5;
  while (!(all_dead) && lives > 0) {
    if ((glbcnt + 1) % 15 == 0) {
    	// -----4FPS (BASICALLY FREE)-----
//    	LCD_DrawString(230,300,0x0F00,0x0000, "Don't mind the spaz monke uwu", 16, 0);
    	draw_score(170,300);
        // Change ("animate") the test sprite
    	player.sprite_data =
            (uint16_t *)(((uint32_t)player.sprite_data) ^ player.sprite_swap_key);
    	for(int i = 0; i < LIGHTNING_CNT; i++) {
    	    bolts[i].sprite_data =
    	            (uint16_t *)(((uint32_t)bolts[i].sprite_data) ^ bolts[i].sprite_swap_key);
    	}
//    	invader.sprite_data =
//            (uint16_t *)(((uint32_t)invader.sprite_data) ^ invader.sprite_swap_key);
    	// Draw the invading army
       // draw_invaders();
        // Animate the army
        update_invaders();
    }

    if ((glbcnt + 1) % 4 == 0) {
      // -----15FPS-----
      print_flags(175, 1);
      //        print_glbcnt(230,1);
    }

    if ((glbcnt + 1) % 2 == 0) {
      // -----30FPS-----
      if (flg_mv_right && player.bbox.x1 > 0) {
        move_sprite(&player, -2, 0, 0);
      } else if (flg_mv_left && player.bbox.x2 < (LCD_W - 1)) {
        move_sprite(&player, 2, 0, 0);
      } else {
        draw_sprite(&player);
      }
      if (flg_v && (shot.bbox.x1 == 1000)) {
        teleport_sprite((int)((player.bbox.x2 + player.bbox.x1) / 2),
                        player.bbox.y1 + 10, &shot);
        draw_sprite(&shot);
      }
      if (shot.bbox.y2 >= (LCD_H - SHOT_SPEED)) {
        teleport_sprite(1000, 1000, &shot);
      } else if (shot.bbox.x1 != 1000) {
        move_sprite(&shot, 0, SHOT_SPEED, 0);
      }

      // Collision test
      if (invader_coll(&shot)) {
        teleport_sprite(1000, 1000, &shot);
        score += 1;
      }

      Sprite shooter;
      for (int i = 0; i < 5; i++) {
        shooter = invader_army.units[(rand() % (INVADERS_COUNT - 0)) + 0];
        if (shooter.sprite_data != NULL) {
          if (bolts[i].bbox.x1 == 1000) {
            teleport_sprite((int)((shooter.bbox.x2 + shooter.bbox.x1) / 2),
                            shooter.bbox.y1 - 10, &bolts[i]);
          }
        }
        if (bolts[i].bbox.x1 != 1000) {
          move_sprite(&bolts[i], 0, BOLT_SPEED, 0);
        }
        if (bolts[i].bbox.y2 <= 25) {
          teleport_sprite(1000, 1000, &bolts[i]);
        }

        Sprite shooter;
        for(int i = 0; i < LIGHTNING_CNT; i++) {
			shooter = invader_army.units[(rand() % (INVADERS_COUNT - 0)) + 0];
			if(shooter.sprite_data != NULL) {
				if (bolts[i].bbox.x1 == 1000) {
					teleport_sprite((int)((shooter.bbox.x2 + shooter.bbox.x1) / 2), shooter.bbox.y1 - 10, &bolts[i]);
				}
			}
			if (bolts[i].bbox.x1 != 1000) {
                move_sprite(&bolts[i], 0, -LIGHTNING_SPEED, 0);
            }
            if (bolts[i].bbox.y2 <= 25) {
                teleport_sprite(1000, 1000, &bolts[i]);
            }

            // Collision test (bumker)
            /* // old code for bumker test
            if (sprite_coll(&bolts[i], &bumker)) {
                teleport_sprite(1000, 1000, &bolts[i]);
            }//*/
            if (sprite_coll(&bolts[i], &player)) {
                teleport_sprite(1000, 1000, &bolts[i]);
                lives--;
            }
        }
      }
      all_dead = 1;
      for (int i = 0; i < INVADERS_COUNT; i++) {
        if (invader_army.units[i].sprite_data != NULL) {
          all_dead = 0;
        }
      }
    }

    // -----60FPS (VERY COSTLY)-----

    //    move_sprite(&invader, mov_x, mov_y, 0);
    //    if(invader.bbox.x1 <= 0 || invader.bbox.x2 >= (LCD_W - 5)) {
    //	  mov_x = -mov_x;
    //    }
    //    if(invader.bbox.y1 <= 0 || invader.bbox.y2 >= LCD_H){
    //	  mov_y = - mov_y;
    //    }

    while ((glbcnt + 1) % 1 != 0)
      ;
    asm volatile("wfi" ::);
  }

  for (;;) {
    // For ending
      draw_score(170,300);
      if (lives == 0) {
          LCD_DrawString(180,200,0xF000,0x0000, "GAME OVER YOU LOSE!", 16, 0);
      }
      if (all_dead) {
          LCD_DrawString(180,200,0x0F00,0x0000, "GAME OVER YOU WON!", 16, 0);
      }
  }
}
