/*
This is a working implementation of Bubble Sort in C++

*/

#include<iostream>

using namespace std;

void displayArray6(int* arr, int len) {
	int a;
	for (a = 0; a < len; a++) {
		cout << arr[a] << " ";
	}
	cout << endl << endl;
}

void swap4(int* arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void bubbleSort(int* arr, int len) {

	int i, j;

	for (i = 0; i < len; i++) {
		for (j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap4(arr, j, j + 1);
			}
		}
	}
	
}

int main11() {

	// Create an array to sort

	int arr1[] = { 4, 1, 7, 6, 9, 8, 5 };

	cout << "Array elements before sorting = ";

	displayArray6(arr1, 7);

	bubbleSort(arr1, 7);

	cout << "Array elements after sorting = ";

	displayArray6(arr1, 7);

	return 0;
}