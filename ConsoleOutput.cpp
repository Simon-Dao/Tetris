//
// Created by simon on 12/24/2022.
//

#include "ConsoleOutput.h"
#include "Game.h"
#include "iostream"

void drawScoreboard(unsigned char *board, int score) {

}

void ConsoleOutput::renderBuffer() {

}

void ConsoleOutput::render(unsigned char *board, int score, std::string nextBlock) {

    drawScoreboard(board, score);

    for(int x = 0; x < Game::nFieldW; x++) {
        for(int y = 0; y < Game::nFieldH; y++) {


        }
    }

    //draw the bottom hashtag line
    std::string bottomline;
    for(int x = 0; x < Game::nFieldW; x++) {
        bottomline += "#";
    }
    std::cout << bottomline << std::endl;
}

