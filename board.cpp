#include <cstdlib>
#include <iostream>
#include "board.h"
#include "coord.h"

using namespace std;

void board::clear(){
    #if defined _WIN32
        system("cls");
    #elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
        system("clear");
    #elif defined (__APPLE__)
        system("clear");
    #endif
}

void board::init_grid() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            grid[i][j] = '-';
        }
    }
}

void board::print_grid() {
    board::clear();
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (grid[i][j] == 'X')
                cout << "\033[1m\033[31m X\033[0m";
            else if (grid[i][j] == 'O')
                cout << "\033[1m\033[34m O\033[0m";
            else
                cout << " -";
        }
        cout << "\n";
    }
//    cout << "Possibility :";
}

coord board::inputToCoordinate(int input) {
    coord c;
    switch (input){
        case 1:
            c.i = 2;
            c.j = 0;
            break;
        case 2:
            grid[2][1] = c;
            break;
        case 3:
            grid[2][2] = c;
            break;
        case 4:
            grid[1][0] = c;
            break;
        case 5:
            grid[1][1] = c;
            break;
        case 6:
            grid[1][2] = c;
            break;
        case 7:
            grid[0][0] = c;
            break;
        case 8:
            grid[0][1] = c;
            break;
        case 9:
            grid[0][2] = c;
            break;
        default:
            break;
    }

    return coord;
}
void board::play(int i, int j) {
    char c = human ? 'X' : 'O';

}

bool board::isValidPlay() {
    if (grid[])
    return false;
}
