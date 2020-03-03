#ifndef OCTOPUS_SPRITE
#define OCTOPUS_SPRITE

#include "Global.h"
#include "Sprites.h"

int randomleg = 1;
int octopus_leg1 = 1;
bool octopus_leg1_reverse = false;
int octopus_leg2 = 1;
bool octopus_leg2_reverse = false;
int octopus_leg3 = 1;
bool octopus_leg3_reverse = false;
int octopus_leg4 = 1;
bool octopus_leg4_reverse = false;
int velocita = 6;

void Octopusleg() {

  if (velocita > maxTick) velocita = maxTick;

  // Active sprites of leg1
  if (octopus_leg1 == 1) {
    show_octopus_leg1_1 = false;
    show_octopus_leg1_2 = false;
    show_octopus_leg1_3 = false;
    show_octopus_leg1_4 = false;
  } else if (octopus_leg1 == 2) {
    show_octopus_leg1_1 = true;
    show_octopus_leg1_2 = false;
    show_octopus_leg1_3 = false;
    show_octopus_leg1_4 = false;
  } else if (octopus_leg1 == 3) {
    show_octopus_leg1_1 = true;
    show_octopus_leg1_2 = true;
    show_octopus_leg1_3 = false;
    show_octopus_leg1_4 = false;
  } else if (octopus_leg1 == 4) {
    show_octopus_leg1_1 = true;
    show_octopus_leg1_2 = true;
    show_octopus_leg1_3 = true;
    show_octopus_leg1_4 = false;
  } else if (octopus_leg1 == 5) {
    show_octopus_leg1_1 = true;
    show_octopus_leg1_2 = true;
    show_octopus_leg1_3 = true;
    show_octopus_leg1_4 = true;
  }

  // Active sprites of leg2
  if (octopus_leg2 == 1) {
    show_octopus_leg2_1 = false;
    show_octopus_leg2_2 = false;
    show_octopus_leg2_3 = false;
    show_octopus_leg2_4 = false;
    show_octopus_leg2_5 = false;
  } else if (octopus_leg2 == 2) {
    show_octopus_leg2_1 = true;
    show_octopus_leg2_2 = false;
    show_octopus_leg2_3 = false;
    show_octopus_leg2_4 = false;
    show_octopus_leg2_5 = false;
  } else if (octopus_leg2 == 3) {
    show_octopus_leg2_1 = true;
    show_octopus_leg2_2 = true;
    show_octopus_leg2_3 = false;
    show_octopus_leg2_4 = false;
    show_octopus_leg2_5 = false;
  } else if (octopus_leg2 == 4) {
    show_octopus_leg2_1 = true;
    show_octopus_leg2_2 = true;
    show_octopus_leg2_3 = true;
    show_octopus_leg2_4 = false;
    show_octopus_leg2_5 = false;
  } else if (octopus_leg2 == 5) {
    show_octopus_leg2_1 = true;
    show_octopus_leg2_2 = true;
    show_octopus_leg2_3 = true;
    show_octopus_leg2_4 = true;
    show_octopus_leg2_5 = false;
  } else if (octopus_leg2 == 6) {
    show_octopus_leg2_1 = true;
    show_octopus_leg2_2 = true;
    show_octopus_leg2_3 = true;
    show_octopus_leg2_4 = true;
    show_octopus_leg2_5 = true;
  }

  // Active sprites of leg3
  if (octopus_leg3 == 1) {
    show_octopus_leg3_1 = false;
    show_octopus_leg3_2 = false;
    show_octopus_leg3_3 = false;
    show_octopus_leg3_4 = false;
  } else if (octopus_leg3 == 2) {
    show_octopus_leg3_1 = true;
    show_octopus_leg3_2 = false;
    show_octopus_leg3_3 = false;
    show_octopus_leg3_4 = false;
  } else if (octopus_leg3 == 3) {
    show_octopus_leg3_1 = true;
    show_octopus_leg3_2 = true;
    show_octopus_leg3_3 = false;
    show_octopus_leg3_4 = false;
  } else if (octopus_leg3 == 4) {
    show_octopus_leg3_1 = true;
    show_octopus_leg3_2 = true;
    show_octopus_leg3_3 = true;
    show_octopus_leg3_4 = false;
  } else if (octopus_leg3 == 5) {
    show_octopus_leg3_1 = true;
    show_octopus_leg3_2 = true;
    show_octopus_leg3_3 = true;
    show_octopus_leg3_4 = true;
  }

  // Active sprites of leg4
  if (octopus_leg4 == 1) {
    show_octopus_leg4_1 = false;
    show_octopus_leg4_2 = false;
    show_octopus_leg4_3 = false;
  } else if (octopus_leg4 == 2) {
    show_octopus_leg4_1 = true;
    show_octopus_leg4_2 = false;
    show_octopus_leg4_3 = false;
  } else if (octopus_leg4 == 3) {
    show_octopus_leg4_1 = true;
    show_octopus_leg4_2 = true;
    show_octopus_leg4_3 = false;
  } else if (octopus_leg4 == 4) {
    show_octopus_leg4_1 = true;
    show_octopus_leg4_2 = true;
    show_octopus_leg4_3 = true;
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
