#pragma once
#ifndef PARACHUTE_SPRITES
#define PARACHUTE_SPRITES

// -------------------------------------------------------------------------
// Sprites
// -------------------------------------------------------------------------
// The surface of the spritesheet is deliberately not optimized here to
// facilitate positioning calculations at the time of rendering.
// -------------------------------------------------------------------------


// -------------------------------------------------------------------------
// Sprite definition
// -------------------------------------------------------------------------

struct Sprite {
  uint8_t  x;     // the horizontal coordinate of the sprite on the spritesheet
  uint8_t  y;     // the vertical coordinate of the sprite on the spritesheet
  uint8_t  w;     // the width of the sprite
  uint8_t  h;     // the height of the sprite
  uint16_t color; // the color assigned to it on the spritesheet
};


// a static sprite for "Appuyer sur A"
constexpr Sprite PressAText = { 58, 11, 74, 10, sRed };

// the sprites of the divers in the baca
constexpr Sprite spriteDiver1      = { 11,  3, 14, 18, sBlack  };
constexpr Sprite spriteDiver1_arm1 = { 23, 16,  2,  4, sGreen  };
constexpr Sprite spriteDiver1_arm2 = { 23,  6,  9, 13, sRed    };
constexpr Sprite spriteDiver2      = { 33,  3, 11, 17, sBlack  };
constexpr Sprite spriteDiver3      = { 45,  3, 11, 17, sBlack  };

// the sprite of the Diver diving
constexpr Sprite diver[] = {
  { 11, 30, 24, 24, sBlack },  //  0
  { 14, 72, 20, 28, sBlack },  //  1
  { 48, 89, 19, 29, sBlack },  //  2
  { 77, 90, 20, 28, sBlack },  //  3
  {107, 94, 19, 27, sBlack },  //  4
  { 82, 59, 14, 17, sGreen },  //  5
};

// the sprite of the Diver arm
constexpr Sprite diverArm[] = {
  { 123, 108, 8, 6,  sRed },   //  0
  { 121, 108, 4, 9, sPink },   //  1
  { 111, 17,  4, 4,  sRed },   //  2
  {  91, 78,  4, 9, sGreen},   //  3
  {  87, 75,  6, 11, sRed },   //  4
};

// the sprite of the Diver bag
constexpr Sprite diverBag[] = {
  { 94, 108,  5, 10, sRed  },  //  0
  { 63, 109,  6,  9, sRed  },  //  1
  { 29,  93,  5,  8, sRed  },  //  2
  { 32,  43,  6, 10, sRed  },  //  3
  {102, 107,  8,  9, sPink },  //  4
  {104, 68,  7, 12, sGreen },  //  5
  {104, 64,  7, 20,  sRed  },  //  6
};

// the sprite of the Octopus legs
constexpr Sprite spriteOctopus_leg1_1 = { 56,  40, 19, 10, sPink };
constexpr Sprite spriteOctopus_leg1_2 = { 52,  51, 11,  4, sRed  };
constexpr Sprite spriteOctopus_leg1_3 = { 48,  56, 10,  9, sPink };
constexpr Sprite spriteOctopus_leg1_4 = { 36,  64, 19, 19, sRed  };

constexpr Sprite spriteOctopus_leg2_1 = { 73,  52, 17, 11, sRed  };
constexpr Sprite spriteOctopus_leg2_2 = { 72,  62,  9, 13, sPink };
constexpr Sprite spriteOctopus_leg2_3 = { 71,  69,  7, 13, sRed  };
constexpr Sprite spriteOctopus_leg2_4 = { 71,  79,  6, 11, sPink };
constexpr Sprite spriteOctopus_leg2_5 = { 66,  86,  7, 12, sRed  };

constexpr Sprite spriteOctopus_leg3_1 = { 95,  66,  9,  9, sPink  };
constexpr Sprite spriteOctopus_leg3_2 = { 96,  73,  7,  9, sBlack };
constexpr Sprite spriteOctopus_leg3_3 = { 99,  79,  5, 10, sPink  };
constexpr Sprite spriteOctopus_leg3_4 = { 99,  87,  6, 14, sGreen  };

constexpr Sprite spriteOctopus_leg4_1 = { 118,  74,  6,  7, sRed   };
constexpr Sprite spriteOctopus_leg4_2 = { 117,  80,  8,  8, sBlack };
constexpr Sprite spriteOctopus_leg4_3 = { 119,  88, 12, 13, sGreen };

// the sprite pauseScreen
constexpr Sprite spritepauseScreen = { 58, 0, 42, 10, sRed  };

// the sprite Game Over
constexpr Sprite spriteGameOver = { 70, 31, 67, 8, sRed  };



#endif
