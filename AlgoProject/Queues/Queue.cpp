/*
In this example we do illustrate queue implementation and operations. The following operations are defined:
1. Enqueue
2. Dequeue
3. PrintQueue

*/

#include<iostream>

using namespace std;


class MyQueue {

private:
	int queueArr[100];
	int front, rear;

public:
	MyQueue() {
		front = -1;
		rear = -1;
	}

	void enQueue(int val1);
	int deQueue();
	void printQueue();
};


void MyQueue::enQueue(int val1) {

	if (rear >= 99 || front >= 99) {
		cout << "EnQueue cannot be performed as it has reached the end of the Queue" << endl;
	}

	if (rear == -1) {
		rear++;
	}

	front++;
	queueArr[front] = val1;

	cout << "EnQueue operation with element " << val1 << " and pointers Rear = " << rear << " |||| front = " << front << endl;

}

int MyQueue::deQueue() {
	if (rear == -1 || rear > front) {
		cout << "The queue is empty" << endl;

	}
	else {
		int returnVal = queueArr[rear];
		rear++;
		cout << "DeQueue operation performed with " << "Rear = " << rear << " |||| front = " << front << endl;
		return returnVal;
	}
}

void MyQueue::printQueue() {
	cout << "Printing Queue contents " << endl;

	if (rear == -1 || front == -1 || rear > front) {
		cout << "The queue is empty " << endl;
	}
	else {
		cout << "Rear = " << rear << " |||| front = " << front << endl;
		int i;
		for (i = rear; i <= front; i++) {
			cout << queueArr[i] << endl;
		}
	}
}


int main5() {

	// Creating a Queue

	MyQueue queue1 = MyQueue();

	// EnQueue operations:

	queue1.enQueue(41);
	queue1.enQueue(23);
	queue1.enQueue(32);
	queue1.enQueue(56);
	queue1.enQueue(94);
	queue1.enQueue(37);
	queue1.enQueue(2);
	queue1.enQueue(59);
	queue1.enQueue(1);
	queue1.enQueue(10);

	// Print Queue contents

	queue1.printQueue();

	// DeQueue operations

	int t = queue1.deQueue();
	cout << "DeQueue operation on element " << t << endl;

	t = queue1.deQueue();
	cout << "DeQueue operation on element " << t << endl;

	t = queue1.deQueue();
	cout << "DeQueue operation on element " << t << endl;


	return 0;
}



