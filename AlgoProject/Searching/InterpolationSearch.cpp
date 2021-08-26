/*
C++ Program to demonstrate Interpolation Search Algorithm
*/

#include<iostream>

using namespace std;

int interpolationSearch(int* arr, int len, int sVal) {
	
	// Define index of the extreme corners of the array
	int low = 0;
	int high = len - 1;

	// We can do this if the array is sorted
	while (low <= high && sVal >= arr[low] && sVal <= arr[high]) {

		// End condition
		if (low == high) {
			if (arr[low] == sVal) {
				return low;
			}
			else {
				return -1;
			}
		}

		// Now first calculate the probing position

		int pos = low + (((double)(high - low) / (arr[high] - arr[low])) * (sVal - arr[low]));

		// If the value is found
		if (arr[pos] == sVal) {
			return pos;
		}
		// if sVal is larger it is towards the higher part
		if (arr[pos] < sVal) {
			low = pos + 1;
		}

		// If it is lower than sVal then it is in the lower part
		if (arr[pos] > sVal) {
			high = pos - 1;
		}
	}

	return -1;
}

int main15() {

	// Let's create an array on which search will be performed

	int arr1[] = { 10, 12, 20, 32, 50, 55, 65, 80, 99 };

	// Let's try searching for 80

	int res = interpolationSearch(arr1, 9, 80);

	cout << "Search Result for element 80 is at index " << res << endl;

	return 0;
}