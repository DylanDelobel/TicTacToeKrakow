#ifndef TICTACTOEKRAKOW_GAME_H
#define TICTACTOEKRAKOW_GAME_H

#include "board.h"

class game {
private:
    int GAME_STATE = 0;
    board b;
    void tictactoe();
    void turn(int input);
public:
    void new_game();
};


#endif //TICTACTOEKRAKOW_GAME_H
