#ifndef TICTACTOEKRAKOW_BOARD_H
#define TICTACTOEKRAKOW_BOARD_H

#include "coord.h"
class board {
    void sleepcp(int milliseconds);

public:
    board() = default;
    void init_grid();

    void print_grid();

    static void clear();

    coord inputToCoordinate(int input);

    void input(bool human, int input);

    bool isValidPlay();

    char grid[3][3]{};
};


#endif //TICTACTOEKRAKOW_BOARD_H
