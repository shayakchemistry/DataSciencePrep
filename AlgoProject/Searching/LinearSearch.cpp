/*
C++ Program to demonstrate linear Search Algorithm
*/

#include<iostream>

using namespace std;

int linearSearch(int* arr, int len,int searchVal) {
	
	int i;
	bool flag1 = false;
	for (i = 0; i < len; i++) { // Iterate on one direction to find the element
		if (arr[i] == searchVal) {
			flag1 = true;
			break;
		}
	}
	if (flag1) {
		return i;
	}
	else {
		return -1;
	}
}

int main13() {

	// Let's create an array on which search will be performed

	int arr1[] = { 10, 12, 20, 32, 50, 55, 65, 80, 99 };

	// Let's try searching for 80

	int res = linearSearch(arr1, 9, 80);

	cout << "Search Result for element 80 is at index " << res << endl;

	return 0;
}