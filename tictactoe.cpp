#include "tictactoe.h"

//constructor with initialized values
TicTacToe::TicTacToe() : board(3, std::vector<char>(3, ' ')), player('X') {}

//inheriting from header gile
void TicTacToe::printBoard() {
    //this is responsible for creating first column
    std::cout << "\n+---+---+---+\n";
    for (int i = 0; i < 3; ++i) {
        std::cout <<  "| ";
        //this is responsible for the rest columns
        for (int j = 0; j < 3; ++j) {
            std::cout << board[i][j] << " | ";
        }
        std::cout << "\n+---+---+---+\n";
    }
}
/// This code allows user to type in position of row and col to place 'x' or 'o'
bool TicTacToe::makeMove (int row, int col) {
    //this allows user to choose values between <1,3>, not <0,2>
    row = row - 1;
    col = col -1;
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
        std::cout << "Wrong move! Try again!";
        return false;
    }

    //assign the move to the player
    board[row][col] = player;
    //this means the player has finished their move
    return true;

}
//
//bool CheckWin () {
//
//}
//
//bool SwitchPlayer () {
//
//}
