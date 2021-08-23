/*
* C++ Program to solve N-Queen using backtracking
*/

#include<iostream>

// Define N size
#define NSIZE 8


using namespace std;

bool isValidPos(int** board, int row, int col) {
	// Here we consider that there is a queen in every row and we are trying to get their column position
	int i, j;
	for (i = 0; i < col; i++) {
		//check whether there is queen in the left or not
		if (board[row][i]) {
			return false;
		}
	}
	for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
		//check whether there is queen in the left upper diagonal or not
		if (board[i][j]) {
			return false;
		}
	}
	for (i = row, j = col; j >= 0 && i < NSIZE; i++, j--) {
		//check whether there is queen in the left lower diagonal or not
		if (board[i][j]) {
			return false;
		}
	}
	return true;
}


void printBorad(int ** board){
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


bool computeNQueen(int** board, int colPos) {
	if (colPos >= NSIZE) {
		//when N queens are placed successfully
		return true;
	}

	for (int i = 0; i < NSIZE; i++) { 
		
		//for each row, check placing of queen is possible or not
		if (isValidPos(board, i, colPos)) {
			board[i][colPos] = 1; //if validate, place the queen at place (i, colPos)

			cout << "Intermediate board POS at i = " << i << " and colPos = " << colPos << endl;
			printBorad(board);

			if (computeNQueen(board, colPos + 1)) {
				//Go for the other columns recursively
				return true;
			}
			board[i][colPos] = 0; //When no place is vacant remove that queen (backtrack and retry)
		}
	}
	return false; //when no possible order is found
}


int main33() {

	// Initialize Borad of N size

	int** boardArr = new int * [NSIZE];
	int i, j;

	for (i = 0; i < NSIZE; i++) {
		boardArr[i] = new int[NSIZE];
	}

	// Putting all the elements to 0
	for (i = 0; i < NSIZE; i++) {
		for (j = 0; j < NSIZE; j++) {
			boardArr[i][j] = 0;
		}
	}


	bool res = computeNQueen(boardArr, 0);

	cout << "Result of computing "<< NSIZE <<" Queen is " << res << endl;
	printBorad(boardArr);

	return 0;
}