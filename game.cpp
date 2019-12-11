#include <iostream>
#include "game.h"
#include "board.h"
#include "cstdlib"

using namespace std;

void game::new_game() {
    class board b;
    b.init_grid();
    b.print_grid();
    tictactoe();
}

void game::tictactoe() {
    int x;
    // 0 mean there any winner ATM
    while (GAME_STATE == 0) {
        // Wait for Player turn
        cin >> x;
        b.input(true, x);
        b.print_grid();
        check_winner();

        // Computer turn
        x = rand() % 9;
        b.input(false, x);
        b.print_grid();
        GAME_STATE ? check_winner() : 1;
    }

}

bool game::check_winner() {
    for (int i = 0;i < 3;i++) {
        if (b.grid[i][0] == b.grid[i][1] && b.grid[i][1] == b.grid[i][2] && b.grid[i][0] != '-') {
            return true;
        }
        if (b.grid[0][i] == b.grid[1][i] && b.grid[1][i] == b.grid[2][i] && b.grid[0][i] != '-') {
            return true;
        }
    }
    if (b.grid[0][0] == b.grid[1][1] && b.grid[1][1] == b.grid[2][2] && b.grid[0][0] != '-') {
        return true;
    }
    if (b.grid[0][2] == b.grid[1][1] && b.grid[1][1] == b.grid[2][0] && b.grid[0][2] != '-') {
        return true;
    }
    return false;
}

void game::turn(int input) {
    cout << input;
}