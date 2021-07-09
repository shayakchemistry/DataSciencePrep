/*
This is a working implementation of Selection Sort in C++

*/

#include<iostream>

using namespace std;

void displayArray3(int* arr, int len) {
	int a;
	for (a = 0; a < len; a++) {
		cout << arr[a] << " ";
	}
	cout << endl << endl;
}

void swap2(int* arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partitonPos(int* arr, int low, int high) {
	int pivot = low;
	int left = low, right = high;

	cout << "Starting to partition with LOW = " << low << " and HIGH = " << high << endl;

	while (left < right) {
		while (pivot < right && arr[pivot] <= arr[right]) {
			right--;
		}

		if (arr[pivot] > arr[right]) {
			swap2(arr, pivot, right);
			pivot = right;
			left++;
		}
		
		while (pivot > left && arr[pivot] >= arr[left]) {
			left++;
		}

		if (arr[pivot] < arr[left]) {
			swap2(arr, left, pivot);
			pivot = left;
			right--;
		}
	}

	cout << "Found pivot = " << pivot << " with array as : ";
	displayArray3(arr + low, high - low + 1);
	
	return pivot;
}

void quickSort(int* arr, int low, int high) {

	if (low < high) {
		int p = partitonPos(arr, low, high);
		quickSort(arr, low, p - 1);
		quickSort(arr, p + 1, high);
	}

}

int main8() {

	// Create an array to sort

	int arr1[] = { 4, 1, 7, 6, 9, 8, 5 };

	cout << "Array elements before sorting = ";

	displayArray3(arr1, 7);

	quickSort(arr1, 0, 6);

	cout << "Array elements after sorting = ";

	displayArray3(arr1, 7);

	return 0;
}