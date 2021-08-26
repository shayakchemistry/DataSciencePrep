/*
C++ Program to demonstrate Binary Search Algorithm
*/

#include<iostream>

using namespace std;

int binarySearch(int* arr, int left, int right, int searchVal) {
	
	if (left <= right) {
		int middle = (left + right) / 2;
		if (arr[middle] == searchVal) { // Let's take middle as the root element of the tree
			return middle;
		}
		if (arr[middle] < searchVal) { // If root < value then go tot he right subtree
			return binarySearch(arr, middle + 1, right, searchVal);
		}

		if (arr[middle] > searchVal) { // Else go to the left subtree
			return binarySearch(arr, left, middle - 1, searchVal);
		}
	}
	else {
		return -1;
	}
}

int main14() {

	// Let's create an array on which search will be performed

	int arr1[] = { 10, 12, 20, 32, 50, 55, 65, 80, 99 };

	// Let's try searching for 80

	int res = binarySearch(arr1, 0, 8, 80);

	cout << "Search Result for element 80 is at index " << res << endl;

	return 0;
}