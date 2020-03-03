#ifndef OCTOPUS_BARCA
#define OCTOPUS_BARCA

#include "Global.h"
#include "Sprites.h"

byte animBarca = 0;

void Barca() {
  if (barcaState == 0 && hited == false) {
    show_SpriteDiver1 = true;
    show_SpriteDiver1_arm1 = true;
    show_SpriteDiver1_arm2 = false;
    show_SpriteDiver2 = true;
    show_SpriteDiver3 = true;
  } else if (barcaState == 1 && hited == false) {
    show_SpriteDiver1 = false;
    show_SpriteDiver1_arm1 = false;
    show_SpriteDiver1_arm2 = false;
    show_SpriteDiver2 = true;
    show_SpriteDiver3 = true;
  } else if (barcaState == 2 && hited == false) {
    if (animBarca == 0 || animBarca == 2 ) {
      show_SpriteDiver1 = true;
      show_SpriteDiver1_arm1 = true;
      show_SpriteDiver1_arm2 = false;
      show_SpriteDiver2 = true;
      show_SpriteDiver3 = true;
    } else if (animBarca == 1 || animBarca == 3) {
      show_SpriteDiver1 = true;
      show_SpriteDiver1_arm1 = false;
      show_SpriteDiver1_arm2 = true;
      show_SpriteDiver2 = true;
      show_SpriteDiver3 = true;
    } else if (animBarca == 4) {
      score = score + getPoint;
      subGold = false;
      animBarca = 0;
      barcaState = 0;
    }
    if (moveTick == maxTick) {
      animBarca++;
      gb.sound.playTick();
    }
  } else if (barcaState == 3 && hited == false) {
    show_SpriteDiver1 = true;
    show_SpriteDiver1_arm1 = true;
    show_SpriteDiver1_arm2 = false;
    show_SpriteDiver2 = true;
    show_SpriteDiver3 = false;
  } else if (barcaState == 4 && hited == false) {
    show_SpriteDiver1 = false;
    show_SpriteDiver1_arm1 = false;
    show_SpriteDiver1_arm2 = false;
    show_SpriteDiver2 = true;
    show_SpriteDiver3 = false;
  } else if (barcaState == 5 && hited == false) {
    if (animBarca == 0 || animBarca == 2) {
      show_SpriteDiver1 = true;
      show_SpriteDiver1_arm1 = true;
      show_SpriteDiver1_arm2 = false;
      show_SpriteDiver2 = true;
      show_SpriteDiver3 = false;
    }
    if (animBarca == 1 || animBarca == 3) {
      show_SpriteDiver1 = true;
      show_SpriteDiver1_arm1 = false;
      show_SpriteDiver1_arm2 = true;
      show_SpriteDiver2 = true;
      show_SpriteDiver3 = false;
    }
    if (animBarca == 4) {
      score = score + getPoint;
      subGold = false;
      animBarca = 0;
      barcaState = 3;
    }
    if (moveTick == maxTick) {
      animBarca++;
      gb.sound.playTick();
    }
  } else if (barcaState == 6 && hited == false) {
    show_SpriteDiver1 = true;
    show_SpriteDiver1_arm1 = true;
    show_SpriteDiver1_arm2 = false;
    show_SpriteDiver2 = false;
    show_SpriteDiver3 = false;
  } else if (barcaState == 7 && hited == false) {
    show_SpriteDiver1 = false;
    show_SpriteDiver1_arm1 = false;
    show_SpriteDiver1_arm2 = false;
    show_SpriteDiver2 = false;
    show_SpriteDiver3 = false;
  } else if (barcaState == 8 && hited == false) {
    if (animBarca == 0 || animBarca == 2) {
      show_SpriteDiver1 = true;
      show_SpriteDiver1_arm1 = true;
      show_SpriteDiver1_arm2 = false;
      show_SpriteDiver2 = false;
      show_SpriteDiver3 = false;
    }
    if (animBarca == 1 || animBarca == 3) {
      show_SpriteDiver1 = true;
      show_SpriteDiver1_arm1 = false;
      show_SpriteDiver1_arm2 = true;
      show_SpriteDiver2 = false;
      show_SpriteDiver3 = false;
    }
    if (animBarca == 4) {
      score = score + getPoint;
      subGold = false;
      animBarca = 0;
      barcaState = 9;
    }
    if (moveTick == maxTick) {
      animBarca++;
      gb.sound.playTick();
    }
  } else if (barcaState == 9 && hited == false) {
    show_SpriteDiver1 = true;
    show_SpriteDiver1_arm1 = true;
    show_SpriteDiver1_arm2 = false;
    show_SpriteDiver2 = false;
    show_SpriteDiver3 = false;
  } else if (barcaState == 10) {
    show_SpriteDiver1 = false;
    show_SpriteDiver1_arm1 = false;
    show_SpriteDiver1_arm2 = false;
    show_SpriteDiver2 = false;
    show_SpriteDiver3 = false;
  }
}

#endif
