//
// Created by simon on 12/25/2022.
//

#include "Game.h"
#include "ConsoleOutput.h"

Game::Game() {
    board = initBoard();
    tetromino = initTetromino();
    consoleRenderer = ConsoleOutput();

    std::cout << "game is starting..." << std::endl;
}

std::string* Game::initTetromino() {

    std::string tetromino[8];

    //Create assets
    tetromino[0].append("..x.");
    tetromino[0].append("..x.");
    tetromino[0].append("..x.");
    tetromino[0].append("..x.");

    tetromino[1].append("..x.");
    tetromino[1].append(".xx.");
    tetromino[1].append(".x..");
    tetromino[1].append("....");

    tetromino[2].append(".x..");
    tetromino[2].append(".xx.");
    tetromino[2].append("..x.");
    tetromino[2].append("....");

    tetromino[3].append("....");
    tetromino[3].append(".xx.");
    tetromino[3].append(".xx.");
    tetromino[3].append("....");

    tetromino[4].append("..x.");
    tetromino[4].append(".xx.");
    tetromino[4].append("..x.");
    tetromino[4].append("....");

    tetromino[5].append("....");
    tetromino[5].append(".xx.");
    tetromino[5].append("..x.");
    tetromino[5].append("..x.");

    tetromino[6].append("....");
    tetromino[6].append(".xx.");
    tetromino[6].append(".x..");
    tetromino[6].append(".x..");

    tetromino[7].append("..x.");
    tetromino[7].append("..x.");
    tetromino[7].append("..x.");
    tetromino[7].append("..x.");

    return tetromino;
}

unsigned char *Game::initBoard() {

    unsigned char* board = new unsigned char[nFieldW*nFieldH];

    for(int x = 0; x < nFieldW; x++) {
        for(int y = 0; y < nFieldH; y++) {
            board[y * nFieldW + x] = (x == 0 || x == nFieldW || y == nFieldH) ? 9 : 0;
        }
    }

    return board;
}

void Game::gameLoop() {
    consoleRenderer.render(board, score, tetromino[0]);
}

int Game::rotate(int px, int py, int r) {
    switch(r % 4) {
        case 0 : return py * 4 + px;
        case 1 : return 12 + py - (px * 4);
        case 2 : return 15 - (py * 4) - px;
        case 3 : return 3 - py + (px * 4);
    }
    return 0;
}
