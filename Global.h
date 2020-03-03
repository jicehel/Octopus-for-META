#pragma once
#ifndef PARACHUTE_GLOBAL
#define PARACHUTE_GLOBAL

// -------------------------------------------------------------------------
// Global constants
// -------------------------------------------------------------------------

constexpr uint8_t  screenWidth  = 160;
constexpr uint8_t  screenHeight = 128;
constexpr uint8_t  sliceHeight  = 8;                    // Redefined the size of the buffer to take less memory
constexpr uint8_t  slices = screenHeight / sliceHeight; // Number of horizontal slices to be cut is calculated
constexpr uint16_t transColor   = 0xdfff;
constexpr uint16_t sRed   = 0x00f8;
constexpr uint16_t sGreen = 0xe007;
constexpr uint16_t sBlack = 0x0000;

// Define value of the first sprite of each column of paachutiste
constexpr uint8_t  firstSpriteColumn[] { 0, 7, 13,17 };


// -------------------------------------------------------------------------
// Define global variables
// -------------------------------------------------------------------------

uint16_t score;
uint16_t minHighscore;
int16_t  misses;
int16_t  moveTick;
int16_t  spawnDelay;
int8_t   spawnCount;
int8_t   speedMax;
uint8_t  parachuteLaunchCount;
int8_t   parachutes[10];
int8_t   helicopterAnimation;
int8_t   sharkAnimation;
int8_t   floodedAnimation;
uint8_t  speedBlades;

// -------------------------------------------------------------------------
// All possible game state
// -------------------------------------------------------------------------

enum class GameState : uint8_t {
  home,
  run,
  gameOver,
  pauseScreen
};

GameState gameState {GameState::home};

// -------------------------------------------------------------------------
// Player definition
// -------------------------------------------------------------------------

struct Player {
  uint8_t  spriteIndex;
};

Player player = {
  0      // spriteIndex 0, the position at the left
};

#endif
