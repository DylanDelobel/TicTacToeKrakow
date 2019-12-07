#include <iostream>
#include "game.h"

using namespace std;

int main() {
    std::cout << "Tic Tac Toe!" << std::endl;
    game game{};
    game.new_game();
    return 0;
}