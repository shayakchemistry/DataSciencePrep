/*
* This C++ program illustrated the working of tower of hannoi recursively
*/

#include<iostream>

using namespace std;

void towerOfHanoi(int disk, char from, char intermediate, char to) { // Recursive method to solve Tower of hanoi
	if (disk == 1) { // If disk == 1 i.e. only 1 disk is there to move
		cout << "Move disk " << disk << " from " << from << " to " << to << endl << endl;
	}
	else { // If we have n disk to move then
		// First move the one on top of it (n -1 th disk) to intermediate
		towerOfHanoi(disk - 1, from, to, intermediate);
		// Move the nth disk to the destination
		cout << "Move disk " << disk << " from " << from << " to " << to << endl << endl; 
		// Now move the one which we moved previously to intermediate to the final destination 
		towerOfHanoi(disk - 1, intermediate, from, to);
	}
}



int main21() {

	// Here we want to move N disks from "A" to "C"
	// Here N = 3
	cout << "Moves for moving 3 disks from \'A\' to \'C\'" << endl << endl;
	towerOfHanoi(3, 'A', 'B', 'C');

	return 0;
}