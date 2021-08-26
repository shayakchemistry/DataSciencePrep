/*
This is a working implementation of Counting Sort in C++

*/

#include<iostream>

using namespace std;

void displayArray7(int* arr, int len) {
	int a;
	for (a = 0; a < len; a++) {
		cout << arr[a] << " ";
	}
	cout << endl << endl;
}

int getMax(int* arr, int len) {
	int maxNum = 0;
	int i;
	for (i = 0; i < len; i++) {
		if (maxNum < arr[i]) {
			maxNum = arr[i];
		}
	}

	return maxNum;
}

void countingSort(int* arr, int len) {

	int i;
	int maxNum = getMax(arr, len);
	int* outArr = new int[len + 1];
	int* countArr = new int[maxNum + 1]; // This is our frequency array
	
	for (i = 0; i <= maxNum; i++) {
		countArr[i] = 0;
	}

	// Adding frequency to the array
	for (i = 0; i < len; i++) {
		countArr[arr[i]]++;
	}

	// Compute cumulative frequency
	for (i = 1; i < maxNum + 1; i++) {
		countArr[i] += countArr[i - 1];
	}

	// Populate the output array according to the count array
	for (i = len; i > 0; i--) {
		outArr[countArr[arr[i - 1]]] = arr[i - 1];
		countArr[arr[i - 1]]--;
	}

	// Transfer it to the actual array
	for (i = 0; i < len; i++) {
		arr[i] = outArr[i + 1];
	}
}

int main12() {

	// Create an array to sort

	int arr1[] = { 4, 1, 7, 6, 9, 8, 5 };

	cout << "Array elements before sorting = ";

	displayArray7(arr1, 7);

	countingSort(arr1, 7);

	cout << "Array elements after sorting = ";

	displayArray7(arr1, 7);

	return 0;
}