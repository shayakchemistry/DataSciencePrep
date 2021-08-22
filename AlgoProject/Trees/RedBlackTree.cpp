/*
C++ program to Demonstrate Red-Black Tree
*/

#include <iostream>
#include <stack>

// Defining colors for RED or BLACK
#define RED "RED"
#define BLACK "BLACK"

using namespace std;

class RBTreeNode {
public:
	int data;
	RBTreeNode* leftPtr;
	RBTreeNode* rightPtr;
	RBTreeNode* parentPtr;
	string color;
};

// Initializing the root node here to be accessable to all functions
RBTreeNode* rootPtr = nullptr;

void rotateLeft(RBTreeNode* nodePtr) {
	
	RBTreeNode* tmpPtr1;

	// Now rotate left
	// Right Child now becomes Parent and parent becomes left sub tree of the new parent

	tmpPtr1 = nodePtr->rightPtr;
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
}

void rotateRight(RBTreeNode* nodePtr) {
	RBTreeNode* tmpPtr1;

	// Now rotate left
	// Child now becomes the new parent and the parent becomes right sub tree

	tmpPtr1 = nodePtr->leftPtr;
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
}

void rebalanceInsertedTree(RBTreeNode* nodePtr) {
	// After insertion we need to re balance the subtree to have same black depth =
	RBTreeNode* tmpPtr1 = nodePtr;
	RBTreeNode* tmpPtr2;
	while (tmpPtr1->parentPtr->color == RED) { // We only go throgh this process if the parent node is red
		if (tmpPtr1->parentPtr == tmpPtr1->parentPtr->parentPtr->rightPtr) {
			tmpPtr2 = tmpPtr1->parentPtr->parentPtr->leftPtr; // tmpPtr2 contains the uncle
			if (tmpPtr2->color == RED) { 
				// This is the case when the uncle is RED and parent is RED
				// We switch the colors of the parent, uncle and grandparent
				tmpPtr2->color = BLACK;
				tmpPtr1->parentPtr->color = BLACK;
				tmpPtr1->parentPtr->parentPtr->color = RED;
				tmpPtr1 = tmpPtr1->parentPtr->parentPtr;
			}
			else {
				// We go to this case if parent is RED and uncle is BLACK or NULL

				if (tmpPtr1 == tmpPtr1->parentPtr->leftPtr) { 
					// We go to this case if parent is the right child of grand parent and the current node is 
					// the left child of the parent
					// We do right rotation first and then fix it with the rules in the case after this if block
					tmpPtr1 = tmpPtr1->parentPtr;
					rotateRight(tmpPtr1);
				}
				// We go to this case if Parent is the right child of grand parent and the current node is
				// right child of it's parent
				// We perform left rotation on grand parent so that it becomes the new sibling of the current node
				// We then recolor the nodes accordingly
				tmpPtr1->parentPtr->color = BLACK;
				tmpPtr1->parentPtr->parentPtr->color = RED;
				rotateLeft(tmpPtr1->parentPtr->parentPtr);
			}
		}
		else {
			tmpPtr2 = tmpPtr1->parentPtr->parentPtr->rightPtr; // tmpPtr2 contains the other uncle

			if (tmpPtr2->color == RED) { 
				// This is the case when the uncle is RED and parent is RED
				// We switch the colors of the parent, uncle and grandparent
				tmpPtr2->color = BLACK;
				tmpPtr1->parentPtr->color = BLACK;
				tmpPtr1->parentPtr->parentPtr->color = RED;
				tmpPtr1 = tmpPtr1->parentPtr->parentPtr;
			}
			else {
				// We go to this case if parent is RED and uncle is BLACK or NULL
				if (tmpPtr1 == tmpPtr1->parentPtr->rightPtr) {
					// We go to this case if parent is the right child of grand parent and the current node is 
					// the left child of the parent
					// We do right rotation first and then fix it with the rules in the case after this if block
					tmpPtr1 = tmpPtr1->parentPtr;
					rotateLeft(tmpPtr1);
				}
				// We go to this case if Parent is the right child of grand parent and the current node is
				// right child of it's parent
				// We perform left rotation on grand parent so that it becomes the new sibling of the current node
				// We then recolor the nodes accordingly
				tmpPtr1->parentPtr->color = BLACK;
				tmpPtr1->parentPtr->parentPtr->color = RED;
				rotateRight(tmpPtr1->parentPtr->parentPtr);
			}
		}

		if (tmpPtr1 == rootPtr) {
			break;
		}
	}
	rootPtr->color = BLACK;
}

void insertNode2(int data) {

	RBTreeNode* parentPtr,* currentPtr;
	RBTreeNode* newNode = new RBTreeNode();
	newNode->data = data;
	newNode->leftPtr = nullptr;
	newNode->rightPtr = nullptr;
	newNode->parentPtr = nullptr;
	newNode->color = RED;


	if (rootPtr == nullptr) {
		// If this is the root node i.e. root is null
		newNode->color = BLACK;
		rootPtr = newNode;
		return;
	}
	else {
		// Otherwise find the appropriate position to insert
		parentPtr = nullptr;
		currentPtr = rootPtr;
		while (currentPtr != nullptr) {
			parentPtr = currentPtr;
			if (data < currentPtr->data) {
				currentPtr = currentPtr->leftPtr;
			}
			else {
				currentPtr = currentPtr->rightPtr;
			}
		}
		
		newNode->parentPtr = parentPtr;
		
		// Assign it to the proper node
		if (data < parentPtr->data) {
			parentPtr->leftPtr = newNode;	
		}
		else {
			parentPtr->rightPtr = newNode;
		}

		// If the tree height is 1 then we skip otherwise we rebalance
		if (newNode->parentPtr->parentPtr == nullptr) {
			return;
		}
		else {
			rebalanceInsertedTree(newNode);
		}
	}
}

void removeSingleChildParent(RBTreeNode* parentPtr, RBTreeNode* childPtr) {
	// We shift all the parent ptr connection to it's child so that we can remove the parent 
	// This only happens between one child and it's parent
	if (parentPtr->parentPtr == nullptr) {
		rootPtr = childPtr;
	}
	else if (parentPtr == parentPtr->parentPtr->leftPtr) {
		parentPtr->parentPtr->leftPtr = childPtr;
	}
	else {
		parentPtr->parentPtr->rightPtr = childPtr;
	}
	if (childPtr != nullptr) { // If the child is null
		childPtr->parentPtr = parentPtr->parentPtr;
	}
}

RBTreeNode* minNode(RBTreeNode* currentNode) {
	// Finds the left most node of the current node
	RBTreeNode* tmpPtr1 = currentNode;
	while (tmpPtr1->leftPtr != nullptr) {
		tmpPtr1 = tmpPtr1->leftPtr;
	}
	return tmpPtr1;
}

RBTreeNode* maxNode(RBTreeNode* currentNode) {
	// Finds the right most node of the current node
	RBTreeNode* tmpPtr1 = currentNode;
	while (tmpPtr1->rightPtr != nullptr) {
		tmpPtr1 = tmpPtr1->rightPtr;
	}
	return tmpPtr1;
}

void rebalanceDeletedTree(RBTreeNode* nodePtr) {
	RBTreeNode* ptr1 = nodePtr;
	RBTreeNode* ptr2;

	while (ptr1 != rootPtr && ptr1->color == BLACK) // We do this if the node to rebalance is black
	{
		if (ptr1 == ptr1->parentPtr->leftPtr) {
			ptr2 = ptr1->parentPtr->rightPtr; // We fetch the right sibling
			if (ptr2->color == RED) {
				// We do this if it's sibling is RED
				// We recolor the sibling and it's parent and do a left rotation
				ptr2->color = BLACK;
				ptr1->parentPtr->color = RED;
				rotateLeft(ptr1->parentPtr);
				ptr2 = ptr1->parentPtr->rightPtr;
			}

			if (ptr2->leftPtr->color == BLACK && ptr2->rightPtr->color == BLACK) {
				// If the sibling is black and it's both children is black
				// We switch the sibling's color
				ptr2->color = RED;
				ptr1 = ptr1->parentPtr;
			}
			else {
				if (ptr2->rightPtr->color == BLACK) {
					// If sibling's left child is black and right child is red
					// We color sibling's left child black and sibling's color red
					// We then do a rotate right and rebabance using the rules after if block
					ptr2->leftPtr->color = BLACK;
					ptr2->color = RED;
					rotateRight(ptr2);
					ptr2 = ptr1->parentPtr->rightPtr;
				}
				// If sibling is black and sibling's right child is red
				// We cahnge sibling's right child to black and the current node's pparent to black
				// We then do a left rotation of current node's parent
				// This is a terminal case
				ptr2->color = ptr1->parentPtr->color;
				ptr1->parentPtr->color = BLACK;
				ptr2->rightPtr->color = BLACK;
				rotateLeft(ptr1->parentPtr);
				ptr1 = rootPtr;
			}
		}
		else {
			ptr2 = ptr1->parentPtr->leftPtr; // Fetch the left sibling

			if (ptr2->color == RED) {
				// We do this if it's sibling is RED
				// We recolor the sibling and it's parent and do a right rotation
				ptr2->color = BLACK;
				ptr1->parentPtr->color = RED;
				rotateRight(ptr1->parentPtr);
				ptr2 = ptr1->parentPtr->leftPtr;
			}

			if (ptr2->leftPtr->color == BLACK && ptr2->rightPtr->color == BLACK) {
				// If the sibling is black and it's both children is black
				// We switch the sibling's color
				ptr2->color = RED;
				ptr1 = ptr1->parentPtr;
			}
			else {
				if (ptr2->rightPtr->color == BLACK) {
					// If sibling's left child is black and right child is red
					// We color sibling's left child black and sibling's color red
					// We then do a rotate right and rebabance using the rules after if block
					ptr2->leftPtr->color = BLACK;
					ptr2->color = RED;
					rotateRight(ptr2);
					ptr2 = ptr1->parentPtr->rightPtr;
				}
				// If sibling is black and sibling's right child is red
				// We cahnge sibling's right child to black and the current node's pparent to black
				// We then do a left rotation of current node's parent
				// This is a terminal case
				ptr2->color = ptr1->parentPtr->color;
				ptr1->parentPtr->color = BLACK;
				ptr2->rightPtr->color = BLACK;
				rotateLeft(ptr1->parentPtr);
				ptr1 = rootPtr;
			}
		}
	}
	rootPtr->color = BLACK;
}

void deleteNode2(int data) {
	RBTreeNode* currentPtr = rootPtr;
	RBTreeNode* dataNode = nullptr;
	RBTreeNode* tmpPtr1, * tmpPtr2;

	// Find out the node to delete
	while (currentPtr != nullptr)
	{
		if (currentPtr->data == data) {
			dataNode = currentPtr;
			break;
		}

		if (currentPtr->data < data) {
			currentPtr = currentPtr->rightPtr;
		}
		else {
			currentPtr = currentPtr->leftPtr;
		}
	}

	if (dataNode == nullptr) {
		cout << "Couldn't find the data in the tree" << endl << endl;
		return;
	}

	tmpPtr2 = dataNode;

	string originalColorPtr2 = tmpPtr2->color;
	if (dataNode->leftPtr == nullptr) { // Only single parent
		tmpPtr1 = dataNode->rightPtr;
		removeSingleChildParent(dataNode, dataNode->rightPtr);
	}
	else if (dataNode->rightPtr == nullptr) { // Only single parent
		tmpPtr1 = dataNode->leftPtr;
		removeSingleChildParent(dataNode, dataNode->leftPtr);
	}
	else { // Otherwise
		tmpPtr2 = minNode(dataNode->rightPtr);
		originalColorPtr2 = tmpPtr2->color;
		tmpPtr1 = tmpPtr2->rightPtr;
		if (tmpPtr2->parentPtr == dataNode) {
			if (tmpPtr1 != nullptr) {
				tmpPtr1->parentPtr = tmpPtr2;
			}
		}
		else {
			removeSingleChildParent(tmpPtr2, tmpPtr2->rightPtr);
			tmpPtr2->rightPtr = dataNode->rightPtr;
			tmpPtr2->rightPtr->parentPtr = tmpPtr2;
		}

		removeSingleChildParent(dataNode, tmpPtr2);
		tmpPtr2->leftPtr = dataNode->leftPtr;
		tmpPtr2->leftPtr->parentPtr = tmpPtr2;
		tmpPtr2->color = dataNode->color;
	}

	if (originalColorPtr2 == BLACK) {
		rebalanceDeletedTree(tmpPtr1);
	}
	delete dataNode;
}

void inorderTraversal2() {
	// Same as Binary Search Tree
	cout << "Printing inorder traversal of the tree : ";

	stack<RBTreeNode*> inorderStack;
	RBTreeNode* currentPtr = rootPtr;
	RBTreeNode* tempPtr = nullptr;

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

void preorderTraversal2() {
	// Same as Binary Search Tree
	cout << "Printing preorder traversal of the tree : ";

	stack<RBTreeNode*> preorderStack;
	RBTreeNode* tempPtr = nullptr;

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

void postorderTraversal2() {
	// Same as Binary Search Tree
	cout << "Printing postorder traversal of the tree : ";

	stack<RBTreeNode*> postorderStack, stack2;
	RBTreeNode* tempPtr = nullptr;
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

string searchTree2(int data) {
	// Same as Binary Search Tree
	bool flag1 = true;
	bool isFound = false;
	RBTreeNode* currentPtr = rootPtr;
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


int main23() {
	// Inserting new nodes to the tree

	insertNode2(15);
	insertNode2(10);
	insertNode2(20);
	insertNode2(8);
	insertNode2(12);
	insertNode2(17);
	insertNode2(25);


	// Traversal operations 

	inorderTraversal2();
	preorderTraversal2();
	postorderTraversal2();

	//Search operations
	string str1;
	str1 = searchTree2(17);
	cout << "Search for value 17 in the tree is " << str1 << endl << endl;

	str1 = searchTree2(44);
	cout << "Search for value 44 in the tree is " << str1 << endl << endl;

	// Delete operations
	deleteNode2(20);
	inorderTraversal2();
	deleteNode2(88);
	inorderTraversal2();

	return 0;
}