#include "tictactoe.h"
int main() {
    TicTacToe game;
    game.makeMove(1,1);
    game.printBoard();
    game.switchPlayer();
    game.makeMove(2,2);
    game.printBoard();
    game.checkWin();
    game.isBoardFull();
}
