#ifndef TICTACTOEKRAKOW_GAME_H
#define TICTACTOEKRAKOW_GAME_H

#include "board.h"

class game {
private:
    int GAME_STATE = 0;
    void tictactoe();
    void turn(int input);
    bool check_winner();
public:
    board b;
    void new_game();
};


#endif //TICTACTOEKRAKOW_GAME_H
