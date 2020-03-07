#ifndef OCTOPUS_SPRITE
#define OCTOPUS_SPRITE

#include "Global.h"
#include "Sprites.h"

uint8_t randomleg = 1;
uint8_t octopus_leg1 = 1;
bool octopus_leg1_reverse = false;
uint8_t octopus_leg2 = 1;
bool octopus_leg2_reverse = false;
uint8_t octopus_leg3 = 1;
bool octopus_leg3_reverse = false;
uint8_t octopus_leg4 = 1;
bool octopus_leg4_reverse = false;
uint8_t velocita = 3;

void Octopusleg() {

  if (velocita > maxTick) velocita = maxTick;

  for (size_t index_leg = 1; index_leg < 5; ++index_leg) {
  // Active sprites of leg1
  if (  (octopus_leg[index_leg] > 0) && (octopus_leg[index_leg]  < (octopus_leg_length[index_leg] + 1)) )
    for (size_t index = 0; index < (octopus_leg_length[index_leg] - 1); ++index)
         if (index_leg == 1) show_octopus_leg1[index] = show_octopus_leg1_settings[octopus_leg1 - 1][index];
         if (index_leg == 2) show_octopus_leg2[index] = show_octopus_leg2_settings[octopus_leg2 - 1][index];
         if (index_leg == 3) show_octopus_leg3[index] = show_octopus_leg3_settings[octopus_leg3 - 1][index];
         if (index_leg == 4) show_octopus_leg4[index] = show_octopus_leg4_settings[octopus_leg4 - 1][index];
  }
}

void Die() {
  // Sprites::drawPlusMask(61, 28, leg2_mask, 0);
}

void Octopus() {

  if (moveTick == velocita) {
    randomleg = random(1, 5);
    // sound.tones(OctopusSound);
    gb.sound.playTick();

    if (randomleg == 1) {
      if (octopus_leg1 < 5 && octopus_leg1_reverse == false) {
        ++octopus_leg1;
      }
      if (octopus_leg1 > 0 && octopus_leg1_reverse == true) {
        --octopus_leg1;
      }
      if (octopus_leg1 == 1) {
        octopus_leg1_reverse = false;
      }
      if (octopus_leg1 == 5) {
        octopus_leg1_reverse = true;
      }
    }

    if (randomleg == 2) {
      if (octopus_leg2 < 6 && octopus_leg2_reverse == false) {
        ++octopus_leg2;
      }
      if (octopus_leg2 > 0 && octopus_leg2_reverse == true) {
        --octopus_leg2;
      }
      if (octopus_leg2 == 1) {
        octopus_leg2_reverse = false;
      }
      if (octopus_leg2 == 6) {
        octopus_leg2_reverse = true;
      }
    }

    if (randomleg == 3) {
      if (octopus_leg3 < 5 && octopus_leg3_reverse == false) {
        ++octopus_leg3;
      }
      if (octopus_leg3 > 0 && octopus_leg3_reverse == true) {
        --octopus_leg3;
      }
      if (octopus_leg3 == 1) {
        octopus_leg3_reverse = false;
      }
      if (octopus_leg3 == 5) {
        octopus_leg3_reverse = true;
      }
    }

    if (randomleg == 4) {
      if (octopus_leg4 < 4 && octopus_leg4_reverse == false) {
        ++octopus_leg4;
      }
      if (octopus_leg4 > 0 && octopus_leg4_reverse == true) {
        --octopus_leg4;
      }
      if (octopus_leg4 == 1) {
        octopus_leg4_reverse = false;
      }
      if (octopus_leg4 == 4) {
        octopus_leg4_reverse = true;
      }
    }
  }
  Octopusleg();

  if (hited == true) {
    Die();
  }
}

void OctopusCollision() {
  if ((octopus_leg1 == 5 && subMove == 2) || (octopus_leg2 == 6 && subMove == 3) ||
      (octopus_leg3 == 5 && subMove == 4) || (octopus_leg4 == 4 && subMove == 5)) {
    getPoint = 0;
    hited = true;
  }
}

#endif
