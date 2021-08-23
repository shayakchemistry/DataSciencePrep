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

Linked list is a linear collection of data elements whose order is not given by their physical placement in memory. Instead, each element points to the next. It is a data structure consisting of a collection of nodes which together represent a sequence. In its most basic form, each node contains: data, and a reference (in other words, a link) to the next node in the sequence. This structure allows for efficient insertion or removal of elements from any position in the sequence during iteration. More complex variants add additional links, allowing more efficient insertion or removal of nodes at arbitrary positions. A drawback of linked lists is that access time is linear (and difficult to pipeline). Faster access, such as random access, is not feasible. Arrays have better cache locality compared to linked lists. Here we do discuss three types of linked list:

##### Singly Linked List

A singly linked list is represented by a pointer to the first node of the linked list. The first node is called the head. If the linked list is empty, then the value of the head is NULL.
Each node in a list consists of at least two parts:
1. Data
2. Pointer (Or Reference) to the next node

*Sorting of Linked List:*
As Linked List is a linear data structure, we can apply sorting techniques on it.

Singly Linked List is demonstrated in SingleLinkedList.cpp file.


##### Doubly Linked Lists

A Doubly Linked List (DLL) contains an extra pointer, typically called previous pointer, together with next pointer and data which are there in singly linked list. It can be traversed in both forward and backward direction. The delete operation in DLL is more efficient if pointer to the node to be deleted is given. We can quickly insert a new node before a given node. In singly linked list, to delete a node, pointer to the previous node is needed. To get this previous node, sometimes the list is traversed. In DLL, we can get the previous node using previous pointer. It only takes extra memory for an extra pointer and all operation requires previous pointers to be maintained. This is demonstrated in DoublyLinkedList.cpp file.

##### Circular Linked List

Circular Linked List is a variation of Linked list in which the first element points to the last element and the last element points to the first element. Both Singly Linked List and Doubly Linked List can be made into a circular linked list. This is demonstrated using Double Linked List in CircularLinkedList.cpp file.

### Stacks and Queues

##### Stacks

Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out). Mainly the following three basic operations are performed in the stack:

- Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
- Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
- Peek or Top: Returns top element of stack.
- isEmpty: Returns true if stack is empty, else false.

This is demonstrated in Stack.cpp file.

##### Queues

Queue is an abstract data structure, somewhat similar to Stacks. Unlike stacks, a queue is open at both its ends. One end is always used to insert data (enqueue) and the other is used to remove data (dequeue). Queue follows First-In-First-Out methodology, i.e., the data item stored first will be accessed first. A real-world example of queue can be a single-lane one-way road, where the vehicle enters first, exits first. More real-world examples can be seen as queues at the ticket windows and bus-stops. This is demonstrated in Queue.cpp file.

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

This is implemented in InsertionSort.cpp file.

##### Selection sort

The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. This sorting algorithm is an in-place comparison-based algorithm in which the list is divided into two parts, the sorted part at the left end and the unsorted part at the right end. Initially, the sorted part is empty and the unsorted part is the entire list. The smallest element is selected from the unsorted array and swapped with the leftmost element, and that element becomes a part of the sorted array. This process continues moving unsorted array boundary by one element to the right. The algorithm is given below:

- Step 1 − Set MIN to location 0
- Step 2 − Search the minimum element in the list
- Step 3 − Swap with value at location MIN
- Step 4 − Increment MIN to point to next element
- Step 5 − Repeat until list is sorted

This is implemented in SelectionSort.cpp file.

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

This is implemented in QuickSort.cpp file.

##### Heap sort

Heap is a data structure which is a complete binary tree. We derive a sorting out of this data structure. Heap sort is a comparison-based sorting technique based on Binary Heap data structure. It is similar to selection sort where we first find the minimum element and place the minimum element at the beginning. We repeat the same process for the remaining elements. Heap sort algorithm looks like:

- Step 1 - Build a max heap from the input data.
- Step 2 - At this point, the largest item is stored at the root of the heap. Replace it with the last item of the heap followed by reducing the size of heap by 1. Finally, heapify the root of the tree.
- Step 3 - Repeat step 2 while the size of the heap is greater than 1.

This is implemented in HeapSort.cpp file.

##### Merge sort

Merge sort is a sorting technique based on divide and conquer technique. Merge sort first divides the array into equal halves and then combines them in a sorted manner. The algorithm look like:

- Step 1 − if it is only one element in the list it is already sorted, return.
- Step 2 − divide the list recursively into two halves until it can no more be divided.
- Step 3 − merge the smaller lists into new list in sorted order.

This is implemented in MergeSort.cpp file.

##### Bubble sort

Bubble sort is a simple sorting algorithm. This sorting algorithm is comparison-based algorithm in which each pair of adjacent elements is compared and the elements are swapped if they are not in order. This is implemented in BubbleSort.cpp file.

##### Counting sort

Counting sort is a sorting technique based on keys between a specific range. It works by counting the number of objects having distinct key values (kind of hashing). Then doing some arithmetic to calculate the position of each object in the output sequence. This is implemented in CountingSort.cpp file.


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

This is implemented in LinearSearch.cpp file.

##### Binary Search

Binary search is a fast search algorithm with run-time complexity of Ο(log n). This search algorithm works on the principle of divide and conquer. For this algorithm to work properly, the data collection should be in the sorted form. Binary search looks for a particular item by comparing the middle most item of the collection. If a match occurs, then the index of item is returned. If the middle item is greater than the item, then the item is searched in the sub-array to the left of the middle item. Otherwise, the item is searched for in the sub-array to the right of the middle item. This process continues on the sub-array as well until the size of the subarray reduces to zero. This is implemented in BinarySearch.cpp file.

##### Interpolation Search

Interpolation search is an improved variant of binary search. This search algorithm works on the probing position of the required value. For this algorithm to work properly, the data collection should be in a sorted form and equally distributed. Binary search has a huge advantage of time complexity over linear search. Linear search has worst-case complexity of Ο(n) whereas binary search has Ο(log n). The algorithm looks like:

- Step 1 − Start searching data from middle of the list.
- Step 2 − If it is a match, return the index of the item, and exit.
- Step 3 − If it is not a match, probe position.
- Step 4 − Divide the list using probing formula and find the new midle.
- Step 5 − If data is greater than middle, search in higher sub-list.
- Step 6 − If data is smaller than middle, search in lower sub-list.
- Step 7 − Repeat until match.

This is implemented in InterpolationSearch.cpp file.

### Hash Tables

Hash Table is a data structure which stores data in an associative manner. In a hash table, data is stored in an array format, where each data value has its own unique index value. Access of data becomes very fast if we know the index of the desired data. Thus, it becomes a data structure in which insertion and search operations are very fast irrespective of the size of the data. Hash Table uses an array as a storage medium and uses hash technique to generate an index where an element is to be inserted or is to be located from. Hashing techniques are used to find one-to-one correspondence between a key and an index in a hash table. One of the most important issue that we face is collision. Collision happens when we try to insert two elements in the same index. To avoid collision, there are many important collision avoidance techniques of which some of them are given below:

##### Chaining

Chaining is a way to avoid collision. In the chaining approach, the hash table is an array of linked lists i.e., each index has its own linked list. All key-value pairs mapping to the same index will be stored in the linked list of that index. This is demonstrated in ChainingHashTable.cpp.

##### Open Addressing

Open addressing, or closed hashing, is a method of collision resolution in hash tables. With this method a hash collision is resolved by probing, or searching through alternative locations in the array (the probe sequence) until either the target record is found, or an unused array slot is found, which indicates that there is no such key in the table. Well-known probe sequences are discussed in the following subsections.

##### Open Addressing - Linear Probing

Linear probing is a scheme categorized under open addressing. When the hash function causes a collision by mapping a new key to a cell of the hash table that is already occupied by another key, linear probing searches the table for the closest following free location and inserts the new key there. Lookups are performed in the same way, by searching the table sequentially starting at the position given by the hash function, until finding a cell with a matching key or an empty cell. This method looks like:

- If slot hash(x) % S is full, then we try (hash(x) + 1) % S
- If (hash(x) + 1) % S is also full, then we try (hash(x) + 2) % S
- If (hash(x) + 2) % S is also full, then we try (hash(x) + 3) % S

This is demonstrated in LPHashTable.cpp

##### Open Addressing - Quadratic Probing

Quadratic probing is an open-addressing scheme where we look for i^2‘th slot in i’th iteration if the given hash value x collides in the hash table. It is done using the following method. Let hash(x) be the slot index computed using the hash function for an value x.

- If the slot hash(x) % S is full, then we try (hash(x) + 1*1) % S.
- If (hash(x) + 1*1) % S is also full, then we try (hash(x) + 2*2) % S.
- If (hash(x) + 2*2) % S is also full, then we try (hash(x) + 3*3) % S.
- This process is repeated for all the values of i until an empty slot is found.

This is demonstrated in QPHashTable.cpp

##### Open Addressing - Double Hashing

Double hashing is a collision resolving technique in Open Addressed Hash tables. Double hashing uses the idea of applying a second hash function to key when a collision occurs. This iterates for all i iterations until an empty slot is found. This is demonstrated in DHHashTable.cpp

### Recursion

In this section we focus on recursions. The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called as recursive function. Using recursive algorithm, certain problems can be solved quite easily. In the recursive program, the solution to the base case is provided and the solution of the bigger problem is expressed in terms of smaller problems. The idea is to represent a problem in terms of one or more smaller problems, and add one or more base conditions that stop the recursion. In the following subsections, we explore into ways to use recurrion strategy to solve some common problems.

##### Fibonacci Numbers

Fibonacci series is a series of numbers formed by the addition of the preceding two numbers in the series. The first two terms are zero and one respectively. The terms after this are generated by simply adding the previous two terms. Using this as a recursive method we do solve this problem. This is demonstrated in Fibonacci.cpp

##### Tower Of Hanoi

Tower of Hanoi is a mathematical puzzle which consist of 3 poles and number of discs of different sizes. Initially all the discs will be places in the single pole with the largest disc at the bottom and smallest on the top. We need to move all the disc from the first pole to the third pole with the smallest disc at the top and the largest at the bottom under the below conditions:

- Only one disc can be moved at a time
- Larger disc cannot be placed on a smaller disc

We can solve this problem using recursion. If we follow the pattern closely we can see the for n th disk we first move the previous disk to the intermediatory pole and the move the n th disk to the target pole. Using this pattern we can build an recursion as demonstrated in TowerOfHanoi.cpp

### Backtracking

Backtracking is an algorithmic-technique for solving problems recursively by trying to build a solution incrementally, one piece at a time, removing those solutions that fail to satisfy the constraints of the problem at any point of time (by time, here, is referred to the time elapsed till reaching any level of the search tree). We discuss some solution that are discussed in the following subsections.

##### The Eight Queens Problem

The eight queens puzzle is the problem of placing eight chess queens on an 8×8 chessboard so that no two queens threaten each other; thus, a solution requires that no two queens share the same row, column, or diagonal. The eight queens puzzle is an example of the more general n queens problem of placing n non-attacking queens on an n×n chessboard, for which solutions exist for all natural numbers n with the exception of n = 2 and n = 3. The eight queens puzzle has 92 distinct solutions. If solutions that differ only by the symmetry operations of rotation and reflection of the board are counted as one, the puzzle has 12 solutions. These are called fundamental solutions.

A fundamental solution usually has eight variants (including its original form) obtained by rotating 90, 180, or 270° and then reflecting each of the four rotational variants in a mirror in a fixed position. However, should a solution be equivalent to its own 90° rotation (as happens to one solution with five queens on a 5×5 board), that fundamental solution will have only two variants (itself and its reflection). Should a solution be equivalent to its own 180° rotation (but not to its 90° rotation), it will have four variants (itself and its reflection, its 90° rotation and the reflection of that). If n > 1, it is not possible for a solution to be equivalent to its own reflection because that would require two queens to be facing each other. Of the 12 fundamental solutions to the problem with eight queens on an 8×8 board, exactly one (solution 12 below) is equal to its own 180° rotation, and none is equal to its 90° rotation; thus, the number of distinct solutions is 11×8 + 1×4 = 92. This is demonstrated in nQueen.cpp program.

##### The Knights Tour

A knight's tour is a sequence of moves of a knight on a chessboard such that the knight visits every square exactly once. If the knight ends on a square that is one knight's move from the beginning square (so that it could tour the board again immediately, following the same path), the tour is closed; otherwise, it is open.

The knight's tour problem is the mathematical problem of finding a knight's tour. Creating a program to find a knight's tour is a common problem given to computer science students. Variations of the knight's tour problem involve chessboards of different sizes than the usual 8 × 8, as well as irregular (non-rectangular) boards. This is demonstrated in KnightTour.cpp program.

### Greedy Algorithm

Greedy algorithm is an algorithm is designed to achieve optimum solution for a given problem. In greedy algorithm approach, decisions are made from the given solution domain. As being greedy, the closest solution that seems to provide an optimum solution is chosen.  In many problems, a greedy strategy does not produce an optimal solution, but a greedy heuristic can yield locally optimal solutions that approximate a globally optimal solution in a reasonable amount of time. We try to solve the problem in the following way:

Assume that you have an objective function that needs to be optimized (either maximized or minimized) at a given point. A Greedy algorithm makes greedy choices at each step to ensure that the objective function is optimized. The Greedy algorithm has only one shot to compute the optimal solution so that it never goes back and reverses the decision. We have used greedy approach in algorithms like: Kruskal's and Prim's minimum spanning tree algorithm.

### Divide and Conquer

In divide and conquer approach, the problem in hand, is divided into smaller sub-problems and then each problem is solved independently. When we keep on dividing the subproblems into even smaller sub-problems, we may eventually reach a stage where no more division is possible. Those "atomic" smallest possible sub-problem (fractions) are solved. The solution of all sub-problems is finally merged in order to obtain the solution of an original problem.  You should think of a divide-and-conquer algorithm as having three parts:

- Divide the problem into a number of subproblems that are smaller instances of the same problem.
- Conquer the subproblems by solving them recursively. If they are small enough, solve the subproblems as base cases.
- Combine the solutions to the subproblems into the solution for the original problem.

You can easily remember the steps of a divide-and-conquer algorithm as divide, conquer, combine. We have illustrated it's usage in Quick sort and merge sort.

### Dynamic Programming

Dynamic programming is a fancy name for using divide-and-conquer technique with a table. As compared to divide-and-conquer, dynamic programming is more powerful and subtle design technique. It is not a specific algorithm, but it is a meta-technique (like divide-and-conquer). This technique was developed back in the days when "programming" meant "tabular method" (like linear programming). It does not really refer to computer programming. Dynamic programming is a stage-wise search method suitable for optimization problems whose solutions may be viewed as the result of a sequence of decisions. The most attractive property of this strategy is that during the search for a solution it avoids full enumeration by pruning early partial decision solutions that cannot possibly lead to optimal solution. In many practical situations, this strategy hits the optimal solution in a polynomial number of decision steps. However, in the worst case, such a strategy may end up performing full enumeration.

Dynamic programming takes advantage of the duplication and arrange to solve each subproblem only once, saving the solution (in table or in a globally accessible place) for later use. The underlying idea of dynamic programming  is: avoid calculating the same stuff twice, usually by keeping a table of known results of subproblems. Unlike divide-and-conquer, which solves the subproblems top-down, a dynamic programming is a bottom-up technique. The dynamic programming technique is related to divide-and-conquer, in the sense that it breaks problem down into smaller problems and it solves recursively. However, because of the somewhat different nature of dynamic programming problems, standard divide-and-conquer solutions are not usually efficient.

The dynamic programming is among the most powerful for designing algorithms for optimization problem. This is true for two reasons. Firstly, dynamic programming solutions are based on few common elements. Secondly, dynamic programming problems are typical optimization problems i.e., find the minimum or maximum cost solution, subject to various constraints.

In other words, this technique used for optimization problems:

- Find a solution to the problem with the optimal value.
- Then perform minimization or maximization. 


### Tree Algorithms

A tree is non-linear and a hierarchical data structure consisting of a collection of nodes such that each node of the tree stores a value, a list of references to nodes (the “children”). A tree consists of a root, and zero or more subtrees T1, T2, ...., Tk such that there is an edge from the root of the tree to the root of each subtree. Some terminologies that are used in the context of trees is described below:

*Parent Node :* The node which is a predecessor of a node is called the parent node of that node.

*Child Node :* The node which is the immediate successor of a node is called the child node of that node.

*Root Node :* The topmost node of a tree or the node which does not have any parent node is called the root node. A non-empty tree must contain exactly one root node and exactly one path from the root to all other nodes of the tree.

*Degree of a Node :* The total count of subtrees attached to that node is called the degree of the node. The degree of a leaf node must be 0. The degree of a tree is the degree of its root.

*Leaf Node or External Node :* The nodes which do not have any child nodes are called leaf nodes.

*Ancestor of a Node :* Any predecessor nodes on the path of the root to that node are called Ancestors of that node.

*Descendant :* Any successor node on the path from the leaf node to that node.

*Sibling :* Children of the same parent node are called siblings.

*Depth of a node :* The count of edges from the root to the node.

*Height of a Tree :* The height of a tree is the height of the root node i.e the count of edges from the root to the deepest node.

*Level of a node :* The count of edges on the path from the root node to that node. The root node has level 0.

*Internal node :* A node with at least one child is called Internal Node.

*Neighbor of a Node :* Parent or child nodes of that node are called neighbors of that node.

The next thing we discuss is a special type of tree known as Binary tree. Binary Tree is a special data structure used for data storage purposes. A binary tree has a special condition that each node can have a maximum of two children. A binary tree has the benefits of both an ordered array and a linked list as search is as quick as in a sorted array and insertion or deletion operation are as fast as in linked list. Binary tree is demonstrated in BinaryTree.cpp file. There are some binary tree operations that are discussed below:

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

In this section we mainly discuss about Balanced Trees. In the previous section we have discussed Binary (Search) Trees and are excelent data structure, but they only work if they are balanced ie. . Balanced binary trees add some extra mechanism to the basic binary search tree to ensure balance. Finding efficient ways to balance a tree has been studied for decades, and several good mechanisms are known. We'll try to hit the high points of all of them. The problem is that as we insert new nodes, some paths through the tree may become very long. So we need to be able to shrink the long paths by moving nodes elsewhere in the tree. One solution to this problem is to adopt another search tree structure instead of using a BST at all. An example of such an alternative tree structure are Red-Back tree, AVL Trees and B-trees. We discuss them in the following sub-sections.

##### Red Black Trees

A red-black tree T is a binary search tree having following five additional properties (invariants).

- Every node in T is either red or black.
- The root node of T is black.
- Every NULL node is black. (NULL nodes are the leaf nodes. They do not contain any keys. When we search for a key that is not present in the tree, we reach the NULL node.)
- If a node is red, both of its children are black. This means no two nodes on a path can be red nodes
- Every path from a root node to a NULL node has the same number of black nodes

Failure to preserve any of the above five properties makes T a non-red-black tree. All operations except insertion and deletion are same as of Binary Search Tree. This is extensively demonstrated in RedBlackTree.cpp

##### AVL Trees

AVL trees are height balanced binary search trees. This means the height of the AVL tree is in the order of log(n). AVL tree keeps the height balanced using the following property:

The heights of the left and right subtrees differ by at most 1. If hl be the height of the left subtree and hr be the height of the right subtree, then,

|hl−hr| ≤ 1

Every node should follow the above property and the resulting tree is the AVL tree. If any of the node violates this property, the tree should be re-balanced to maintain the property.  AVL property guarantees the height of the tree to be in the order of log(n). In AVL Trees we do use the concept of balance factor. In a binary tree the balanced factor (BF) of the node x is the height (h) difference between left (LS) and right subtree (RS) of x. In an AVL tree, the balance factor must be -1, 0, or 1. If the balance factor of a node is greater than 1 (right heavy) or less than -1 (left heavy), the node needs to be rebalanced. This is extensively demonstrated in AVLTree.cpp.

##### B-trees

B Tree is a tree where a node in these balanced search trees have more than 1 keys.  In B-tree, a node can have n keys where n is the positive integer ≥2. A node with n keys have n+1 child nodes. A typical B-tree node x has following information.

- The number of keys x.n
- The array of keys [x.key1,x.key2,…,x.keyx.n] . These keys are sorted in ascending order i.e. x.key1 ≤ x.key2 ≤ ... ≤ x.keyx.n
- The array of pointers to the x.n+1 child nodes [x.c1, x.c2, ..... , x.cx.n+1]. If x is a leaf node, this array is empty as leaf nodes do not have children.
- An identifier x.leaf that gives if x is a leaf node.

Besides the regular search tree invariants, B-tree has following additional invariants.

- All the leaf nodes must be on the same level (perfect balance).
- All the nodes except the root node must have at t−1 keys where t is called minimum order. If t=3, all the nodes except root nodes must have at least 2 keys. The value of t should be at least 2.
- All the nodes can have at most 2t−1 keys.
- A node with n keys must have n+1 child nodes.
- If a root node is a non-leaf node, it must have at least 2 child nodes.

Since it is a perfectly balanced search tree, all the operations run in O(logn) time. The base of the logarithm is higher than 2. The in-order traversal of the B-tree should yield keys in sorted order. For this, keys in a subtree ci must be between ki−1 and ki inclusive. The operations on B Trees are different from binary trees and is demonstrated in BTrees.cpp.

### Graph Algorithms

A graph is a pictorial representation of a set of objects where some pairs of objects are connected by links. The interconnected objects are represented by points termed as vertices, and the links that connect the vertices are called edges. Formally, a graph is a pair of sets (V, E), where V is the set of vertices and E is the set of edges, connecting the pairs of vertices. Trees discussed in previous section are graphs that do not contain even a single cycle.

Mathematical graphs can be represented in data structure. We can represent a graph using an array of vertices and a two-dimensional array of edges. Before we proceed further, let's familiarize ourselves with some important terms:

*Vertex*
Each node of the graph is represented as a vertex.

*Edge*
Edge represents a path between two vertices or a line between two vertices.

*Adjacency*
Two node or vertices are adjacent if they are connected to each other through an edge.

*Path*
Path represents a sequence of edges between the two vertices.

There are various types of graphs depending upon the number of vertices, number of edges, interconnectivity, and their overall structure. Some of the important ones are listed below:

- Null Graph: A graph having no edges is called a Null Graph.
- Trivial Graph: A graph with only one vertex is called a Trivial Graph.
- Non-Directed Graph: A non-directed graph contains edges but the edges are not directed ones.
- Directed Graph: In a directed graph, each edge has a direction.
- Simple Graph: A graph with no loops and no parallel edges is called a simple graph.
- Connected Graph: A graph G is said to be connected if there exists a path between every pair of vertices. There should be at least one edge for every vertex in the graph. So that we can say that it is connected to some other vertex at the other side of the edge.
- Disconnected Graph: A graph G is disconnected, if it does not contain at least two connected vertices.
- Regular Graph: A graph G is said to be regular, if all its vertices have the same degree. In a graph, if the degree of each vertex is ‘k’, then the graph is called a ‘k-regular graph’.
- Complete Graph: A simple graph with ‘n’ mutual vertices is called a complete graph and it is denoted by ‘Kn’. In the graph, a vertex should have edges with all other vertices, then it called a complete graph. In other words, if a vertex is connected to all other vertices in a graph, then it is called a complete graph.
- Cycle Graph: A simple graph with ‘n’ vertices (n >= 3) and ‘n’ edges is called a cycle graph if all its edges form a cycle of length ‘n’. If the degree of each vertex in the graph is two, then it is called a Cycle Graph.
- Wheel Graph: A wheel graph is obtained from a cycle graph Cn-1 by adding a new vertex. That new vertex is called a Hub which is connected to all the vertices of Cn.
- Cyclic Graph: A graph with at least one cycle is called a cyclic graph.
- Acyclic Graph: A graph with no cycles is called an acyclic graph.
- Bipartite Graph: A simple graph G = (V, E) with vertex partition V = {V1, V2} is called a bipartite graph if every edge of E joins a vertex in V1 to a vertex in V2. In general, a Bipertite graph has two sets of vertices, let us say, V1 and V2, and if an edge is drawn, it should connect any vertex in set V1 to any vertex in set V2.
- Complete Bipartite Graph: A bipartite graph ‘G’, G = (V, E) with partition V = {V1, V2} is said to be a complete bipartite graph if every vertex in V1 is connected to every vertex of V2. In general, a complete bipartite graph connects each vertex from set V1 to each vertex from set V2.

In the next subsections, we do discuss more on graph traversals and finding shortest path.

##### Depth-First Traversal

Depth First Search (DFS) algorithm traverses a graph in a depthward motion and uses a stack to remember to get the next vertex to start a search, when a dead end occurs in any iteration.  It employs the following rules.

- Rule 1 − Visit the adjacent unvisited vertex. Mark it as visited. Display it. Push it in a stack.
- Rule 2 − If no adjacent vertex is found, pop up a vertex from the stack. (It will pop up all the vertices from the stack, which do not have adjacent vertices.)
- Rule 3 − Repeat Rule 1 and Rule 2 until the stack is empty.

This is demonstrated in DFS.cpp program.

##### Breadth-First Traversal

Breadth First Search (BFS) algorithm traverses a graph in a breadthward motion and uses a queue to remember to get the next vertex to start a search, when a dead end occurs in any iteration. It employs the following rules.

- Rule 1 − Visit the adjacent unvisited vertex. Mark it as visited. Display it. Insert it in a queue.
- Rule 2 − If no adjacent vertex is found, remove the first vertex from the queue.
- Rule 3 − Repeat Rule 1 and Rule 2 until the queue is empty.

This is demonstrated in BFS.cpp program.

##### Spanning Trees

A spanning tree is an undirected and connected graph. A spanning tree of the graph G = (V, E) is a tree that spans G (that is, it includes every vertex of G) and is a subgraph G of (every edge in the tree belongs to G). The cost of the spanning tree is the sum of the weights of all the edges in the tree. There can be many spanning trees. Minimum spanning tree is the spanning tree where the cost is minimum among all the spanning trees. There also can be many minimum spanning trees. There are two famous algorithms for finding the Minimum Spanning Tree:

*Kruskal’s Algorithm*

Kruskal’s Algorithm builds the spanning tree by adding edges one by one into a growing spanning tree. Kruskal's algorithm follows greedy approach as in each iteration it finds an edge which has least weight and add it to the growing spanning tree. The algorithm steps are given below:

- Sort the graph edges with respect to their weights.
- Start adding edges to the MST from the edge with the smallest weight until the edge of the largest weight.
- Only add edges which doesn't form a cycle , edges which connect only disconnected components.

So now the question is how to check if 2 vertices are connected or not ? This could be done using DFS which starts from the first vertex, then check if the second vertex is visited or not. But DFS will make time complexity large as it has an order of O(V + E) where V is the number of vertices, E is the number of edges. So the best solution is "Disjoint Sets". Disjoint sets are sets whose intersection is the empty set so it means that they don't have any element in common. This is demonstrated in Kruskal.cpp program.

*Prim’s Algorithm*

Prim’s Algorithm also use Greedy approach to find the minimum spanning tree. In Prim’s Algorithm we grow the spanning tree from a starting position. Unlike an edge in Kruskal's, we add vertex to the growing spanning tree in Prim's. The algorithm steps are given below:

- Maintain two disjoint sets of vertices. One containing vertices that are in the growing spanning tree and other that are not in the growing spanning tree.
- Select the cheapest vertex that is connected to the growing spanning tree and is not in the growing spanning tree and add it into the growing spanning tree. This can be done using Priority Queues. Insert the vertices, that are connected to growing spanning tree, into the Priority Queue.
- Check for cycles. To do that, mark the nodes which have been already selected and insert only those nodes in the Priority Queue that are not marked.

In Prim’s Algorithm, we will start with an arbitrary node (it doesn’t matter which one) and mark it. In each iteration we will mark a new vertex that is adjacent to the one that we have already marked. As a greedy algorithm, Prim’s algorithm will select the cheapest edge and mark the vertex. This is demonstrated in Prim.cpp program.

##### Shortest Paths

The shortest path problem is about finding a path between two vertices in a graph such that the total sum of the edges weights is minimum. This problem could be solved easily using (BFS) if all edge weights were (1), but here weights can take any value. Three different algorithms are discussed below depending on the use-case.

*Bellman Ford's Algorithm*

Bellman Ford's algorithm is used to find the shortest paths from the source vertex to all other vertices in a weighted graph. It depends on the following concept: Shortest path contains at most n - 1 edges, because the shortest path couldn't have a cycle. So why shortest path shouldn't have a cycle ? There is no need to pass a vertex again, because the shortest path to all other vertices could be found without the need for a second visit for any vertices. The algorithm steps are listed below:

- The outer loop traverses from 0 : n-1.
- Loop over all edges, check if the next node distance > current node distance + edge weight, in this case update the next node distance to "current node distance + edge weight".

This algorithm depends on the relaxation principle where the shortest distance for all vertices is gradually replaced by more accurate values until eventually reaching the optimum solution. In the beginning all vertices have a distance of "Infinity", but only the distance of the source vertex = 0, then update all the connected vertices with the new distances (source vertex distance + edge weights), then apply the same concept for the new vertices with new distances and so on. This is demonstrated in BellmanFord.cpp program.

*Dijkstra's Algorithm*

Dijkstra's algorithm has many variants but the most common one is to find the shortest paths from the source vertex to all other vertices in the graph. The algorithm steps are listed below:

- Set all vertices distances = infinity except for the source vertex, set the source distance = 0.
- Push the source vertex in a min-priority queue in the form (distance , vertex), as the comparison in the min-priority queue will be according to vertices distances.
- Pop the vertex with the minimum distance from the priority queue (at first the popped vertex = source).
- Update the distances of the connected vertices to the popped vertex in case of "current vertex distance + edge weight < next vertex distance", then push the vertex with the new distance to the priority queue.
- If the popped vertex is visited before, just continue without using it.
- Apply the same algorithm again until the priority queue is empty.

This is demonstrated in Dijkstra.cpp program.

*Floyd-Warshall's Algorithm*

Floyd-Warshall's Algorithm is used to find the shortest paths between between all pairs of vertices in a graph, where each edge in the graph has a weight which is positive or negative. The biggest advantage of using this algorithm is that all the shortest distances between any two vertices could be calculated in O(V^3), where V is the number of vertices in a graph. The algorithm steps are listed below:

For a graph with N vertices:

- Initialize the shortest paths between any two vertices with Infinity.
- Find all pair shortest paths that use 0 intermediate vertices, then find the shortest paths that use 1 intermediate vertex and so on.. until using all N vertices as intermediate nodes.
- Minimize the shortest paths between any two pairs in the previous operation.
- For any two vertices (i, j), one should actually minimize the distances between this pair using the first K nodes, so the shortest path will be: min(dist[i][k] + dist[k][j], dist[i][j])

dist[i][k] represents the shortest path that only uses the first K vertices, dist[k][j] represents the shortest path between the pair k, j . As the shortest path will be a concatenation of the shortest path from i to k, then from k to j. This is demonstrated in FloydWarshall.cpp program.

_Please do let me know if I am missing any topic to cover in algorithm_
