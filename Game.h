//
// Created by simon on 12/25/2022.
//

#ifndef TETRIS_GAME_H
#define TETRIS_GAME_H
#include "iostream"
#include "ConsoleOutput.h"

class Game {
public:

    static const int nFieldW = 12;
    static const int nFieldH = 18;
    unsigned char* board;

    int score = 0;

    std::string* tetromino;
    ConsoleOutput consoleRenderer;

    Game();

    int rotate(int px,int py,int r);

    void gameLoop();

private:
    std::string* initTetromino();
    unsigned char* initBoard();
};


#endif //TETRIS_GAME_H
