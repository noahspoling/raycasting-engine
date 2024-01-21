/*********************************************************************************************************
CHANGE LOG:

CREATED BY: Noah Poling
DATE: Jan 21 2024
DESCRIPTION:

MODIFIED BY:
DATE:
DESCRIPTION:
********************************************************************************************************/

#ifndef POSITION_H
#define POSITION_H

#include <math.h>

struct Position
{
    float x;
    float y;
    double direction; //view degree
};

//start new map facing away from entrance on correct cardnal door
void resetPosition(char cardnalDirection, int row, int col) {

    switch (cardnalDirection)
    {
    case 'n':
        /* code */
        break;
    case 'e':
        /* code */
        break;
    case 's':
        /* code */
        break;
    case 'w':
        /* code */
        break;
    default:
        break;
    }

}



#endif // POSITION_H
