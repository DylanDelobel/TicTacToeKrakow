#include <cstdlib>
#include <iostream>
#include "board.h"

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

void board::input(int input) {
    switch (input){
        case 1:
            grid[2][0] = 'X';
            break;
        case 2:
            grid[2][1] = 'X';
            break;
        case 3:
            grid[2][2] = 'X';
            break;
        case 4:
            grid[1][0] = 'X';
            break;
        case 5:
            grid[1][1] = 'X';
            break;
        case 6:
            grid[1][2] = 'X';
            break;
        case 7:
            grid[0][0] = 'X';
            break;
        case 8:
            grid[0][1] = 'X';
            break;
        case 9:
            grid[0][2] = 'X';
            break;
        default:
            break;
    }
}
