#include <iostream>
#include "game.h"
#include "board.h"

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
        b.input(x);
        b.print_grid();
    }

}

void game::turn(int input) {
    cout << input;
}