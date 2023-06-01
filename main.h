#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/
struct fly {
    int row;
    int col;
    int row_dist;
    int col_dist;
};

struct fly_state {
    struct fly flies;
};

struct flyswatter {
    int row;
    int col;
};

struct flyswatter_state {
    struct flyswatter flyswatters;
};

#endif
