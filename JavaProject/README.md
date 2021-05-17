## Java Project

In this module we will explore the advanced concepts of java. We will not get into the web application (spring and similar stuff) but mostly be involved with core java tools and concepts. We are going to focus on the following topics:

- Collection Framework
- OOPS concept
- String
- Threading (multi threading and thread pooling)
- Process and Future
- Stream
- Supplier, Consumer, Lambdas

### Collection Framework
##### Definition
A collection is an object that represents a group of objects. A collections framework is a unified architecture for representing and manipulating collections, enabling collections to be manipulated independently of implementation details.

The collection interfaces are divided into two groups:
1. Implementation from  interface: java.util.Collection (mostly simple collections)
2. Implementation from  interface java.util.Map and are not true collections

The collection implementation can be put as in the following table:
 
 | Interface | Hash Table | Resizable Array | Balanced Tree | Linked List | Hash Table + Linked List |
 |:----------|:----------:|:---------------:|:-------------:|:------------:|------------------------:|
 |     Set   |    HashSet |                 |      TreeSet  |              |       LinkedHashSet     |
 |     List  |            |     ArrayList   |               |   LinkedList |                         |
 |     Deque |            |     ArrayDeque  |               |   LinkedList |                         |
 |     Map   |    HashMap |                 |      TreeMap  |              |       LinkedHashMap     |

Collections are by default unsynchronized, but the Collections class contains static factories called synchronization wrappers that can be used to add synchronization to many unsynchronized collections. All the new implementations have fail-fast iterators, which detect invalid concurrent modification, and fail quickly and cleanly (rather than behaving erratically).

Before we get started into the actual classes let's define a few terminologies:

##### Fail-Fast vs Fail-safe

*Fail Fast:*
Changes in the collection, such as adding, removing and updating collection during a thread are iterating collection throws concurrent modification exception. It works on the actual collection so no additional memory is not required and doesn't allow modification while iterating a collection.

*Fail Safe:*
Changes to the collection doesn't throw any exception. It works on a clone of the collection, so it has memory and cpu overhead. Fail safe collection allows modification while iterating.

##### Collection vs Collections

*Collection:*
Collection is an interface present in java.util.package. It is used to represent a group of individual objects as a single unit.The collection is considered as the root interface of the collection framework. It provides several classes and interfaces to represent a group of individual objects as a single unit.

*Collections:*
Collections is a utility class present in java.util.package. It defines several utility methods like sorting and searching which is used to operate on collection. It has all static methods. These methods provide much-needed convenience to developers, allowing them to effectively work with Collection Framework.

##### Lists

List in Java provides the facility to maintain an ordered collection. It contains the index-based methods to insert, update, delete and search the elements. It allows duplicate and null elements. The List interface is found in the java.util package and inherits the Collection interface. It is a factory of ListIterator interface. Through the ListIterator, we can iterate the list in forward and backward directions. It has the following implementations:
- ArrayList
- LinkedList
- Vectors (Deprecated and not be discussed)
- Stack 

All the List in action is demonstrated in ListExample java class.

*ArrayList:*
The ArrayList class is a resizable array and is found in java.util package. The difference between a built-in array and an ArrayList in Java, is the array size modification ability (cannot be modified in built-in array and can be done in ArrayList). While elements can be added and removed from an ArrayList whenever you want. The ArrayList class has a regular array inside it. When an element is added, it is placed into the array. If the array is not big enough, a new, larger array is created to replace the old one and the old one is removed.

*LinkedList:*
The LinkedList class is almost identical to the ArrayList. The LinkedList stores its items in "containers." The list has a link to the first container and each container has a link to the next container in the list. To add an element to the list, the element is placed into a new container and that container is linked to one of the other containers in the list. 

*Stack:*
The stack is a linear data structure that is used to store the collection of objects. It is based on Last-In-First-Out (LIFO). The Stack class that provides different operations in contrary to other list class such as push, pop, search, etc.

##### Sets

The set interface present in the java.util package and extends the Collection interface is an unordered collection of objects in which duplicate values cannot be stored. It is an interface which implements the mathematical set. This interface contains the methods inherited from the Collection interface and adds a feature which restricts the insertion of the duplicate elements. There are two interfaces which extend the set implementation namely SortedSet and NavigableSet. It has the following class implementation:
- HashSet
- LinkedHashSet
- SortedSet
- NavigableSet
- TreeSet

All the Set in action is demonstrated in SetExample java class.

*HashSet:*
Java HashSet class is used to create a collection that uses a hash table for storage. It inherits the AbstractSet class and implements Set interface. HashSet stores the elements by using a mechanism called hashing and contains unique elements only. It allows null value and is non synchronized. HashSet doesn't maintain the insertion order. Here, elements are inserted on the basis of their hashcode. The initial default capacity of HashSet is 16, and the load factor is 0.75.

*LinkedHashSet:*
The LinkedHashSet is an ordered version of HashSet that maintains a doubly-linked List across all elements. When the iteration order is needed to be maintained this class is used. When iterating through a HashSet the order is unpredictable, while a LinkedHashSet lets us iterate through the elements in the order in which they were inserted. When cycling through LinkedHashSet using an iterator, the elements will be returned in the order in which they were inserted.

*SortedSet:*
The SortedSet interface extends Set and declares the behavior of a set sorted in an ascending order. In addition to those methods defined by Set, the SortedSet interface declares the methods summarized in the following table −

Several methods throw a NoSuchElementException when no items are contained in the invoking set. A ClassCastException is thrown when an object is incompatible with the elements in a set.

A NullPointerException is thrown if an attempt is made to use a null object and null is not allowed in the set.

*NavigableSet*
NavigableSet represents a navigable set in Java Collection Framework. The NavigableSet interface inherits from the SortedSet interface. It behaves like a SortedSet with the exception that we have navigation methods available in addition to the sorting mechanisms of the SortedSet.
For example, the NavigableSet interface can navigate the set in reverse order compared to the order defined in SortedSet. A NavigableSet may be accessed and traversed in either ascending or descending order.

*TreeSet*
ava TreeSet class implements the Set interface that uses a tree for storage. It inherits AbstractSet class and implements the NavigableSet interface. The objects of the TreeSet class are stored in ascending order.

The important points about Java TreeSet class are:

    Java TreeSet class contains unique elements only like HashSet.
    Java TreeSet class access and retrieval times are quiet fast.
    Java TreeSet class doesn't allow null element.
    Java TreeSet class is non synchronized.
    Java TreeSet class maintains ascending order.

*Comaparable*
*Comparator*

##### Queues
The queue interface is provided in java.util package and it implements the Collection interface. The queue implements FIFO i.e. First In First Out. This means that the elements entered first are the ones that are deleted first.

*PriorityQueue:*
PriorityQueue is used when the objects are supposed to be processed based on the priority. It is known that a Queue follows the First-In-First-Out algorithm, but sometimes the elements of the queue are needed to be processed according to the priority, that’s when the PriorityQueue comes into play. The PriorityQueue is based on the priority heap. The elements of the priority queue are ordered according to the natural ordering, or by a Comparator provided at queue construction time, depending on which constructor is used.  

Queue Interface
04:20
PriorityQueue
06:48
Summary

##### Maps

The Map interface present in java.util package represents a mapping between a key and a value. The Map interface is not a subtype of the Collection interface. Therefore it behaves a bit differently from the rest of the collection types. A map contains unique keys.

*Hashing in collection*
, a technique used (among other applications) to implement Java's common map and set classes. Hashing is designed to solve the problem of needing to efficiently find or store an item in a collection. For example, if we have a list of 10,000 words of English and we want to check if a given word is in the list, it would be inefficient to successively compare the word with all 10,000 items until we find a match. Hashing is a technique to make things more efficient by effectively narrowing down the search at the outset.

On the previous page, we introduced the notion of hashing, mapping a piece of data such as a string to some kind of a representative integer value. We can then create a map by using this hash as an index into an array of key/value pairs. Such a structure is generally called a hash table or, particularly in Java parlance, hash map1. We saw that using the string length to create the hash, and indexing a simple array, could work in some restricted cases, but is no good generally: for example, we have the problem of collisions (several keys with the same length) and wasted space if a few keys are vastly larger than the majority.
Now, we can solve the problem of collisions by having an array of (references to) linked lists2 rather than simply an array of keys/values. Each little list is generally called a bucket.

Then, we can solve the problem of having an array that is too large simply by taking the hash code modulo a certain array size3. So for example, if the array were 32 positions in size, going from 0-31, then rather than storing a key/value pair in the list at position 33, we store it at position (33 mod 32) = 1. (In simple terms, we "wrap round" when we reach the end of the array.) So we end up with a structure something like this:

https://www.javamex.com/tutorials/collections/hashmaps2.shtml

*HashMap*

*HashMap vs HashTable*

*LinkedHashMap*
*IdentityHashMap*
*WeakHashMap*
*SortedMap*
*NavigableMap*
*TreeMap*

##### Concurrent Collections
Section introduction
00:49
Need of Concurrent Collections
04:54
ConcurrentModificationException
07:23
How Concurrent Collection Solved the problems
01:03
ConcurrentHashMap Hierarchy and Methods
10:39
ConcurrentHashMap internal Implementation
03:30
ConcurrentHashMap in Multi-threading Environment Program Demo
08:30
CopyOnWriteArrayList
07:36
CopyOnWriteArraySet

### OOPS concept

_Please do let me know if I am missing any topic to cover in java_
