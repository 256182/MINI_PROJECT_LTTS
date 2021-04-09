/**
 * @file snooker.h
 * @author Mehul Kothari
 * @brief Creating structures for main function
 * @version 0.1
 * @date 2021-04-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __SNOOKER_H__
#define __SNOOKER_H__

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief colors_t function defines value for each colour
 * 
 */
typedef enum colors_t {
    ERROR_PTR=-1,
    NOT_VALID=-2,
    RED=1,
    YELLOW=2,
    GREEN=3,
    BROWN=4,
    BLUE=5,
    PINK=6,
    BLACK=7

}colors_t;
/**
 * @brief players_t initializes 2 players
 * 
 */
typedef struct players_t {
    int player1;
    int player2;    
} players_t;
/**
 * @brief 
 * 
 * @param players input
 * @return colors_t 
 */

colors_t red(players_t *players);
colors_t yellow(players_t *players);
colors_t green(players_t *players);
colors_t brown(players_t *players);
colors_t blue(players_t *players);
colors_t pink(players_t *players);
colors_t black(players_t *players);

#endif  