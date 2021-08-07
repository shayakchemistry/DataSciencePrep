/*
*/

#include<iostream>
#include<stack>

using namespace std;

class TreeNode {
public:
	int data;
	TreeNode* leftPtr;
	TreeNode* rightPtr;
};


void insertNode(TreeNode** rootPtr, int data) {

	TreeNode* newNode = new TreeNode();
	newNode->data = data;
	newNode->leftPtr = nullptr;
	newNode->rightPtr = nullptr;

	if ((*rootPtr) == nullptr) {
		(*rootPtr) = newNode;
	}
	else {
		TreeNode* currentPtr = *rootPtr;
		bool flag1 = true;

		while (flag1) {
			if (currentPtr->data > data) {
				if (currentPtr->leftPtr == nullptr) {
					currentPtr->leftPtr = newNode;
					flag1 = false;
					break;
				}
				else {
					currentPtr = currentPtr->leftPtr;
				}
			}
			else {
				if (currentPtr->rightPtr == nullptr) {
					currentPtr->rightPtr = newNode;
					flag1 = false;
					break;
				}
				else {
					currentPtr = currentPtr->rightPtr;
				}
			}
		}
	}

	cout << "Inserted " << data << " to the binary search tree" << endl << endl;
}

string searchTree(TreeNode** rootPtr, int data) {

	bool flag1 = true;
	bool isFound = false;
	TreeNode* currentPtr = *rootPtr;
	if ((*rootPtr) != nullptr) {
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

TreeNode* inorderSuccessor(TreeNode** rootPtr, TreeNode** valPtr) {
	
	stack<TreeNode*> inorderStack;
	TreeNode* currentPtr = *rootPtr;
	TreeNode* tempPtr = nullptr;
	TreeNode** arr1 = new TreeNode * [100];
	int i, i1 = 0;

	while (!inorderStack.empty() || currentPtr != nullptr) {
		if (currentPtr != nullptr) {
			inorderStack.push(currentPtr);
			currentPtr = currentPtr->leftPtr;
		}
		if (!inorderStack.empty() && currentPtr == nullptr) {
			tempPtr = inorderStack.top();
			inorderStack.pop();
			arr1[i1] = tempPtr;
			i1++;
			currentPtr = tempPtr->rightPtr;
		}
	}
	
	for (i = 0; i <= i1; i++) {
		if (arr1[i] == (*valPtr)) {
			return arr1[i + 1];
		}
	}
	
	return nullptr;
}

void deleteNode(TreeNode** rootPtr, int data) {

	bool flag1 = true;
	bool isFound = false;
	TreeNode* currentPtr = *rootPtr;
	TreeNode* parentPtr = nullptr;

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
				parentPtr = currentPtr;
				currentPtr = currentPtr->leftPtr;
			}
		}
		else {
			if (currentPtr->rightPtr == nullptr) {
				flag1 = false;
				break;
			}
			else {
				parentPtr = currentPtr;
				currentPtr = currentPtr->rightPtr;
			}
		}
	}

	if (isFound) {
		cout << "Deleting " << data << " from the tree " << endl << endl;
		if (currentPtr->leftPtr == nullptr && currentPtr->rightPtr == nullptr) {
			if (parentPtr->leftPtr == currentPtr) {
				parentPtr->leftPtr = nullptr;
			} 
			else {
				parentPtr->rightPtr = nullptr;
			}
		}
		else if (currentPtr->leftPtr != nullptr && currentPtr->rightPtr != nullptr) {
			TreeNode* successor = inorderSuccessor(rootPtr, &currentPtr);
			TreeNode* newNode = new TreeNode();
			deleteNode(rootPtr, successor->data);
			newNode->data = successor->data;
			newNode->leftPtr = currentPtr->leftPtr;
			newNode->rightPtr = currentPtr->rightPtr;
			if (parentPtr->leftPtr == currentPtr) {
				parentPtr->leftPtr = newNode;
			}
			else {
				parentPtr->rightPtr = newNode;
			}
		}
		else {
			if (currentPtr->leftPtr == nullptr) {
				if (parentPtr->leftPtr == currentPtr) {
					parentPtr->leftPtr = currentPtr->rightPtr;
				}
				else {
					parentPtr->rightPtr = currentPtr->rightPtr;
				}
			}
			else {
				if (parentPtr->leftPtr == currentPtr) {
					parentPtr->leftPtr = currentPtr->leftPtr;
				}
				else {
					parentPtr->rightPtr = currentPtr->leftPtr;
				}
			}
		}
	}
	else {
		cout << "Cannot delete " << data << " as it is not found in the tree " << endl << endl;
	}


}

void inorderTraversal(TreeNode** rootPtr) {

	cout << "Printing inorder traversal of the tree : ";

	stack<TreeNode*> inorderStack;
	TreeNode* currentPtr = *rootPtr;
	TreeNode* tempPtr = nullptr;

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

void preorderTraversal(TreeNode** rootPtr) {

	cout << "Printing preorder traversal of the tree : ";

	stack<TreeNode*> preorderStack;
	TreeNode* tempPtr = nullptr;

	preorderStack.push((*rootPtr));

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

void postorderTraversal(TreeNode** rootPtr) {

	cout << "Printing postorder traversal of the tree : ";

	stack<TreeNode*> postorderStack, stack2;
	TreeNode* tempPtr = nullptr;
	postorderStack.push(*rootPtr);

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

int main22() {

	// Initializing root node to null

	TreeNode* rootNode = nullptr;

	// Inserting new nodes to the tree

	insertNode(&rootNode, 15);
	insertNode(&rootNode, 10);
	insertNode(&rootNode, 20);
	insertNode(&rootNode, 8);
	insertNode(&rootNode, 12);
	insertNode(&rootNode, 17);
	insertNode(&rootNode, 25);

	
	// Traversal operations 

	inorderTraversal(&rootNode);
	preorderTraversal(&rootNode);
	postorderTraversal(&rootNode);

	//Search operations
	string str1;
	str1 = searchTree(&rootNode, 17);
	cout << "Search for value 17 in the tree is " << str1 << endl << endl;

	str1 = searchTree(&rootNode, 44);
	cout << "Search for value 44 in the tree is " << str1 << endl << endl;

	// Delete operations
	deleteNode(&rootNode, 20);
	inorderTraversal(&rootNode);
	deleteNode(&rootNode, 88);
	inorderTraversal(&rootNode);

	return 0;
}