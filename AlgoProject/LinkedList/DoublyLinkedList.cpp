/*

This is a working C++ program to demonstrate Doubly Linked List

This program covers up the following operations:
1. Push
2. Delete
3. Search

*/

#include<iostream>

using namespace std;

class DNode {
public:
	int data;
	DNode* prev;
	DNode* next;
};

void pushNode(DNode** headPtr, int value) {
	DNode* new_node = new DNode();
	new_node->data = value;
	new_node->next = NULL;
	new_node->prev = NULL;

	if ((*headPtr) == NULL) {
		(*headPtr) = new_node;
	}
	else {
		bool flag1 = true;
		DNode* currentPtr = (*headPtr);
		while (flag1)
		{
			if (currentPtr->next == NULL) {
				flag1 = false;
				break;
			}
			else {
				currentPtr = currentPtr->next;
			}
		}
		currentPtr->next = new_node;
		new_node->prev = currentPtr;
	}
}

int deleteNode(DNode** headPtr, int pos) {
	if ((*headPtr) == NULL) {
		return 0;
	}

	int cPos = 0;
	bool flag1 = true;
	DNode* currentPtr = (*headPtr);
	if (currentPtr->next == NULL) {
		if (pos == 0) {
			int data1 = currentPtr->data;
			currentPtr = NULL;
			return data1;
		}
		else {
			return 0;
		}
	}

	while (flag1)
	{
		if (currentPtr->next == NULL || cPos == pos) {
			flag1 = false;
			break;
		}
		else {
			cPos++;
			currentPtr = currentPtr->next;
		}
	}

	if (cPos == pos) {
		currentPtr->prev->next = currentPtr->next;
		if (currentPtr->next != NULL) {
			currentPtr->next->prev = currentPtr->prev;
		}
		return currentPtr->data;
	}
	else {
		return 0;
	}
}

bool searchNode(DNode** headPtr, int value) {
	if ((*headPtr) == NULL) {
		return false;
	}

	bool flag1 = true;
	DNode* currentPtr = (*headPtr);
	while (flag1)
	{
		if (currentPtr->next == NULL || currentPtr->data == value) {
			flag1 = false;
			break;
		}
		else {
			currentPtr = currentPtr->next;
		}
	}

	if (currentPtr->data == value) {
		return true;
	}
	else {
		return false;
	}
}




int main2() {

	// Create a Head node to Linked list. 

	DNode* head = NULL;

	// Push data to the linked list

	pushNode(&head, 55);
	pushNode(&head, 13);
	pushNode(&head, 90);
	pushNode(&head, 31);
	pushNode(&head, 44);
	pushNode(&head, 63);


	// Search in the linked list

	cout << "Searching for 44 : " << searchNode(&head, 44) << endl;
	cout << "Searching for 111 : " << searchNode(&head, 111) << endl;

	// Delete node in the linked list

	int val1 = deleteNode(&head, 2);

	cout << "Deleting node " << val1 << endl;

	return 0;
}