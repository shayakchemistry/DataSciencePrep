/*
* 
* In this program we demonstrate how to generate fibonacci series using recusrion
* 
*/

#include<iostream>

using namespace std;

int fibonacci(int n) {
	if (n == 0) { // If it is n = 0 then it is the first element i.e. 0
		cout << "0 ";
		return 0;
	}
	if (n == 1) { // If it is n = 1 then it is the second element i.e. 1
		cout << "1 ";
		return 1;
	}
	if (n > 1) { // Otherwise it is the sum on the prevous 2 numbers in the series
		int sum1 = fibonacci(n - 2) + fibonacci(n - 1);
		cout << sum1 << " ";
		return sum1;
	}
}

int main20() {
	// Let's try calculating it for n integers
	// The series look like 0 1 1 2 3 5 ....

	cout << "Generating fibonacci for n = 14 : " << endl;
	int end1 = fibonacci(14);
	cout << endl << endl;
	cout << "The result of fibonacci for n = 14 is " << end1 << endl;

	return 0;
}