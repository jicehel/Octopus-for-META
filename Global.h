#pragma once
#ifndef OCTOPUS_GLOBAL
#define OCTOPUS_GLOBAL

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
constexpr uint16_t sPink  = 0x1ff8;
constexpr uint16_t sBlack = 0x0000;

// -------------------------------------------------------------------------
// Define global variables
// -------------------------------------------------------------------------

int16_t  moveTick;
int8_t  maxTick = 8;
uint16_t minHighscore;
uint8_t animFrame = 0;
bool catchGold = false;
bool hited = false;
bool inGold = false;
uint16_t score = 0;
uint16_t getPoint = 0;
uint8_t life = 3;
bool subGold = false;
uint8_t subMove = 0;
uint8_t barcaState = 0;
bool moveSubButton = true;
uint8_t dieFrame = 0;
bool endGame = false;
uint16_t highScore = 0;
uint8_t diverToShow = 0;
uint8_t diverArmToShow = 0;
uint8_t diverBagToShow = 0;
bool debug = false;
// just for debug
uint16_t oldVal;

// -------------------------------------------------------------------------
// Sprite visibility
// -------------------------------------------------------------------------

bool show_SpriteDiver1 = false;
bool show_SpriteDiver1_arm1 = false;
bool show_SpriteDiver1_arm2 = false;
bool show_SpriteDiver2 = false;
bool show_SpriteDiver3 = false;

bool show_octopus_leg1_1 = false;
bool show_octopus_leg1_2 = false;
bool show_octopus_leg1_3 = false;
bool show_octopus_leg1_4 = false;

bool show_octopus_leg2_1 = false;
bool show_octopus_leg2_2 = false;
bool show_octopus_leg2_3 = false;
bool show_octopus_leg2_4 = false;
bool show_octopus_leg2_5 = false;

bool show_octopus_leg3_1 = false;
bool show_octopus_leg3_2 = false;
bool show_octopus_leg3_3 = false;
bool show_octopus_leg3_4 = false;

bool show_octopus_leg4_1 = false;
bool show_octopus_leg4_2 = false;
bool show_octopus_leg4_3 = false;

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

#endif
