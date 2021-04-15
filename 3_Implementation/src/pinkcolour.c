#include"stdlib.h"
#include"snooker.h"
/**
 * @brief Function used for unit testing and to return value 7
 * 
 * @param players 
 * @return colors_t 
 */

colors_t pink(players_t *players){
    if (NULL == players){
        return ERROR_PTR;
    

    }
    else if((players->player1 !=0 && players->player2!=0 )||(players->player1 !=1 && players->player2!=1)){
        return NOT_VALID;
    }
    else{
        return PINK;
    }

}