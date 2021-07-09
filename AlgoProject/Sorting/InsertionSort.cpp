/*
This is a working implementation of Insertion Sort in C++

*/

#include<iostream>

using namespace std;

void displayArray(int* arr, int len) {
	int a;
	for (a = 0; a < len; a++) {
		cout << arr[a] << " ";
	}
	cout << endl << endl;
}

void insertionSort(int* arr, int len) {

	if (len < 2) {
		cout << "Not enough elements to sort " << endl;
	} else {
		cout << "Starting to sort the array" << endl;
		int i, j, key;
		for (i = 1; i < len; i++) {
			key = arr[i];
			j = i;
			while (j > 0 && key < arr[j - 1]) {
				arr[j] = arr[j - 1];
				j--;
			}
			arr[j] = key;
			cout << endl << "Selected Key = " << key << endl;
			cout << "Array elements after i = " << i << " is : ";

			displayArray(arr, len);
		}
	}
}

int main6() {

	// Create an array to sort

	int arr1[] = { 4, 1, 7, 6, 9, 8, 5 };

	cout << "Array elements before sorting = ";

	displayArray(arr1, 7);

	insertionSort(arr1, 7);

	cout << "Array elements after sorting = ";

	displayArray(arr1, 7);

	return 0;
}