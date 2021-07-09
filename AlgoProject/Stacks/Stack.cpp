/*
In this example we do illustrate stack implementation and operations. The following operations are defined:
1. Push
2. Pop
3. PrintStack

*/

#include<iostream>

using namespace std;

class MyStack {
private:
	int stackArr[100]; // defining array size as 100
	int top;

public:
	MyStack() {
		top = -1;
	}
	void push(int val1);
	int pop();
	void printStack();
};

void MyStack::push(int val1) {
	if (top < 100) { // Max array size is 100
		top++;
		stackArr[top] = val1;
		cout << "Pushed " << val1 << " into the stack " << endl;
	}
	else {
		cout << "Cannot push any more elements " << endl;
	}
};

int MyStack::pop() {
	if (top < 0) {
		return INT16_MIN;
	}
	else {
		top--;
		return stackArr[top + 1];
	}
}

void MyStack::printStack() {
	cout << "Printing the contents of the stack " << endl;

	if (top < 0) {
		cout << "No elements in the stack " << endl;
	}
	else {
		int i;
		for (i = 0; i <= top; i++) {
			cout << stackArr[i] << endl;
		}
	}

}


int main4() {

	// Create a stack 

	MyStack stack1 = MyStack();

	// Performing push operation

	stack1.push(6);
	stack1.push(12);
	stack1.push(91);
	stack1.push(55);
	stack1.push(81);
	stack1.push(24);
	stack1.push(4);
	stack1.push(3);
	stack1.push(613);

	// Checking contents of the stack

	stack1.printStack();

	// Performing POP operation

	int t = stack1.pop();
	cout << "Popped element = " << t << endl;

	t = stack1.pop();
	cout << "Popped element = " << t << endl;
	
	t = stack1.pop();
	cout << "Popped element = " << t << endl;
	
	t = stack1.pop();
	cout << "Popped element = " << t << endl;

	return 0;
}