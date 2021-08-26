/*
In this program we do define a Hash Table using Open Addressing - Quadratic Probing. We do perform the following operation on the Hash Table. In this we look for the i^2 slot.
1. Insert
2. Delete
3. Display

*/

#include<iostream>

using namespace std;

class QPHashTable {
private:
	int bucketSize;
	int* hashTable;

public:
	QPHashTable(int b);

	int hashFn(int val1);

	void insertElement(int item1);

	void deleteElement(int item1);

	void printTable();

};

QPHashTable::QPHashTable(int b) {
	bucketSize = b;
	// We initialize all the elements to -1
	hashTable = new int[b];
	int i;
	for (i = 0; i < bucketSize; i++) {
		hashTable[i] = -1;
	}
}

int QPHashTable::hashFn(int val1) {
	return (val1 % bucketSize);
}

void QPHashTable::insertElement(int item1) {
	// First find the hash index
	int index = hashFn(item1);
	bool flag1 = false; // This flag is here to indicate whether the insertion is successful 

	if (hashTable[index] == -1) { // If that index is empty then insert
		hashTable[index] = item1;
		flag1 = true;
	}
	else { // Else go for quadratic probing 
		int i = 1;
		int newIndex = (index + (i*i)) % bucketSize;
		while ((newIndex != index)) {
			if (hashTable[newIndex] == -1) {
				hashTable[newIndex] = item1;
				flag1 = true;
				break;
			}

			i++;
			newIndex = (index + (i * i)) % bucketSize;
		}
	}

	if (flag1) {
		cout << "Inserted element " << item1 << " to the hash table" << endl;
	}
	else {
		cout << "Was not able to insert element " << item1 << " to the hash table" << endl;
	}

}

void QPHashTable::deleteElement(int item1) {
	int index = hashFn(item1);
	bool flag1 = false; // This flag is here to indicate whether the insertion is successful 

	if (hashTable[index] == item1) { // If that index contains the element then delete
		hashTable[index] = -1;
		flag1 = true;
	}
	else { // Else go for quadratic probing 
		int i = 1;
		int newIndex = (index + (i * i)) % bucketSize;
		while ((newIndex != index)) {
			if (hashTable[newIndex] == item1) {
				hashTable[newIndex] = -1;
				flag1 = true;
				break;
			}

			i++;
			newIndex = (index + (i * i)) % bucketSize;
		}
	}
	if (flag1) {
		cout << "Deleted element " << item1 << " from the hash table" << endl;
	}
	else {
		cout << "Was not able to delete element " << item1 << " from the hash table" << endl;
	}

}

void QPHashTable::printTable() {

	cout << "Printing Hash Table contents : ";
	int i;
	for (i = 0; i < bucketSize; i++) {
		cout << hashTable[i] << " ";
	}
	cout << endl << endl;
}

int main18() {

	// Creating an hash table

	QPHashTable table1 = QPHashTable(10);

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

	// Display the hash table

	table1.printTable();

	return 0;
}