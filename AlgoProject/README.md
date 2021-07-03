## Algorithm Project

In this module we will explore the algorithm concepts. We will not start from very basic but from an intermediate level. Here we do consider the user is somewhat knowledgeable with the topics We are going to focus on the following topics:

- Complexity Theorem
- Linked List
- Stacks and Queues
- Sorting
- Searching
- Hash Tables
- Recursion
- Backtracking
- Tree Algorithms
- Balanced Trees
- Decision Trees
- Network Algorithm

### Complexity Theorem

Complexity theory is a subfield of theoretical computer science one of whose primary goals is to classify and compare the practical difficulty of solving problems about finite combinatorial objects. Let's consider a problem where we are given two natural numbers n and m, and we have to find if they are relatively prime. This type of problems are equally difficult from the standpoint of classical computability theory in the sense that they are all effectively decidable. Yet they still appear to differ significantly in practical difficulty. In such scenario, with the supplied pair of numbers m>n>0 it is possible to determine their relative primality by a method (Euclid’s algorithm) which requires a number of steps proportional to log(n). On the other hand, all known methods for solving the problem require a ‘brute force’ search through a large class of cases which increase at least exponentially in the size of the problem instance.

In computational complexity theory, a problem X is considered to be complex in proportion to the difficulty of carrying out the most efficient algorithm by which it may be decided. Similarly, one problem X is understood to be more complex (or harder) than another problem Y just in case Y possesses a more efficient decision algorithm than the most efficient algorithm for deciding X. In order to make these definitions precise, a number of technical conventions are employed. With reference to the above statements, we now define complexity class to be the set of problems for which there exists a decision procedure with a given running time or running space complexity. Thus, we can estimate algorithm using space and time complexity. Here we do discuss two major things: 

- Asymptotic Notations
- P and NP

##### Notations

In this subsection, we will understand the complexity notations for Algorithms along with Big-O, Big-Omega, Big-Theta and Little-O and see how we can calculate the complexity of any algorithm. The notations we use to describe the asymptotic running time of an algorithm are defined in terms of functions whose domains are the set of natural numbers ℕ = 0,1,2,.... such notations are convenient to describing the worst-case running time function T(n), which usually is defined only on integer input sizes. Computer scientists make heavy use of a specialized asymptotic notation to describe the growth of functions approximately. The individual asymptotic notation description are given below.

*Big O:*
Big-O notation indicates maximum time required by an algorithm for all input values. Let us consider Let T(n) as a function on n = 1, 2, 3,... (usually, the worst-case running time of an algorithm). 

T(n) = O(f(n)) if and only if T(n) is eventually bounded above by a constant multiple of f(n) (asymptotic upper bound).

*Big Omega:*
T(n) is big-omega of another function f(n) if and only if T(n) is eventually bounded below by a constant multiple of f(n). In this case, we write T(n) = Ω(f(n)). As before, we use two constants c and n0 to quantify “constant multiple” and “eventually.”

*Big Theta:*
Big-theta notation, or simply theta notation, is analogous to “equal to.” Saying that T(n) = Θ(f(n)) just means that both T(n) = Ω(f(n)) and T(n) = O(f(n)). Equivalently, T(n) is eventually sandwiched between two different constant multiples (c1,c2) of f(n).

*Little O:*
Big-O notation is analogous to “less than or equal to,” little-o notation is analogous to “strictly less than". 

T(n) = o(f(n)) if and only if ∃ positive constants c,n0 such that T(n) ≤ c.f(n)

##### P and NP

Complexity theory attempts to make distinctions precise by proposing a formal criterion for what it means for a mathematical problem to be feasibly decidable – i.e. that it can be solved by a conventional Turing machine in a number of steps which is proportional to a polynomial function of the size of its input. The class of problems with this property is known as P – or polynomial time. P can be formally shown to be distinct from certain other classes such as EXP – or exponential time. A problem which can be correctly decided by some computation of a non-deterministic Turing machine in a number of steps which is a polynomial function of the size of its input is known as NP – or non-deterministic polynomial time. A famous conjecture – often regarded as the most fundamental in all of theoretical computer science – states that P is also properly contained in NP – i.e. P⊊NP.

### Linked List

Linked list is a linear collection of data elements whose order is not given by their physical placement in memory. Instead, each element points to the next. It is a data structure consisting of a collection of nodes which together represent a sequence. In its most basic form, each node contains: data, and a reference (in other words, a link) to the next node in the sequence. This structure allows for efficient insertion or removal of elements from any position in the sequence during iteration. More complex variants add additional links, allowing more efficient insertion or removal of nodes at arbitrary positions. A drawback of linked lists is th at access time is linear (and difficult to pipeline). Faster access, such as random access, is not feasible. Arrays have better cache locality compared to linked lists. Here we do discuss two types of linked list:

##### Singly Linked List

A singly linked list is represented by a pointer to the first node of the linked list. The first node is called the head. If the linked list is empty, then the value of the head is NULL. 
Each node in a list consists of at least two parts:
1. Data
2. Pointer (Or Reference) to the next node

*Sorting of Linked List:*
As Linked List is a linear data structure, we can apply sorting techniques on it. 

##### Doubly Linked Lists

A Doubly Linked List (DLL) contains an extra pointer, typically called previous pointer, together with next pointer and data which are there in singly linked list. It can be traversed in both forward and backward direction. The delete operation in DLL is more efficient if pointer to the node to be deleted is given. We can quickly insert a new node before a given node. In singly linked list, to delete a node, pointer to the previous node is needed. To get this previous node, sometimes the list is traversed. In DLL, we can get the previous node using previous pointer. It only takes extra memory for an extra pointer and all operation requires previous pointers to be maintained.

##### Circular Linked List

Circular Linked List is a variation of Linked list in which the first element points to the last element and the last element points to the first element. Both Singly Linked List and Doubly Linked List can be made into a circular linked list. 

### Stacks and Queues

##### Stacks

Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out). Mainly the following three basic operations are performed in the stack:

- Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
- Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
- Peek or Top: Returns top element of stack. 
- isEmpty: Returns true if stack is empty, else false.

##### Queues

Queue is an abstract data structure, somewhat similar to Stacks. Unlike stacks, a queue is open at both its ends. One end is always used to insert data (enqueue) and the other is used to remove data (dequeue). Queue follows First-In-First-Out methodology, i.e., the data item stored first will be accessed first. A real-world example of queue can be a single-lane one-way road, where the vehicle enters first, exits first. More real-world examples can be seen as queues at the ticket windows and bus-stops.

### Sorting

A Sorting Algorithm is used to rearrange a given array or list elements according to a comparison operator on the elements. The comparison operator is used to decide the new order of element in the respective data structure. Some important sorting algorithm is discussed in the following sub-sections.

##### Insertion sort

Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part. The algorithm is given below:

- Step 1 − If it is the first element, it is already sorted. return 1;
- Step 2 − Pick next element
- Step 3 − Compare with all elements in the sorted sub-list
- Step 4 − Shift all the elements in the sorted sub-list that is greater than the value to be sorted
- Step 5 − Insert the value
- Step 6 − Repeat until list is sorted

##### Selection sort

The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. This sorting algorithm is an in-place comparison-based algorithm in which the list is divided into two parts, the sorted part at the left end and the unsorted part at the right end. Initially, the sorted part is empty and the unsorted part is the entire list. The smallest element is selected from the unsorted array and swapped with the leftmost element, and that element becomes a part of the sorted array. This process continues moving unsorted array boundary by one element to the right. The algorithm is given below:

- Step 1 − Set MIN to location 0
- Step 2 − Search the minimum element in the list
- Step 3 − Swap with value at location MIN 
- Step 4 − Increment MIN to point to next element
- Step 5 − Repeat until list is sorted

##### Quick sort

Quick sort is a highly efficient sorting algorithm and is based on partitioning of array of data into smaller arrays. A large array is partitioned into two arrays one of which holds values smaller than the specified value, say pivot, based on which the partition is made and another array holds values greater than the pivot value. Quicksort partitions an array and then calls itself recursively twice to sort the two resulting subarrays. The algorithm is given below:

- Step 1 − Choose the highest index value has pivot
- Step 2 − Take two variables to point left and right of the list excluding pivot
- Step 3 − left points to the low index
- Step 4 − right points to the high
- Step 5 − while value at left is less than pivot move right
- Step 6 − while value at right is greater than pivot move left
- Step 7 − if both step 5 and step 6 does not match swap left and right
- Step 8 − if left ≥ right, the point where they met is new pivot

##### Heap sort

Heap is a data structure which is a complete binary tree. We derive a sorting out of this data structure. Heap sort is a comparison-based sorting technique based on Binary Heap data structure. It is similar to selection sort where we first find the minimum element and place the minimum element at the beginning. We repeat the same process for the remaining elements. Heap sort algorithm looks like:

- Step 1 - Build a max heap from the input data.
- Step 2 - At this point, the largest item is stored at the root of the heap. Replace it with the last item of the heap followed by reducing the size of heap by 1. Finally, heapify the root of the tree.
- Step 3 - Repeat step 2 while the size of the heap is greater than 1.

##### Merge sort

Merge sort is a sorting technique based on divide and conquer technique. Merge sort first divides the array into equal halves and then combines them in a sorted manner. The algorithm look like:

- Step 1 − if it is only one element in the list it is already sorted, return.
- Step 2 − divide the list recursively into two halves until it can no more be divided.
- Step 3 − merge the smaller lists into new list in sorted order.

##### Bubble sort

Bubble sort is a simple sorting algorithm. This sorting algorithm is comparison-based algorithm in which each pair of adjacent elements is compared and the elements are swapped if they are not in order.  

##### Counting sort 

Counting sort is a sorting technique based on keys between a specific range. It works by counting the number of objects having distinct key values (kind of hashing). Then doing some arithmetic to calculate the position of each object in the output sequence.


### Searching

The searching algorithms are used to search or find one or more than one element from a dataset. These type of algorithms are used to find elements from a specific data structures. There are many search algorithms of which we have discussed some of them in the following sub-sections:

##### Linear Search

Linear searching techniques are the simplest technique. In this technique, the items are searched one by one. This procedure is also applicable for unsorted data set. Linear search is also known as sequential search. It is named as linear because its time complexity is of the order of n O(n). Linear search algorithm looks like:

Linear Search ( Array A, Value x)

- Step 1: Set i to 1
- Step 2: if i > n then go to step 7
- Step 3: if A[i] = x then go to step 6
- Step 4: Set i to i + 1
- Step 5: Go to Step 2
- Step 6: Print Element x Found at index i and go to step 8
- Step 7: Print element not found
- Step 8: Exit

##### Binary Search

Binary search is a fast search algorithm with run-time complexity of Ο(log n). This search algorithm works on the principle of divide and conquer. For this algorithm to work properly, the data collection should be in the sorted form. Binary search looks for a particular item by comparing the middle most item of the collection. If a match occurs, then the index of item is returned. If the middle item is greater than the item, then the item is searched in the sub-array to the left of the middle item. Otherwise, the item is searched for in the sub-array to the right of the middle item. This process continues on the sub-array as well until the size of the subarray reduces to zero.

##### Interpolation Search

Interpolation search is an improved variant of binary search. This search algorithm works on the probing position of the required value. For this algorithm to work properly, the data collection should be in a sorted form and equally distributed. Binary search has a huge advantage of time complexity over linear search. Linear search has worst-case complexity of Ο(n) whereas binary search has Ο(log n). The algorithm looks like:

- Step 1 − Start searching data from middle of the list.
- Step 2 − If it is a match, return the index of the item, and exit.
- Step 3 − If it is not a match, probe position.
- Step 4 − Divide the list using probing formula and find the new midle.
- Step 5 − If data is greater than middle, search in higher sub-list.
- Step 6 − If data is smaller than middle, search in lower sub-list.
- Step 7 − Repeat until match.

### Hash Tables

Hash Table is a data structure which stores data in an associative manner. In a hash table, data is stored in an array format, where each data value has its own unique index value. Access of data becomes very fast if we know the index of the desired data. Thus, it becomes a data structure in which insertion and search operations are very fast irrespective of the size of the data. Hash Table uses an array as a storage medium and uses hash technique to generate an index where an element is to be inserted or is to be located from. Hashing techniques are used to find one-to-one correspondence between a key and an index in a hash table. One of the most important issue facing is to avoid collision. Collision happens when we try to insert two elements in the same index. There are many important collision avoidance techniques

##### Chaining

Chaining is a way to avoid collision. In the chaining approach, the hash table is an array of linked lists i.e., each index has its own linked list. All key-value pairs mapping to the same index will be stored in the linked list of that index.

##### Open Addressing 

Open addressing, or closed hashing, is a method of collision resolution in hash tables. With this method a hash collision is resolved by probing, or searching through alternative locations in the array (the probe sequence) until either the target record is found, or an unused array slot is found, which indicates that there is no such key in the table. Well-known probe sequences are discussed in the following subsections.

##### Open Addressing - Linear Probing

Linear probing is a scheme categorized under open addressing. When the hash function causes a collision by mapping a new key to a cell of the hash table that is already occupied by another key, linear probing searches the table for the closest following free location and inserts the new key there. Lookups are performed in the same way, by searching the table sequentially starting at the position given by the hash function, until finding a cell with a matching key or an empty cell.

##### Open Addressing - Quadratic Probing

Quadratic probing is an open-addressing scheme where we look for i2‘th slot in i’th iteration if the given hash value x collides in the hash table. It is done using the following method. Let hash(x) be the slot index computed using the hash function for an value x.

- If the slot hash(x) % S is full, then we try (hash(x) + 1*1) % S.
- If (hash(x) + 1*1) % S is also full, then we try (hash(x) + 2*2) % S.
- If (hash(x) + 2*2) % S is also full, then we try (hash(x) + 3*3) % S.
- This process is repeated for all the values of i until an empty slot is found.

##### Open Addressing - Double Hashing

Double hashing is a collision resolving technique in Open Addressed Hash tables. Double hashing uses the idea of applying a second hash function to key when a collision occurs. 

### Recursion

In this section we mainly focus on recursions. The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called as recursive function. Using recursive algorithm, certain problems can be solved quite easily. In the recursive program, the solution to the base case is provided and the solution of the bigger problem is expressed in terms of smaller problems. The idea is to represent a problem in terms of one or more smaller problems, and add one or more base conditions that stop the recursion. In the following subsections, we discuss more into the solutions using recursions.

##### Fibonacci Numbers

Fibonacci series is a series of numbers formed by the addition of the preceding two numbers in the series. The first two terms are zero and one respectively. The terms after this are generated by simply adding the previous two terms. Using this as a recursive method we do solve this problem.

##### Tower Of Hanoi

Tower of Hanoi is a mathematical puzzle which consist of 3 poles and number of discs of different sizes. Initially all the discs will be places in the single pole with the largest disc at the bottom and smallest on the top. We need to move all the disc from the first pole to the third pole with the smallest disc at the top and the largest at the bottom under the below conditions:

- Only one disc can be moved at a time
- Larger disc cannot be placed on a smaller disc

##### Koch Curves

The Koch snowflake (also known as the Koch curve, Koch star, or Koch island) is a mathematical curve and one of the earliest fractal curves to have been described. The progression for the area of the snowflake converges to 8/5 times the area of the original triangle, while the progression for the snowflake’s perimeter diverges to infinity. Consequently, the snowflake has a finite area bounded by an infinitely long line. It's construction involves the following steps:

- Draw an equilateral triangle.
- Divide each side in three equal parts.
- Draw an equilateral triangle on each middle part. Measure the length of the middle third to know the length of the sides of these new triangles.
- Divide each outer side into thirds. You can see the 2nd generation of triangles covers a bit of the first. These three line segments shouldn’t be parted in three.
- Draw an equilateral triangle on each middle part. We need to repeat these steps

##### Hilbert Curves

Hilbert curve is a type of space-filling curves that folds one dimensional axis into a two dimensional space, but still keeps the locality. 

##### Sierpinski Gaskets

The Sierpinski gasket, also known as the Sierpinski triangle, is the intersection of all the sets in this sequence, that is, the set of points that remain after this construction is repeated infinitely often. The concept behind this is the fact that the filled triangle is filled by an empty equilateral triangle in the center in such a way that this triangular space is congruent to the three triangles being formed around it.

##### Selections

Selection Algorithm is an algorithm for finding the kth smallest (or largest) number in a list or an array. That number is called the kth order statistic. It includes the various cases for finding the minimum, maximum and median elements in a list or an array. For finding the minimum (or maximum) element by iterating through the list, we keep the track of current minimum (or maximum) elements that occur so far and it is related to the selection sort.

### Backtracking

Backtracking is an algorithmic-technique for solving problems recursively by trying to build a solution incrementally, one piece at a time, removing those solutions that fail to satisfy the constraints of the problem at any point of time (by time, here, is referred to the time elapsed till reaching any level of the search tree). We discuss some solution that are discussed in the following subsections. 

##### The Eight Queens Problem

The eight queens puzzle is the problem of placing eight chess queens on an 8×8 chessboard so that no two queens threaten each other; thus, a solution requires that no two queens share the same row, column, or diagonal. The eight queens puzzle is an example of the more general n queens problem of placing n non-attacking queens on an n×n chessboard, for which solutions exist for all natural numbers n with the exception of n = 2 and n = 3. The eight queens puzzle has 92 distinct solutions. If solutions that differ only by the symmetry operations of rotation and reflection of the board are counted as one, the puzzle has 12 solutions. These are called fundamental solutions.

A fundamental solution usually has eight variants (including its original form) obtained by rotating 90, 180, or 270° and then reflecting each of the four rotational variants in a mirror in a fixed position. However, should a solution be equivalent to its own 90° rotation (as happens to one solution with five queens on a 5×5 board), that fundamental solution will have only two variants (itself and its reflection). Should a solution be equivalent to its own 180° rotation (but not to its 90° rotation), it will have four variants (itself and its reflection, its 90° rotation and the reflection of that). If n > 1, it is not possible for a solution to be equivalent to its own reflection because that would require two queens to be facing each other. Of the 12 fundamental solutions to the problem with eight queens on an 8×8 board, exactly one (solution 12 below) is equal to its own 180° rotation, and none is equal to its 90° rotation; thus, the number of distinct solutions is 11×8 + 1×4 = 92.

##### The Knights Tour

A knight's tour is a sequence of moves of a knight on a chessboard such that the knight visits every square exactly once. If the knight ends on a square that is one knight's move from the beginning square (so that it could tour the board again immediately, following the same path), the tour is closed; otherwise, it is open.

The knight's tour problem is the mathematical problem of finding a knight's tour. Creating a program to find a knight's tour is a common problem given to computer science students. Variations of the knight's tour problem involve chessboards of different sizes than the usual 8 × 8, as well as irregular (non-rectangular) boards.

### Greedy Algorithm

An algorithm is designed to achieve optimum solution for a given problem. In greedy algorithm approach, decisions are made from the given solution domain. As being greedy, the closest solution that seems to provide an optimum solution is chosen.

Greedy algorithms try to find a localized optimum solution, which may eventually lead to globally optimized solutions. However, generally greedy algorithms do not provide globally optimized solutions.

### Divide and Conquer

In divide and conquer approach, the problem in hand, is divided into smaller sub-problems and then each problem is solved independently. When we keep on dividing the subproblems into even smaller sub-problems, we may eventually reach a stage where no more division is possible. Those "atomic" smallest possible sub-problem (fractions) are solved. The solution of all sub-problems is finally merged in order to obtain the solution of an original problem.

### Dynamic Programming

Dynamic programming approach is similar to divide and conquer in breaking down the problem into smaller and yet smaller possible sub-problems. But unlike, divide and conquer, these sub-problems are not solved independently. Rather, results of these smaller sub-problems are remembered and used for similar or overlapping sub-problems.

Dynamic programming is used where we have problems, which can be divided into similar sub-problems, so that their results can be re-used. Mostly, these algorithms are used for optimization. Before solving the in-hand sub-problem, dynamic algorithm will try to examine the results of the previously solved sub-problems. The solutions of sub-problems are combined in order to achieve the best solution.

### Tree Algorithms

A tree is non-linear and a hierarchical data structure consisting of a collection of nodes such that each node of the tree stores a value, a list of references to nodes (the “children”). A tree consists of a root, and zero or more subtrees T1, T2, ...., Tk such that there is an edge from the root of the tree to the root of each subtree. There are some tree terminologies that are described below: 

*Parent Node :* The node which is a predecessor of a node is called the parent node of that node.

*Child Node :* The node which is the immediate successor of a node is called the child node of that node.

*Root Node :* The topmost node of a tree or the node which does not have any parent node is called the root node. A non-empty tree must contain exactly one root node and exactly one path from the root to all other nodes of the tree.

*Degree of a Node :* The total count of subtrees attached to that node is called the degree of the node. The degree of a leaf node must be 0. The degree of a tree is the degree of its root.

*Leaf Node or External Node :* The nodes which do not have any child nodes are called leaf nodes. 

*Ancestor of a Node :* Any predecessor nodes on the path of the root to that node are called Ancestors of that node.

*Descendant :* Any successor node on the path from the leaf node to that node.

*Sibling :* Children of the same parent node are called siblings.

*Depth of a node :* The count of edges from the root to the node.

*Height of a node :* The height of a tree is the height of the root node i.e the count of edges from the root to the deepest node.

*Level of a node :* The count of edges on the path from the root node to that node. The root node has level 0.

*Internal node :* A node with at least one child is called Internal Node.
    
*Neighbor of a Node :* Parent or child nodes of that node are called neighbors of that node.

The next thing we discuss is a special type of tree known as Binary tree. Binary Tree is a special data structure used for data storage purposes. A binary tree has a special condition that each node can have a maximum of two children. A binary tree has the benefits of both an ordered array and a linked list as search is as quick as in a sorted array and insertion or deletion operation are as fast as in linked list. There are some binary tree operations that are discussed below:

- *Insert:* Inserts an element in a tree/create a tree.
- *Search:* Searches an element in a tree.
- *Preorder Traversal:* Traverses a tree in a pre-order manner.
- *Inorder Traversal:* Traverses a tree in an in-order manner.
- *Postorder Traversal:* Traverses a tree in a post-order manner.

##### Insert

The very first insertion creates the tree. Afterwards, whenever an element is to be inserted, first locate its proper location. Start searching from the root node, then if the data is less than the key value, search for the empty location in the left subtree and insert the data. Otherwise, search for the empty location in the right subtree and insert the data.

##### Search

Whenever an element is to be searched, start searching from the root node, then if the data is less than the key value, search for the element in the left subtree. Otherwise, search for the element in the right subtree. Follow the same algorithm for each node.

##### Traversals - Inorder

In this traversal method, the left subtree is visited first, then the root and later the right sub-tree. We should always remember that every node may represent a subtree itself. If a binary tree is traversed in-order, the output will produce sorted key values in an ascending order.

##### Traversals - Preorder

In this traversal method, the root node is visited first, then the left subtree and finally the right subtree.

##### Traversals - Postorder

In this traversal method, the root node is visited last, hence the name. First we traverse the left subtree, then the right subtree and finally the root node.
Post Order Traversal

##### Traversals - Breadth-First Search

Breadth First Search (BFS) is an algorithm for traversing an unweighted Graph or a Tree. BFS starts with the root node and explores each adjacent node before exploring node(s) at the next level. BFS makes use of Queue for storing the visited nodes of the graph / tree.

##### Building Sorted Trees

Tree sort is a sorting algorithm that is based on Binary Search Tree data structure. It first creates a binary search tree from the elements of the input list or array and then performs an in-order traversal on the created binary search tree to get the elements in sorted order. The algorithm looks like:

- Step 1: Take the elements input in an array.
- Step 2: Create a Binary search tree by inserting data items from the array into the binary search tree.
- Step 3: Perform in-order traversal on the tree to get the elements in sorted order.

### Balanced Trees

In this section we mainly discuss about Balanced Trees. In the previous section we have discussed Binary Search Trees and are excelent data structure, but they only work if they are balanced---if moving from a tree to its left or right subtree reduces the size by a constant fraction. Balanced binary trees add some extra mechanism to the basic binary search tree to ensure balance. Finding efficient ways to balance a tree has been studied for decades, and several good mechanisms are known. We'll try to hit the high points of all of them. The problem is that as we insert new nodes, some paths through the tree may become very long. So we need to be able to shrink the long paths by moving nodes elsewhere in the tree. One solution to this problem is to adopt another search tree structure instead of using a BST at all. An example of such an alternative tree structure are B-trees and AVL Trees. We discuss them in the following sub-sections.

##### B-trees

This section presents the B-tree. B-trees are usually attributed to R. Bayer and E. McCreight who described the B-tree in a 1972 paper. By 1979, B-trees had replaced virtually all large-file access methods other than hashing. B-trees, or some variant of B-trees, are the standard file organization for applications requiring insertion, deletion, and key range searches. They are used to implement most modern file systems. B-trees address effectively all of the major problems encountered when implementing disk-based search trees:

1. B-trees are always height balanced, with all leaf nodes at the same level.
2. Update and search operations affect only a few disk blocks. The fewer the number of disk blocks affected, the less disk I/O is required.
3. B-trees keep related records (that is, records with similar key values) on the same disk block, which helps to minimize disk I/O on searches due to locality of reference.
4. B-trees guarantee that every node in the tree will be full at least to a certain minimum percentage. This improves space efficiency while reducing the typical number of disk fetches necessary during a search or update operation.

A B-tree of order m is defined to have the following shape properties:

- The root is either a leaf or has at least two children.
- Each internal node, except for the root, has between ⌈m/2⌉ and m children.
- All leaves are at the same level in the tree, so the tree is always height balanced.

The B-tree is a generalization of the 2-3 tree. Put another way, a 2-3 tree is a B-tree of order three. Normally, the size of a node in the B-tree is chosen to fill a disk block. A B-tree node implementation typically allows 100 or more children. Thus, a B-tree node is equivalent to a disk block, and a "pointer" value stored in the tree is actually the number of the block containing the child node (usually interpreted as an offset from the beginning of the corresponding disk file). In a typical application, the B-tree's access to the disk file will be managed using a buffer pool and a block-replacement scheme such as LRU.

##### AVL Trees

The AVL tree (named for its inventors Adelson-Velskii and Landis) should be viewed as a BST with the following additional property: For every node, the heights of its left and right subtrees differ by at most 1. As long as the tree maintains this property, if the tree contains n nodes, then it has a depth of at most O(log n). As a result, search for any node will cost O(logn), and if the updates can be done in time proportional to the depth of the node inserted or deleted, then updates will also cost O(log n), even in the worst case.

The key to making the AVL tree work is to alter the insert and delete routines so as to maintain the balance property. Of course, to be practical, we must be able to implement the revised update routines in Θ(log n) time.

##### Decision Trees

Decision tree is the most powerful and popular tool for classification and prediction. A Decision tree is a flowchart like tree structure, where each internal node denotes a test on an attribute, each branch represents an outcome of the test, and each leaf node (terminal node) holds a class label.

A tree can be “learned” by splitting the source set into subsets based on an attribute value test. This process is repeated on each derived subset in a recursive manner called recursive partitioning. The recursion is completed when the subset at a node all has the same value of the target variable, or when splitting no longer adds value to the predictions. The construction of decision tree classifier does not require any domain knowledge or parameter setting, and therefore is appropriate for exploratory knowledge discovery. Decision trees can handle high dimensional data. In general decision tree classifier has good accuracy. Decision tree induction is a typical inductive approach to learn knowledge on classification.


Definition
05:36
Exhaustive Search
06:27
Branch And Bound
08:26
Heuristics

Network Algorithm
Network Terminology
03:31
Network Classes
04:52
Depth-First Traversal
05:21
Breadth-First Traversal
02:43
Spanning Trees - Part 1
04:12
Spanning Trees - Part 2
03:58
Shortest Paths - Part 1
07:27
Shortest Paths - Part 2
08:41
All Pairs Shortest Path - Part 1
03:38
All Pairs Shortest Path - Part 2



_Please do let me know if I am missing any topic to cover in algorithm_
