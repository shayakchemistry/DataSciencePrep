/*
*/

#include<iostream>
#include<stack>

using namespace std;

class AVLTreeNode {
public:
	int data;
	AVLTreeNode* leftPtr;
	AVLTreeNode* rightPtr;
	AVLTreeNode* parentPtr;
	int balanceFactor;
};

AVLTreeNode* rootPtr;

void rotateLeft3(AVLTreeNode* nodePtr) {
	AVLTreeNode* tmpPtr1 = nodePtr->rightPtr;
	nodePtr->rightPtr = tmpPtr1->leftPtr;

	if (tmpPtr1->leftPtr != nullptr) {
		tmpPtr1->leftPtr->parentPtr = nodePtr;
	}

	tmpPtr1->parentPtr = nodePtr->parentPtr;
	if (nodePtr->parentPtr == nullptr) {
		rootPtr = tmpPtr1;
	}
	else if (nodePtr == nodePtr->parentPtr->leftPtr) {
		nodePtr->parentPtr->leftPtr = tmpPtr1;
	}
	else {
		nodePtr->parentPtr->rightPtr = tmpPtr1;
	}
	tmpPtr1->leftPtr = nodePtr;
	nodePtr->parentPtr = tmpPtr1;

	nodePtr->balanceFactor = nodePtr->balanceFactor - 1 - max(0, tmpPtr1->balanceFactor);
	tmpPtr1->balanceFactor = tmpPtr1->balanceFactor - 1 + min(0, nodePtr->balanceFactor);
}


void rotateRight3(AVLTreeNode* nodePtr) {
	AVLTreeNode* tmpPtr1 = nodePtr->leftPtr;
	nodePtr->leftPtr = tmpPtr1->rightPtr;

	if (tmpPtr1->rightPtr != nullptr) {
		tmpPtr1->rightPtr->parentPtr = nodePtr;
	}

	tmpPtr1->parentPtr = nodePtr->parentPtr;
	if (nodePtr->parentPtr == nullptr) {
		rootPtr = tmpPtr1;
	}
	else if (nodePtr == nodePtr->parentPtr->rightPtr) {
		nodePtr->parentPtr->rightPtr = tmpPtr1;
	}
	else {
		nodePtr->parentPtr->leftPtr = tmpPtr1;
	}

	tmpPtr1->rightPtr = nodePtr;
	nodePtr->parentPtr = tmpPtr1;

	nodePtr->balanceFactor = nodePtr->balanceFactor + 1 - min(0, tmpPtr1->balanceFactor);
	tmpPtr1->balanceFactor = tmpPtr1->balanceFactor + 1 - max(0, nodePtr->balanceFactor);
}

AVLTreeNode* minNode3(AVLTreeNode* currentNode) {
	// Finds the left most node of the current node
	AVLTreeNode* tmpPtr1 = currentNode;
	while (tmpPtr1->leftPtr != nullptr) {
		tmpPtr1 = tmpPtr1->leftPtr;
	}
	return tmpPtr1;
}


void inorderTraversal3() {

	cout << "Printing inorder traversal of the tree : ";

	stack<AVLTreeNode*> inorderStack;
	AVLTreeNode* currentPtr = rootPtr;
	AVLTreeNode* tempPtr = nullptr;

	while (!inorderStack.empty() || currentPtr != nullptr) {
		if (currentPtr != nullptr) {
			inorderStack.push(currentPtr);
			currentPtr = currentPtr->leftPtr;
		}
		if (!inorderStack.empty() && currentPtr == nullptr) {
			tempPtr = inorderStack.top();
			inorderStack.pop();
			cout << tempPtr->data << " ";
			currentPtr = tempPtr->rightPtr;
		}
	}

	cout << endl << endl;
}

void preorderTraversal3() {

	cout << "Printing preorder traversal of the tree : ";

	stack<AVLTreeNode*> preorderStack;
	AVLTreeNode* tempPtr = nullptr;

	preorderStack.push(rootPtr);

	while (!preorderStack.empty()) {
		tempPtr = preorderStack.top();
		preorderStack.pop();
		cout << tempPtr->data << " ";

		if (tempPtr->rightPtr != nullptr) {
			preorderStack.push(tempPtr->rightPtr);
		}
		if (tempPtr->leftPtr != nullptr) {
			preorderStack.push(tempPtr->leftPtr);
		}
	}

	cout << endl << endl;

}

void postorderTraversal3() {

	cout << "Printing postorder traversal of the tree : ";

	stack<AVLTreeNode*> postorderStack, stack2;
	AVLTreeNode* tempPtr = nullptr;
	postorderStack.push(rootPtr);

	while (!postorderStack.empty()) {
		tempPtr = postorderStack.top();
		postorderStack.pop();

		stack2.push(tempPtr);

		if (tempPtr->leftPtr != nullptr) {
			postorderStack.push(tempPtr->leftPtr);
		}
		if (tempPtr->rightPtr != nullptr) {
			postorderStack.push(tempPtr->rightPtr);
		}
	}

	while (!stack2.empty()) {
		tempPtr = stack2.top();
		cout << tempPtr->data << " ";
		stack2.pop();
	}

	cout << endl << endl;
}

string searchTree3(int data) {

	bool flag1 = true;
	bool isFound = false;
	AVLTreeNode* currentPtr = rootPtr;
	if (rootPtr != nullptr) {
		while (flag1) {
			if (currentPtr->data == data) {
				isFound = true;
				flag1 = false;
				break;
			}
			else if (currentPtr->data > data) {
				if (currentPtr->leftPtr == nullptr) {
					flag1 = false;
					break;
				}
				else {
					currentPtr = currentPtr->leftPtr;
				}
			}
			else {
				if (currentPtr->rightPtr == nullptr) {
					flag1 = false;
					break;
				}
				else {
					currentPtr = currentPtr->rightPtr;
				}
			}
		}
	}

	if (isFound) {
		return "Found";
	}
	else {
		return "Not Found";
	}
}

void rebalanceTree(AVLTreeNode* nodePtr) {
	if (nodePtr->balanceFactor > 0) {
		if (nodePtr->rightPtr->balanceFactor < 0) {
			rotateRight3(nodePtr->rightPtr);
			rotateLeft3(nodePtr);
		}
		else {
			rotateLeft3(nodePtr);
		}
	}
	else if (nodePtr->balanceFactor < 0) {
		if (nodePtr->leftPtr->balanceFactor > 0) {
			rotateLeft3(nodePtr->leftPtr);
			rotateRight3(nodePtr);
		}
		else {
			rotateRight3(nodePtr);
		}
	}
}


void updateBalance(AVLTreeNode* nodePtr) {
	if (nodePtr->balanceFactor < -1 || nodePtr->balanceFactor > 1) {
		rebalanceTree(nodePtr);
		return;
	}

	if (nodePtr->parentPtr != nullptr) {
		if (nodePtr == nodePtr->parentPtr->leftPtr) {
			nodePtr->parentPtr->balanceFactor -= 1;
		}

		if (nodePtr == nodePtr->parentPtr->rightPtr) {
			nodePtr->parentPtr->balanceFactor += 1;
		}

		if (nodePtr->parentPtr->balanceFactor != 0) {
			updateBalance(nodePtr->parentPtr);
		}
	}
}


void insertNode3(int data) {

	AVLTreeNode* newNode = new AVLTreeNode();
	newNode->parentPtr = nullptr;
	newNode->leftPtr = nullptr;
	newNode->rightPtr = nullptr;
	newNode->data = data;
	newNode->balanceFactor = 0;

	AVLTreeNode* prevPtr = nullptr;
	AVLTreeNode* currentPtr = rootPtr;

	while (currentPtr != nullptr)
	{
		prevPtr = currentPtr;
		if (data < currentPtr->data) {
			currentPtr = currentPtr->leftPtr;
		}
		else {
			currentPtr = currentPtr->rightPtr;
		}
	}

	newNode->parentPtr = prevPtr;
	if (prevPtr == nullptr) {
		rootPtr = newNode;
	}
	else if (data < prevPtr->data) {
		prevPtr->leftPtr = newNode;
	}
	else {
		prevPtr->rightPtr = newNode;
	}
	updateBalance(newNode);
}


void deleteNode3(int data) {
	AVLTreeNode* currentPtr = rootPtr;

	while (currentPtr != nullptr) {
		if (currentPtr->data == data) {
			break;
		}
		else {
			if (data < currentPtr->data) {
				currentPtr = currentPtr->leftPtr;
			}
			else {
				currentPtr = currentPtr->rightPtr;
			}
		}
	}

	if (currentPtr == nullptr) {
		cout << "No node found with data " << data << endl << endl;
	}
	else {
		// case 1
		if (currentPtr->leftPtr == nullptr && currentPtr->rightPtr == nullptr) {
			if (currentPtr == currentPtr->parentPtr->leftPtr) {
				currentPtr->parentPtr->leftPtr = nullptr;
			}
			else {
				currentPtr->parentPtr->rightPtr = nullptr;
			}
		}
		else if (currentPtr->leftPtr == nullptr) {
			if (currentPtr == currentPtr->parentPtr->leftPtr) {
				currentPtr->parentPtr->leftPtr = currentPtr->rightPtr;
			}
			else {
				currentPtr->parentPtr->rightPtr = currentPtr->rightPtr;
			}
		}
		else if (currentPtr->rightPtr == nullptr) {
			if (currentPtr == currentPtr->parentPtr->leftPtr) {
				currentPtr->parentPtr->leftPtr = currentPtr->leftPtr;
			}
			else {
				currentPtr->parentPtr->rightPtr = currentPtr->leftPtr;
			}
		}
		else {
			AVLTreeNode* tmpPtr = minNode3(currentPtr->rightPtr);
			int tmpData = tmpPtr->data;
			deleteNode3(tmpData);
			currentPtr->data = tmpData;
		}
		updateBalance(currentPtr->parentPtr);
	}
}


int main() {
	// Inserting new nodes to the tree

	insertNode3(15);
	insertNode3(10);
	insertNode3(20);
	insertNode3(8);
	insertNode3(12);
	insertNode3(17);
	insertNode3(25);


	// Traversal operations 

	inorderTraversal3();
	preorderTraversal3();
	postorderTraversal3();

	//Search operations
	string str1;
	str1 = searchTree3(17);
	cout << "Search for value 17 in the tree is " << str1 << endl << endl;

	str1 = searchTree3(44);
	cout << "Search for value 44 in the tree is " << str1 << endl << endl;

	// Delete operations
	deleteNode3(20);
	inorderTraversal3();
	deleteNode3(88);
	inorderTraversal3();

	return 0;
}