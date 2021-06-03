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
The LinkedHashSet is an ordered version of HashSet that maintains a doubly-linked List across all elements. When the iteration order is needed to be maintained this class is used. When iterating through a HashSet the order is unpredictable, while a LinkedHashSet lets us iterate through the elements in the order in which they were inserted. When cycling through LinkedHashSet using an iterator, the elements will be returned to the order in which they were inserted.

*SortedSet:*
The SortedSet interface extends Set and declares the behavior of a set sorted in ascending order. In addition to those methods defined by Set, the SortedSet interface declares the extra methods with certain restrictions.Several methods in SortedSet throw a NoSuchElementException when no items are contained in the invoking set. A ClassCastException is thrown when an object is incompatible with the elements in a set. A NullPointerException is thrown if an attempt is made to use a null object and null is not allowed in the set.

*NavigableSet:*
NavigableSet represents a navigable set in Java Collection Framework. The NavigableSet interface inherits from the SortedSet interface. It behaves like a SortedSet with the exception that we have navigation methods available in addition to the sorting mechanisms of the SortedSet. For example, the NavigableSet interface can navigate the set in reverse order compared to the order defined in SortedSet. A NavigableSet may be accessed and traversed in either ascending or descending order.

*TreeSet:*
TreeSet class implements the Set interface that uses a tree for storage. It inherits AbstractSet class and implements the NavigableSet interface. The objects of the TreeSet class are stored in ascending order. Java TreeSet class contains unique elements only like HashSet. It's access and retrieval times are quiet fast. TreeSet class doesn't allow null element and is non synchronized. TreeSet class maintains ascending order.

*Comaparable:*
Comparable interface is used to order the objects of the user-defined class. This interface is found in java.lang package and contains only one method named compareTo(Object). It provides a single sorting sequence only, i.e., you can sort the elements on the basis of single data member only.

*Comparator:*
Comparator interface is found in java.util package and contains 2 methods compare(Object obj1,Object obj2) and equals(Object element). It provides multiple sorting sequences. Comparator is external to the element type we are comparing. It’s a separate class. We create multiple separate classes (that implement Comparator) to compare by different members.

##### Queues
The queue interface implements the Collection interface. The queue implements FIFO i.e. First In First Out. This means that the elements entered first are the ones that are deleted first. Here we only discuss one type of queue i.e. PriorityQueue. Queue examples are demonstrated bt QueueExample class.

*PriorityQueue:*
PriorityQueue is used when the objects are supposed to be processed based on the priority. It is known that a Queue follows the First-In-First-Out algorithm, but sometimes the elements of the queue are needed to be processed according to the priority, that’s when the PriorityQueue comes into play. The PriorityQueue is based on the priority heap. The elements of the priority queue are ordered according to the natural ordering, or by a Comparator provided at queue construction time, depending on which constructor is used.  

##### Maps

The Map interface present in java.util package represents a mapping between a key and a value. The Map interface is not a subtype of the Collection interface. Therefore, it behaves a bit differently from the rest of the collection types. In a map, the keys are always unique. Maps has the following implementations.
- HashMap
- LinkedHashMap
- IdentityHashMap
- WeakHashMap
- SortedMap
- NavigableMap
- TreeMap

Maps example is demonstrated in MapExample class.

*HashMap:*
HashMap provides the basic implementation of the Map interface of Java. It stores the data in (Key, Value) pairs, and you can access them by an index of another type (e.g. an Integer). One object is used as a key (index) to another object (value). If you try to insert the duplicate key, it will replace the element of the corresponding key. Hash map is not synchronized.ssss

*HashMap vs HashTable:*
HashMap is non synchronized. It is not-thread safe and can't be shared between many threads without proper synchronization code. HashMap allows one null key and multiple null values. HashMap is traversed by Iterator. Iterator in HashMap is fail-fast.

Hashtable is synchronized. It is thread-safe and can be shared with many threads. Hashtable doesn't allow any null key or value. Hashtable is traversed by Enumerator and Iterator. Enumerator in Hashtable is not fail-fast.

*LinkedHashMap:*
LinkedHashMap is just like HashMap with an additional feature of maintaining an order of elements inserted into it. HashMap provided the advantage of quick insertion, search, and deletion, but it never maintained the track and order of insertion which the LinkedHashMap provides where the elements can be accessed in their insertion order.

*IdentityHashMap:*
The IdentityHashMap implements Map interface using Hashtable, using reference-equality in place of object-equality when comparing keys (and values). This class is not a general-purpose Map implementation. While this class implements the Map interface, it intentionally violates Map’s general contract, which mandates the use of the equals() method when comparing objects. This class is used when the user requires the objects to be compared via reference.

*WeakHashMap:*
WeakHashMap is an implementation of the Map interface that stores only weak references to its keys. Storing only weak references allows a key-value pair to be garbage-collected when its key is no longer referenced outside WeakHashMap.

*SortedMap:*
SortedMap is an interface in the collection framework. This interface extends the Map interface and provides a total ordering of its elements (elements can be traversed in sorted order of keys).

*NavigableMap:*
It is an extension of SortedMap which provides convenient navigation methods like lowerKey, floorKey, ceilingKey and higherKey, and along with this popular navigation method. It also provide ways to create a Sub Map from existing Map in Java e.g. headMap whose keys are less than the specified key, tailMap whose keys are greater than the specified key, and a subMap which strictly contains keys which fall between toKey and fromKey.

*TreeMap:*
The TreeMap class implements the Map interface by using a tree. A TreeMap provides an efficient means of storing key/value pairs in sorted order, and allows rapid retrieval. You should note that, unlike a hash map, a tree map guarantees that its elements will be sorted in an ascending key order.

##### Concurrent Collections

*Why do we need concurrent collections?*

As we already know Collections which is nothing but collections of Objects which deals with the Objects using some pre-defined methods. With Collections there are several problems which occurs in multi-threading. The problems which occurs while using Collections in Multi-threaded application. Most of the Collections classes objects (like ArrayList, LinkedList, HashMap etc) are non-synchronized in nature i.e. multiple threads can perform on an object at a time simultaneously. Therefore, objects are not thread-safe. Very few Classes objects (like Vector, Stack, HashTable) are synchronized in nature i.e. at a time only one thread can perform on an Object. The catch here is the performance which is low because at a time single thread execute an object and rest thread has to wait. The main problem is when one thread is iterating a Collections object then if another thread can't modify the content of the object. If another thread try to modify the content of object then we will get RuntimeException saying ConcurrentModificationException. Because of the above reason Collections classes is not suitable for we can say that good choice for Multi-threaded applications. To overcome the above problem SUN microSystem introduced a new feature in JDK 1.5Version, which is nothing but Concurrent Collections.

*ConcurrentModificationException:*
The ConcurrentModificationException occurs when an object is tried to be modified concurrently when it is not permissible. This exception usually comes when one is working with Java Collection classes.

*How Concurrent Collection Solved the problems?*
Concurrent Collection does not lock the entire collection, it does lock only one element at a time. In other words, each element has a separate lock. Multiple threads can access a concurrent collection concurrently. Multiple threads can access the collection at a time. In this section, we will discuss on:
- ConcurrentHashMap 
- CopyOnWriteArrayList 
- CopyOnWriteArraySet

Concurrent Collection Example are demonstrated in ConcurrentCollectionExample class.

*ConcurrentHashMap:*
ConcurrentHashMap implements ConcurrentMap as well as to Serializable interface also. ConcurrentHashMap is an enhancement of HashMap as we know that while dealing with Threads in our application HashMap is not a good choice because performance-wise HashMap is not up to the mark. At a time any number of threads are applicable for a read operation without locking the ConcurrentHashMap object which is not there in HashMap. In ConcurrentHashMap, at a time any number of threads can perform retrieval operation but for updated in the object, the thread must lock the particular segment in which the thread wants to operate. This type of locking mechanism is known as Segment locking or bucket locking. At a time 16 update operations can be performed by threads by default. 

*CopyOnWriteArrayList*
It is an enhanced version of ArrayList in which all modifications (add, set, remove, etc) are implemented by making a fresh copy. It is found in java.util.concurrent package. It is a data structure created to be used in a concurrent environment. As the name indicates, CopyOnWriteArrayList creates a Cloned copy of underlying ArrayList, for every update operation at a certain point both will be synchronized automatically, which is taken care of by JVM. Therefore, there is no effect for threads that are performing read operation. The main important point about CopyOnWriteArrayList is the Iterator of CopyOnWriteArrayList can not perform remove operation otherwise we get Run-time exception saying UnsupportedOperationException. add() and set() methods on CopyOnWriteArrayList iterator also throws UnsupportedOperationException. Also, Iterator of CopyOnWriteArrayList will never throw ConcurrentModificationException.

*CopyOnWriteArraySet*
It is a Set that uses an internal CopyOnWriteArrayList for all of its operations. It is a thread-safe version of Set. To use this class, we need to import it from java.util.concurrent package. Multiple Threads are able to perform update operation simultaneously but for every update operation, a separate cloned copy is created. As, for every update a new cloned copy will be created which is costly. Hence, if multiple update operations are required then it is not recommended to use CopyOnWriteArraySet. Use CopyOnWriteArraySet in applications in which set sizes generally stay small, read-only operations vastly outnumber mutative operations, and you need to prevent interference among threads during traversal.

### OOPS concept




_Please do let me know if I am missing any topic to cover in java_
