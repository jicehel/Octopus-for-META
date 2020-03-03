#ifndef OCTOPUS_SUB_SPRITE
#define OCTOPUS_SUB_SPRITE

byte frameSub = 0;

void die() {
  moveSubButton = false;
  show_octopus_leg3_1 = true;
  show_octopus_leg3_2 = true;
  show_octopus_leg3_3 = true;
  show_octopus_leg3_4 = true;
  diverToShow = 6;
  if ((frameSub == 0) || (frameSub == 2) || (frameSub == 4) || (frameSub == 6)) {
    diverArmToShow = 4;
    diverBagToShow = 6;
  }
  if (( frameSub == 1) || (frameSub == 3) || (frameSub == 5) || (frameSub == 7)) {
    diverArmToShow = 5;
    diverBagToShow = 7;
  }
}

void animSubGold() {
  if (subGold == false) {
    if (animFrame == 0) {
      diverToShow = 5;
      diverArmToShow = 1;
      diverBagToShow = 0;
    }
    if (animFrame == 1) {
      diverToShow = 5;
      diverArmToShow = 2;
      diverBagToShow = 0;
    }
    if (animFrame == 2) {
      diverToShow = 5;
      diverArmToShow = 3;
      diverBagToShow = 0;
    }
    if (animFrame == 3) {
      ++score;
      ++getPoint;
      gb.sound.play("OR.WAV");
      subGold = true;
      subMove = 5;
      animFrame = 1;
      catchGold = false;
    }
  } else if (subGold == true) {
    if (animFrame == 0) {
      diverToShow = 5;
      diverArmToShow = 1;
      diverBagToShow = 6 ;
    }
    if (animFrame == 1) {
      diverToShow = 5;
      diverArmToShow = 2;
      diverBagToShow = 6 ;
    }
    if (animFrame == 2) {
      diverToShow = 5;
      diverArmToShow = 3;
      diverBagToShow = 6 ;
    }
    if (animFrame == 3) {
      ++score;
      ++getPoint;
      gb.sound.play("OR.WAV");
      subGold = true;
      subMove = 5;
      animFrame = 0;
      catchGold = false;
    }
  }
  if ((moveTick == maxTick) || (moveTick == maxTick / 2)) {
    animFrame++;
  }
}

void Sub() {
  // If diger hasn't been hited
  if (hited == false) {
    if (subGold == false) {
      // if diver has no bag
      diverToShow = subMove;
      diverBagToShow = 0;
      if (subMove == 0) diverArmToShow = 0;
    } else {
      // if diver has a gold bag
      if (subMove == 0) {
        diverToShow = 0;
        diverBagToShow = 0;
        diverArmToShow = 0;
      } else {
        diverToShow = subMove;
        diverBagToShow = 5 - subMove;
      }
    }
  }
  if (hited == true && life == 3) {
    animBarca = 0;
    if (animBarca == 0) {
      show_SpriteDiver1 = true;
      show_SpriteDiver1_arm1 = true;
      show_SpriteDiver1_arm2 = false;
      show_SpriteDiver2 = false;
      show_SpriteDiver3 = true;
    }

    if (animBarca == 1) {
      show_SpriteDiver1 = true;
      show_SpriteDiver1_arm1 = true;
      show_SpriteDiver1_arm2 = false;
      show_SpriteDiver2 = true;
      show_SpriteDiver3 = false;
    }
    if ((moveTick == maxTick) || (moveTick == maxTick / 2)) {
      animBarca++;
    }
    die();
    if (frameSub == 8) {
      barcaState = 3;
      hited = false;
      subMove = 0;
      inGold = false;
      subGold = false;
      --life;
      frameSub = 0;
      moveSubButton = true;
    }
    if ((moveTick == maxTick) || (moveTick == maxTick / 2)) {
      frameSub++;
      gb.sound.playTick();
    }
  } else if (hited == true && life == 2) {
    animBarca = 0;
    if (animBarca == 0) {
      show_SpriteDiver1 = false;
      show_SpriteDiver1_arm1 = false;
      show_SpriteDiver1_arm2 = true;
      show_SpriteDiver2 = false;
      show_SpriteDiver3 = false;
    }
    if (animBarca == 1) {
      show_SpriteDiver1 = true;
      show_SpriteDiver1_arm1 = true;
      show_SpriteDiver1_arm2 = false;
      show_SpriteDiver2 = false;
      show_SpriteDiver3 = false;
    }
    if ((moveTick == maxTick) || (moveTick == maxTick / 2)) {
      animBarca++;
    }
    die();
    if (frameSub == 8) {
      barcaState = 6;
      hited = false;
      subMove = 0;
      inGold = false;
      subGold = false;
      --life;
      frameSub = 0;
      moveSubButton = true;
    }
    if ((moveTick == maxTick) || (moveTick == maxTick / 2)) {
      frameSub++;
      gb.sound.playTick();
    }
  } else if (hited == true && life == 1) {
    moveSubButton = false;
    show_SpriteDiver1 = false;
    show_SpriteDiver1_arm1 = false;
    show_SpriteDiver1_arm2 = false;
    show_SpriteDiver2 = false;
    show_SpriteDiver3 = false;
    die();
    if (frameSub == 8) {
      barcaState = 10;
      hited = false;
      subMove = 0;
      inGold = false;
      subGold = false;
      --life;
      frameSub = 0;
      moveSubButton = true;
    }
    if ((moveTick == maxTick) || (moveTick == maxTick / 2)) {
      frameSub++;
      gb.sound.playTick();
    }
  }
}



#endif
