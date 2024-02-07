#include "tictactoe.h"
int main() {
    TicTacToe game;

    while(true) {
        game.printBoard();
        int row, col;
        std::cout << game.getCurrentPlayer() << ": it's your move!" << std::endl;
        std::cin >> row >> col;
        if (game.makeMove(row, col)) {
            if (game.checkWin()) {
                std::cout << "Player " << game.getCurrentPlayer() << " has won!" << std::endl;
            break;
            } else if (game.isBoardFull()) {
                std::cout << "It's a draw!" << std::endl;
            break;
            }

            game.switchPlayer();
        }
    }

}
