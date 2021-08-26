/*
This is a working implementation of Merge Sort in C++

*/

#include<iostream>

using namespace std;

void displayArray5(int* arr, int len) {
	int a;
	for (a = 0; a < len; a++) {
		cout << arr[a] << " ";
	}
	cout << endl << endl;
}

void merge(int* arr, int left, int middle, int right) {
	int i, j, k;

	cout << "Merging left and right sub array with L = " << left << " M = " << middle << " R = " << right << endl;
	cout << "Array to merge = ";
	displayArray5(arr + left, right - left + 1);

	// Size of left and right sub array
	int leftLen = middle - left + 1;
	int rightLen = right - middle;

	int *arrLeft = new int[leftLen];
	int *arrRight = new int[rightLen];

	// Fill up the arrays;

	for (i = 0; i < leftLen; i++) {
		arrLeft[i] = arr[left + i];
	}

	for (j = 0; j < rightLen; j++) {
		arrRight[j] = arr[middle + 1 + j];
	}

	// Now sort and merge it to the actual array

	i = 0; // For left subarray
	j = 0; // For right subarray
	k = left; // for the actual array

	while (i < leftLen && j < rightLen) {
		if (arrLeft[i] < arrRight[j]) {
			arr[k] = arrLeft[i];
			i++;
		} else {
			arr[k] = arrRight[j];
			j++;
		}
		k++;
	}

	// Fill up the remaining

	while (i < leftLen) {
		arr[k] = arrLeft[i];
		i++;
		k++;
	}

	while (j < rightLen) {
		arr[k] = arrRight[j];
		j++;
		k++;
	}
}

void mergeSort(int* arr, int low, int high) {

	if (low < high) {
		int middle = low + ((high - low) / 2);

		mergeSort(arr, low, middle);
		mergeSort(arr, middle + 1, high);
		merge(arr, low, middle, high);
	}
}

int main10() {

	// Create an array to sort

	int arr1[] = { 4, 1, 7, 6, 9, 8, 5 };

	cout << "Array elements before sorting = ";

	displayArray5(arr1, 7);

	mergeSort(arr1, 0, 6);

	cout << "Array elements after sorting = ";

	displayArray5(arr1, 7);

	return 0;
}