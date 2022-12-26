//
// Created by simon on 12/24/2022.
//

#include "iostream"
#include "ConsoleOutput.h"
#include "Game.h"

void ConsoleOutput::drawScoreboard(unsigned char *board, int score) {

}

void ConsoleOutput::renderBuffer() {

}

void ConsoleOutput::render(unsigned char *board, int score, std::string nextBlock) {

    drawScoreboard(board, score);
    std::cout << "render" << std::endl;

    for(int x = 0; x < Game::nFieldW; x++) {
        for(int y = 0; y < Game::nFieldH; y++) {


        }
    }

    //draw the bottom hashtag line
    std::string bottomline;
    for(int x = 0; x < Game::nFieldW; x++) {
        bottomline += "#";
    }
}

