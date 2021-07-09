/*
This is a working implementation of Selection Sort in C++

*/

#include<iostream>

using namespace std;

void displayArray2(int* arr, int len) {
	int a;
	for (a = 0; a < len; a++) {
		cout << arr[a] << " ";
	}
	cout << endl << endl;
}

void swap(int *arr,int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void selectionSort(int* arr, int len) {
	if (len < 2) {
		cout << "Array too small to be sorted " << endl;
	}
	else {
		int i, j, minI;
		for (i = 0; i < len - 1; i++) {
			minI = i;
			for (j = i + 1; j < len; j++) {
				if (arr[minI] > arr[j]) {
					minI = j;
				}
			}
			swap(arr, minI, i);
			cout << "For i = " << i << " selected minI index is " << minI << endl;
			cout << "Array after swap is = ";
			displayArray2(arr, len);
		}
	}
}

int main7() {

	// Create an array to sort

	int arr1[] = { 4, 1, 7, 6, 9, 8, 5 };

	cout << "Array elements before sorting = ";

	displayArray2(arr1, 7);

	selectionSort(arr1, 7);

	cout << "Array elements after sorting = ";

	displayArray2(arr1, 7);

	return 0;
}