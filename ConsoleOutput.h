//
// Created by simon on 12/24/2022.
//

#ifndef TETRIS_CONSOLEOUTPUT_H
#define TETRIS_CONSOLEOUTPUT_H

#include "iostream"

class ConsoleOutput {

public:
    static const int nScreenW = 80;
    static const int nScreenH = 30;

    void render(unsigned char* board, int score, std::string nextBlock);

    void renderBuffer();

    void drawScoreboard(unsigned char *board, int score);
};


#endif //TETRIS_CONSOLEOUTPUT_H
