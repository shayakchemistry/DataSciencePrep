/*
In this program we do define a Hash Table using Chaining. We do perform the following operation on the Hash Table
1. Insert
2. Delete
3. Display

*/

#include<iostream>

using namespace std;

class HashNode { // This is a link list node (chaining) that will contain data in the bucket 
public:
	int data;
	HashNode* next;
};

class CHashTable { // Chaining Hash table class
private:
	HashNode** hashTable;
	int bucketSize;

public:
	CHashTable(int b);

	int hashFunction(int val1);

	void insertElement(int item1);

	void deleteElement(int item1);

	void printTable();

};

CHashTable::CHashTable(int b) {

	bucketSize = b;
	hashTable = new HashNode * [bucketSize];
	int i;
	for (i = 0; i < bucketSize; i++) {
		hashTable[i] = nullptr;
	}
}

int CHashTable::hashFunction(int val1) {
	return (val1 % bucketSize);
}

void CHashTable::insertElement(int item1) {
	int index = hashFunction(item1);
	HashNode* newNode = new HashNode();
	newNode->data = item1;
	newNode->next = nullptr;

	if (hashTable[index] == nullptr) {
		hashTable[index] = newNode;
	}
	else {
		bool flag1 = true;
		HashNode* currentPtr = hashTable[index];
		while (flag1) {
			if (currentPtr->next == nullptr) {
				flag1 = false;
				break;
			}
			else {
				currentPtr = currentPtr->next;
			}
		}
		currentPtr->next = newNode;
	}
	cout << "Inserted value " << item1 << " to index " << index << endl << endl;
}

void CHashTable::deleteElement(int item1) {

	int index = hashFunction(item1);
	HashNode* currentNode, * prevNode;
	bool isFound = false;
	bool flag1 = true;

	if (hashTable[index] == nullptr) {
		isFound = false;
	}
	else {
		prevNode = nullptr;
		currentNode = hashTable[index];
		while (flag1) {
			if (currentNode == nullptr) {
				flag1 = false;
				break;
			}
			if (currentNode->data == item1) {
				if (prevNode == nullptr) {
					hashTable[index] = nullptr;
				}
				else {
					prevNode->next = currentNode->next;
				}
				flag1 = false;
				isFound = true;
				break;
			}
			prevNode = currentNode;
			currentNode = currentNode->next;
		}
	}
	if (isFound) {
		cout << "Deleted " << item1 << " at hash table position " << index << endl << endl;
	}
	else {
		cout << "Couldn't delete " << item1 << " at hash table position " << index << " as it was not found " << endl << endl;
	}

}

void CHashTable::printTable() {

	int i;
	cout << "Printing Hash Table : " << endl;
	for (i = 0; i < bucketSize; i++) {
		cout << "Index " << i;
		
		if (hashTable[i] == nullptr) {
			cout << " ===> NULL ";
		}
		else {
			bool flag1 = true;
			HashNode* currentPtr = hashTable[i];
			while (flag1) {
				cout << " ===> " << currentPtr->data;
				if (currentPtr->next == nullptr) {
					flag1 = false;
					break;
				}
				else {
					currentPtr = currentPtr->next;
				}
			}
		}

		cout << endl;
	}
	cout << endl;
}



int main16() {

	// Creating an hash table

	CHashTable table1 = CHashTable(10);

	// Insering into the hash table
	table1.insertElement(12);
	table1.insertElement(23);
	table1.insertElement(55);
	table1.insertElement(11);
	table1.insertElement(32);
	table1.insertElement(17);
	table1.insertElement(59);
	table1.insertElement(33);
	table1.insertElement(14);
	table1.insertElement(5);
	table1.insertElement(66);

	// Display the hash table

	table1.printTable();

	// Delete elements from the hash table

	table1.deleteElement(32);
	table1.deleteElement(11);
	table1.deleteElement(999);
	table1.deleteElement(66);

	return 0;
}