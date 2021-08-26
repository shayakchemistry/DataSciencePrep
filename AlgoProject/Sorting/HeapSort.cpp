/*
This is a working implementation of Heap Sort in C++

*/

#include<iostream>

using namespace std;

void displayArray4(int* arr, int len) {
	int a;
	for (a = 0; a < len; a++) {
		cout << arr[a] << " ";
	}
	cout << endl << endl;
}

void swap3(int* arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}


void heapify(int* arr, int len, int root) {
	// This will build a max heap tree
	int largestVal = root;
	int leftChild = 2 * root + 1;
	int rightChild = 2 * root + 2;

	// Check if left child is the largest
	if (leftChild < len && arr[leftChild] > arr[largestVal]) {
		largestVal = leftChild;
	}

	// Check if the right child is the largest
	if (rightChild < len && arr[rightChild] > arr[largestVal]) {
		largestVal = rightChild;
	}

	if (largestVal != root) {
		swap3(arr, root, largestVal);
		heapify(arr, len, largestVal);
	}
}

void heapSort(int* arr, int len) {

	// Firstly we need to build the heap tree

	cout << "Starting to build max heap tree " << endl;
	int i;
	for (i = len / 2 - 1; i >= 0; i--) {
		heapify(arr, len, i);
	}

	cout << "After building Heap tree the array looks like : ";
	displayArray4(arr, len);

	// Extract root for every iteration and keep on decreasing the tree

	for (i = len - 1; i >= 0; i--) {
		swap3(arr, i, 0);
		heapify(arr, i, 0);

		cout << "For i = " << i << " the array looks like : ";
		displayArray4(arr, len);
	}
}

int main9() {

	// Create an array to sort

	int arr1[] = { 4, 1, 7, 6, 9, 8, 5 };

	cout << "Array elements before sorting = ";

	displayArray4(arr1, 7);

	heapSort(arr1, 7);

	cout << "Array elements after sorting = ";

	displayArray4(arr1, 7);

	return 0;
}