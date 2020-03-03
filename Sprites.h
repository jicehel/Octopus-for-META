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
    uint8_t  x;      // the horizontal coordinate of the sprite on the spritesheet
    uint8_t  y;      // the vertical coordinate of the sprite on the spritesheet
    uint8_t  w;  // the width of the sprite
    uint8_t  h; // the height of the sprite
    uint16_t color;  // the color assigned to it on the spritesheet
};


// a static sprite for the Helicopter
constexpr Sprite helicopter = { 125, 5, 30, 25, sRed };

// Sprites of the blades of the Helicopter
constexpr Sprite blades[] = {
  { 120,  6,  9, 1, sGreen },  //  0
  { 132,  6,  9, 1, sGreen },  //  1
  { 135, 10,  9, 1, sGreen },  //  2
  { 147, 10,  9, 1, sGreen }   //  3
};

// the different postures and positions of the player's avatar
constexpr Sprite boat[] = {
  { 16, 80,  27, 20, sGreen },  //  0
  { 47, 80,  28, 24, sRed   },  //  1
  { 79, 80,  31, 19, sGreen }   //  2
};

// the misses sprites
constexpr Sprite miss[] = {
  { 120, 86,  22,  7, sRed  },  //  0
  { 117, 95,  13, 11, sRed  },  //  1
  { 131, 95,  13, 11, sRed  },  //  2
  { 145, 95,  13, 11, sRed  }   //  3
};

// the sprites of the flooded 
constexpr Sprite flooded[] = {
  { 88 , 103,  20, 10, sRed   },  //  0
  { 56 , 103,  21, 11, sGreen },  //  1
  { 26 , 102,  20, 12, sRed   },  //  2
  { 46 , 115,  13,  8, sRed   },  //  3
  { 74 , 113,  13,  9, sRed   },  //  4
  { 116, 109,  12, 14, sRed   }   //  5
};

// the sprites of the shark
constexpr Sprite shark[] = {
  { 79 , 106,  7 ,  6, sRed   },  //  0
  { 47 , 106,  7 ,  6, sRed   },  //  1
  { 32 , 116,  6 ,  6, sRed   },  //  2
  { 60 , 115,  7 ,  7, sRed   },  //  3
  { 89 , 107,  25, 16, sGreen }   //  4
};

// the sprite pauseScreen
constexpr Sprite spritepauseScreen = { 1, 9, 28, 7, sRed  };

// the sprite Game Over
constexpr Sprite spriteGameOver = { 1, 17, 53, 7, sRed  };

// the sprites of the para
constexpr Sprite para[] = {
  // col 1
  { 106,  5,  9, 13, sRed   },  //  0
  {  90,  8, 14, 14, sGreen },  //  1
  {  76,  8, 15, 21, sRed   },  //  2
  {  63, 14, 11, 25, sGreen },  //  3
  {  48, 33, 15, 22, sRed   },  //  4
  {  36, 52, 18, 22, sGreen },  //  5
  {  28, 72, 19, 22, sRed   },  //  6
  // col 2
  { 112, 19,  10, 12, sRed   },  //  7
  { 100, 17,  15, 14, sGreen },  //  8
  {  89, 18,  11, 27, sRed   },  //  9
  {  74, 32,  15, 23, sGreen },  //  10
  {  64, 48,  17, 24, sRed   },  //  11
  {  59, 72,  19, 22, sGreen },  //  12
  // col 3
  { 124, 30,  10, 11, sRed   },  //  13
  { 114, 28,  11, 18, sGreen },  //  14
  { 100, 32,  14, 21, sRed   },  //  15
  {  92, 49,  18, 23, sGreen },  //  16
  {  93, 72,  18, 22, sRed   }   //  17
};

#endif
