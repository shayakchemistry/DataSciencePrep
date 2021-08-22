/*
* 
* C++ Program to implement B Trees
* 
*/

#include<iostream>

using namespace std;

// B Tree Order. 
// The node can hold atmost 2 X TREE ORDER - 1 number of keys / data
#define TREE_ORDER 3

class BTreeNode {
public:
    int* data; //Keys array
    BTreeNode** childPtr;
    bool isLeaf;
    int numKeys; // number of keys
};

BTreeNode* rootPtr = nullptr;

BTreeNode* createNode() { // Utility to create a new node
    int i;
    BTreeNode* newNode = new BTreeNode();
    newNode->data = new int[(2 * TREE_ORDER) - 1];
    newNode->childPtr = new BTreeNode * [2 * TREE_ORDER];
    newNode->isLeaf = true; // Assume that it is always leaf node
    newNode->numKeys = 0;
    for (i = 0; i < (2 * TREE_ORDER); i++) {
        newNode->childPtr[i] = nullptr;
    }
    return newNode;
}


void traverseTree(BTreeNode* nodePtr) {
    BTreeNode* currentPtr = nodePtr;
    if (nodePtr == nullptr) { // Just a safe check if it is null
        return;
    }
    int i;
    for (i = 0; i < currentPtr->numKeys; i++) {
        if (currentPtr->isLeaf == false) {
            traverseTree(currentPtr->childPtr[i]); // Traversing the children first
        }
        cout << " " << currentPtr->data[i];
    }
    if (currentPtr->isLeaf == false) { // This is for the last child node
        traverseTree(currentPtr->childPtr[i]);
    }
}


int splitNode(int pos, BTreeNode* nodePtr1, BTreeNode* nodePtr2) {
    // Utility to split the node if we try to insert a value more than the 2*Tree_order

    int j;
    BTreeNode* newNode = createNode();
    newNode->isLeaf = nodePtr2->isLeaf;
    newNode->numKeys = TREE_ORDER - 1;
    

    // Copy the last (TREE_ORDER - 1) keys of y to newNode
    for (j = 0; j < TREE_ORDER - 1; j++) {
        newNode->data[j] = nodePtr2->data[j + TREE_ORDER];
    }

    // Copy the last TREE_ORDER children of nodePtr to newNode
    if (nodePtr2->isLeaf == false)
    {
        for (j = 0; j < TREE_ORDER; j++) {
            newNode->childPtr[j] = nodePtr2->childPtr[j + TREE_ORDER];
        }
    }

    // Reduce the number of keys in y
    nodePtr2->numKeys = TREE_ORDER - 1;

    // Since this node is going to have a new child,
    // create space of new child
    for (j = nodePtr1->numKeys; j >= pos + 1; j--) {
        nodePtr1->childPtr[j + 1] = nodePtr1->childPtr[j];
    }

    // Link the new child to this node
    nodePtr1->childPtr[pos + 1] = newNode;

    // A key of y will move to this node. Find the location of
    // new key and move all greater keys one space ahead
    for (j = nodePtr1->numKeys - 1; j >= pos; j--)
        nodePtr1->data[j + 1] = nodePtr1->data[j];

    // Copy the middle key of y to this node
    nodePtr1->data[pos] = nodePtr2->data[TREE_ORDER - 1];

    // Increment count of keys in this node
    nodePtr1->numKeys += 1;
}


void insertNonFull(int data, BTreeNode* nodePtr) {
    // Initialize index as index of rightmost element
    int i = nodePtr->numKeys - 1;

    // If this is a leaf node
    if (nodePtr->isLeaf == true)
    {
        // The following loop does two things
        // a) Finds the location of new key to be inserted
        // b) Moves all greater keys to one place ahead
        while (i >= 0 && nodePtr->data[i] > data)
        {
            nodePtr->data[i + 1] = nodePtr->data[i];
            i--;
        }

        // Insert the new key at found location
        nodePtr->data[i + 1] = data;
        nodePtr->numKeys += 1;
    }
    else // If this node is not leaf
    {
        // Find the child which is going to have the new key
        while (i >= 0 && nodePtr->data[i] > data) {
            i--;
        }

        // See if the found child is full
        if (nodePtr->childPtr[i + 1]->numKeys == 2 * TREE_ORDER - 1)
        {
            // If the child is full, then split it
            splitNode(i + 1, nodePtr, nodePtr->childPtr[i + 1]);

            // After split, the middle key of C[i] goes up and
            // C[i] is splitted into two.  See which of the two
            // is going to have the new key
            if (nodePtr->data[i + 1] < data) {
                i++;
            }
        }
        insertNonFull(data, nodePtr->childPtr[i + 1]);
    }
}


void insert(int data) {
    // If tree is empty
    if (rootPtr == NULL)
    {
        // Allocate memory for root
        rootPtr = createNode();
        rootPtr->data[0] = data;  // Insert key
        rootPtr->numKeys = 1;  // Update number of keys in root
    }
    else // If tree is not empty
    {
        // If root is full, then tree grows in height
        if (rootPtr->numKeys == (2 * TREE_ORDER) - 1) {
            // Allocate memory for new root
            BTreeNode* newNode = createNode();
            newNode->isLeaf = false;

            // Make old root as child of new root
            newNode->childPtr[0] = rootPtr;

            // Split the old root and move 1 key to the new root
            splitNode(0, newNode, rootPtr);
            //newNode->splitChild(0, root);

            // New root has two children now.  Decide which of the
            // two children is going to have new key
            int i = 0;
            if (newNode->data[0] < data) {
                i++;
            }
            insertNonFull(data, newNode->childPtr[i]);

            // Change root
            rootPtr = newNode;
        }
        else { // If root is not full, call insertNonFull for root
            insertNonFull(data, rootPtr);
        }
    }
}




int findKey(int data, BTreeNode* nodePtr) {
    int index = 0;
    while (index < nodePtr->numKeys && nodePtr->data[index] < data) {
        ++index;
    }
    return index;
}

// A function to remove the index-th key from this node - which is a leaf node
void removeFromLeaf(int idx, BTreeNode* nodePtr)
{

    // Move all the keys after the index-th pos one place backward
    for (int i = idx + 1; i < nodePtr->numKeys; ++i) {
        nodePtr->data[i - 1] = nodePtr->data[i];
    }

    // Reduce the count of keys
    nodePtr->numKeys--;
}


// A function to get predecessor of keys[index]
int getPred(int idx, BTreeNode* nodePtr)
{
    // Keep moving to the right most node until we reach a leaf
    BTreeNode* cur = nodePtr->childPtr[idx];
    while (!cur->isLeaf)
        cur = cur->childPtr[cur->numKeys];

    // Return the last key of the leaf
    return cur->data[cur->numKeys - 1];
}

int getSucc(int idx, BTreeNode* nodePtr)
{

    // Keep moving the left most node starting from C[index+1] until we reach a leaf
    BTreeNode* cur = nodePtr->childPtr[idx + 1];
    while (!cur->isLeaf)
        cur = cur->childPtr[0];

    // Return the first key of the leaf
    return cur->data[0];
}

// A function to borrow a key from C[index-1] and insert it
// into C[index]
void borrowFromPrev(int idx, BTreeNode* nodePtr)
{

    BTreeNode* child = nodePtr->childPtr[idx];
    BTreeNode* sibling = nodePtr->childPtr[idx - 1];

    // The last key from C[index-1] goes up to the parent and key[index-1]
    // from parent is inserted as the first key in C[index]. Thus, the  loses
    // sibling one key and child gains one key

    // Moving all key in C[index] one step ahead
    for (int i = child->numKeys - 1; i >= 0; --i)
        child->data[i + 1] = child->data[i];

    // If C[index] is not a leaf, move all its child pointers one step ahead
    if (!child->isLeaf)
    {
        for (int i = child->numKeys; i >= 0; --i)
            child->childPtr[i + 1] = child->childPtr[i];
    }

    // Setting child's first key equal to keys[index-1] from the current node
    child->data[0] = nodePtr->data[idx - 1];

    // Moving sibling's last child as C[index]'s first child
    if (!child->isLeaf)
        child->childPtr[0] = sibling->childPtr[sibling->numKeys];

    // Moving the key from the sibling to the parent
    // This reduces the number of keys in the sibling
    nodePtr->data[idx - 1] = sibling->data[sibling->numKeys - 1];

    child->numKeys += 1;
    sibling->numKeys -= 1;

    return;
}

// A function to borrow a key from the C[index+1] and place
// it in C[index]
void borrowFromNext(int idx, BTreeNode* nodePtr)
{

    BTreeNode* child = nodePtr->childPtr[idx];
    BTreeNode* sibling = nodePtr->childPtr[idx + 1];

    // keys[index] is inserted as the last key in C[index]
    child->data[(child->numKeys)] = nodePtr->data[idx];

    // Sibling's first child is inserted as the last child
    // into C[index]
    if (!(child->isLeaf))
        child->childPtr[(child->numKeys) + 1] = sibling->childPtr[0];

    //The first key from sibling is inserted into keys[index]
    nodePtr->data[idx] = sibling->data[0];

    // Moving all keys in sibling one step behind
    for (int i = 1; i < sibling->numKeys; ++i)
        sibling->data[i - 1] = sibling->data[i];

    // Moving the child pointers one step behind
    if (!sibling->isLeaf)
    {
        for (int i = 1; i <= sibling->numKeys; ++i)
            sibling->childPtr[i - 1] = sibling->childPtr[i];
    }

    // Increasing and decreasing the key count of C[index] and C[index+1]
    // respectively
    child->numKeys += 1;
    sibling->numKeys -= 1;
}

// A function to merge C[index] with C[index+1]
// C[index+1] is freed after merging
void merge(int idx, BTreeNode* nodePtr)
{
    BTreeNode* child = nodePtr->childPtr[idx];
    BTreeNode* sibling = nodePtr->childPtr[idx + 1];

    // Pulling a key from the current node and inserting it into (t-1)th
    // position of C[index]
    child->data[TREE_ORDER - 1] = nodePtr->data[idx];

    // Copying the keys from C[index+1] to C[index] at the end
    for (int i = 0; i < sibling->numKeys; ++i)
        child->data[i + TREE_ORDER] = sibling->data[i];

    // Copying the child pointers from C[index+1] to C[index]
    if (!child->isLeaf)
    {
        for (int i = 0; i <= sibling->numKeys; ++i)
            child->childPtr[i + TREE_ORDER] = sibling->childPtr[i];
    }

    // Moving all keys after index in the current node one step before -
    // to fill the gap created by moving keys[index] to C[index]
    for (int i = idx + 1; i < nodePtr->numKeys; ++i)
        nodePtr->data[i - 1] = nodePtr->data[i];

    // Moving the child pointers after (index+1) in the current node one
    // step before
    for (int i = idx + 2; i <= nodePtr->numKeys; ++i)
        nodePtr->childPtr[i - 1] = nodePtr->childPtr[i];

    // Updating the key count of child and the current node
    child->numKeys += sibling->numKeys + 1;
    nodePtr->numKeys--;

    // Freeing the memory occupied by sibling
    delete(sibling);
}


// A function to fill child C[index] which has less than t-1 keys
void fill(int idx, BTreeNode* nodePtr)
{

    // If the previous child(C[index-1]) has more than t-1 keys, borrow a key
    // from that child
    if (idx != 0 && nodePtr->childPtr[idx - 1]->numKeys >= TREE_ORDER)
        borrowFromPrev(idx, nodePtr);

    // If the next child(C[index+1]) has more than t-1 keys, borrow a key
    // from that child
    else if (idx != nodePtr->numKeys && nodePtr->childPtr[idx + 1]->numKeys >= TREE_ORDER)
        borrowFromNext(idx, nodePtr);

    // Merge C[index] with its sibling
    // If C[index] is the last child, merge it with with its previous sibling
    // Otherwise merge it with its next sibling
    else
    {
        if (idx != nodePtr->numKeys)
            merge(idx, nodePtr);
        else
            merge(idx - 1, nodePtr);
    }
}


// A function to remove the index-th key from this node - which is a non-leaf node
void removeFromNonLeaf(int idx, BTreeNode* nodePtr)
{

    int k = nodePtr->data[idx];

    // If the child that precedes data (C[index]) has atleast t keys,
    // find the predecessor 'pred' of data in the subtree rooted at
    // C[index]. Replace data by pred. Recursively delete pred
    // in C[index]
    if (nodePtr->childPtr[idx]->numKeys >= TREE_ORDER)
    {
        int pred = getPred(idx, nodePtr);
        nodePtr->data[idx] = pred;
        removeFromNode(pred, nodePtr->childPtr[idx]);
    }

    // If the child C[index] has less that t keys, examine C[index+1].
    // If C[index+1] has atleast t keys, find the successor 'succ' of data in
    // the subtree rooted at C[index+1]
    // Replace data by succ
    // Recursively delete succ in C[index+1]
    else if (nodePtr->childPtr[idx + 1]->numKeys >= TREE_ORDER)
    {
        int succ = getSucc(idx, nodePtr);
        nodePtr->data[idx] = succ;
        removeFromNode(succ, nodePtr->childPtr[idx + 1]);
    }

    // If both C[index] and C[index+1] has less that t keys,merge data and all of C[index+1]
    // into C[index]
    // Now C[index] contains 2t-1 keys
    // Free C[index+1] and recursively delete data from C[index]
    else
    {
        merge(idx, nodePtr);
        removeFromNode(k, nodePtr->childPtr[idx]);
    }
}

void removeFromNode(int data, BTreeNode* nodePtr) {
    int idx = findKey(data, nodePtr);

    // The key to be removed is present in this node
    if (idx < nodePtr->numKeys && nodePtr->data[idx] == data)
    {

        // If the node is a leaf node - removeFromLeaf is called
        // Otherwise, removeFromNonLeaf function is called
        if (nodePtr->isLeaf) {
            removeFromLeaf(idx, nodePtr);
        }
        else {
            removeFromNonLeaf(idx, nodePtr);
        }
    }
    else
    {

        // If this node is a leaf node, then the key is not present in tree
        if (nodePtr->isLeaf)
        {
            cout << "The key " << data << " is does not exist in the tree\n";
            return;
        }

        // The key to be removed is present in the sub-tree rooted with this node
        // The flag indicates whether the key is present in the sub-tree rooted
        // with the last child of this node
        bool flag = ((idx == nodePtr->numKeys) ? true : false);

        // If the child where the key is supposed to exist has less that t keys,
        // we fill that child
        if (nodePtr->childPtr[idx]->numKeys < TREE_ORDER) {
            fill(idx, nodePtr);
        }

        // If the last child has been merged, it must have merged with the previous
        // child and so we recurse on the (index-1)th child. Else, we recurse on the
        // (index)th child which now has atleast t keys
        if (flag && idx > nodePtr->numKeys) {
            removeFromNode(data, nodePtr->childPtr[idx - 1]);
        }
        else {
            removeFromNode(data, nodePtr->childPtr[idx]);
        }
    }
}

void deleteKey(int data ) {
    if (rootPtr == nullptr)
    {
        cout << "The tree is empty\n";
        return;
    }

    // Call the remove function for root
    removeFromNode(data, rootPtr);

    // If the root node has 0 keys, make its first child as the new root
    //  if it has a child, otherwise set root as NULL
    if (rootPtr->numKeys == 0)
    {
        BTreeNode* tmp = rootPtr;
        if (rootPtr->isLeaf) {
            rootPtr = NULL;
        }
        else {
            rootPtr = rootPtr->childPtr[0];
        }

        // Free the old root
        delete tmp;
    }
}


int main25() {



	return 0;
}