//Author: Noah Poling
//Date: Jan 20 2024
//Description: I put everything related to the game's state in here.
//Main function should take user inputs as an "interface" of sorts to the game.

#ifndef GAME_STATE_H
#define GAME_STATE_H

#include "player.h"
#include "position.h"



struct GameState {
    int level;
    struct Player player;
    struct Position position;
};


void playerMove(struct GameState *gs) {
    float oldAngle = gs->position.direction;
    float dx, dy;

    gs->position.x += cos(oldAngle) * 1;
    gs->position.y += sin(oldAngle) * 1;
    return 0;
}

void turn(struct Position *position, char input) {
    float oldAngle = position->direction;
    float px = position->x;
    float py = position->y;

    if(input == 'l') {
        oldAngle += 5;
        if(position->direction > 360) {
            position->direction = oldAngle - 360;
        }
    }
    if (input == 'r') {
        oldAngle -= 5;
        if(position->direction < 0) {
            position->direction = oldAngle * -1;
        }
    }
    
}

//return address of GameState
struct GameState* init() {
    struct GameState* gs = malloc(sizeof(struct GameState));

    gs->level = 1;


    return gs;
}

#endif // GAME_STATE_H