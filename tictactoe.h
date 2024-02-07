#ifndef TIC_TAC_TOE_TICTACTOE_H
#define TIC_TAC_TOE_TICTACTOE_H

#include <iostream>
#include <vector>
class TicTacToe {
private:
    //initialized board with the elements like 'x', 'o' or ' '
    std::vector<std::vector<char>> board;
    char player;
public:
    TicTacToe();
    void printBoard();
    bool makeMove(int row, int col);
    void switchPlayer();
    bool checkWin();
    bool isBoardFull();
    char getCurrentPlayer() const;
};
#endif //TIC_TAC_TOE_TICTACTOE_H
