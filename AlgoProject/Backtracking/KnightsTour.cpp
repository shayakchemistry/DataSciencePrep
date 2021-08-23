/*
* C++ program for Knight Tour problem
*/


#include<iostream>

#define NSIZE 8

using namespace std;

// Possible position of the knight
int knightPosRow[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int knightPosCol[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

bool isValidPos2(int** board, int row, int col) {
    // Check if the position holds good
    // We check for -1 as every pos is initialized with -1
    return (row >= 0 && row < NSIZE && col >= 0 && col < NSIZE && board[row][col] == -1);
}


void printBorad2(int** board) {
    int i, j;

    cout << "-------- Printing current board -------" << endl << endl;

    for (i = 0; i < NSIZE; i++) {
        for (j = 0; j < NSIZE; j++) {
            cout << board[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}


bool solveKnightTour(int row, int col, int ithMove, int** board) {
    int i, futureRow, futureCol;
    if (ithMove == (NSIZE * NSIZE)) {
        return true;
    }

    // Iterate through all possible moves
    for (i = 0; i < 8; i++) {
        futureRow = row + knightPosRow[i];
        futureCol = col + knightPosCol[i];
        if (isValidPos2(board, futureRow, futureCol)) {
            board[futureRow][futureCol] = ithMove;
            if (solveKnightTour(futureRow, futureCol, ithMove + 1, board)) {
                return 1;
            }
            else {
                board[futureRow][futureCol] = -1; // Otherwise retry other position (backtrack and retry)
            }
        }
    }
    return false;
}


int main34()
{
    // Initialize the board

    int** board = new int* [NSIZE];
    int i, j;

    for (i = 0; i < NSIZE; i++) {
        board[i] = new int[NSIZE];
    }

    // Putting all the elements to -1
    for (i = 0; i < NSIZE; i++) {
        for (j = 0; j < NSIZE; j++) {
            board[i][j] = -1;
        }
    }

    // Intializing start position as 0,0
    board[0][0] = 0;

    bool res = solveKnightTour(0, 0, 1, board);

    if (res) {
        cout << "The solution of the board is : " << endl;
        printBorad2(board);
    }
    else {
        cout << "No solution found" << endl;
    }
    
    
    return 0;
}