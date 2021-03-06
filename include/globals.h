#ifndef GLOBALS_H
#define GLOBALS_H

//All libraries
#include <allegro.h>

//All defined presets put here
//tile Attributes
#define gas 0
#define solid 1
#define liquid 2
#define climb 3
#define harmful 4
#define interactive 5
#define item 6
#define spawn 7
#define half_block_top 8
#define half_block_bottom 9
#define quarter_block_top 10
#define quarter_block_bottom 11
#define light 12
#define finish 13

//Character directions
// 0-3 left, 4-7 right, 8-11 up
#define LEFT 0
#define RIGHT 4
#define UP 8

//Enemies
#define enemy_vorticon 0
#define enemy_robot 1
#define enemy_danny 2

// Projectile images (shouldn't be here :S)
extern BITMAP* projectileSprites[10][3];

// Set next state
void set_next_state( int newState );

//Game states
enum GameStates
{
    STATE_NULL,
    STATE_INIT,
    STATE_INTRO,
    STATE_MENU,
    STATE_EDIT,
    STATE_GAME,
    STATE_EXIT,
};

// Frames
extern int frames_done;

// Single/Multiplayer
extern bool single_player;

//State variables
extern int stateID;
extern int nextState;
extern int levelOn;

#endif
