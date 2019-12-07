#ifndef TICTACTOEKRAKOW_BOARD_H
#define TICTACTOEKRAKOW_BOARD_H


class board {
    void sleepcp(int milliseconds);
public:
    board() = default;
protected:
    char grid[3][3]{};
public:
    void init_grid();

    void print_grid();

    static void clear();

    void input(int input);
};


#endif //TICTACTOEKRAKOW_BOARD_H
