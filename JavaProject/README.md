## Java Project

In this module we will explore the advanced concepts of java. We will not get into the web application (spring and similar stuff) but mostly be involved with core java tools and concepts. We are going to focus on the following topics:

- Collection Framework
- OOPS concept
- Threading (multi threading and thread pooling)
- Process
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

As we already know Collections which is nothing but collections of Objects which deals with the Objects using some pre-defined methods. With Collections there are several problems which occurs in multi-threading. The problems which occurs while using Collections in Multi-threaded application. Most of the Collections classes objects (like ArrayList, LinkedList, HashMap etc) are non-synchronized in nature i.e. multiple threads can perform on an object at a time simultaneously. Therefore, objects are not thread-safe. Very few Classes objects (like Vector, Stack, HashTable) are synchronized in nature i.e. at a time only one thread can perform on an Object. The catch here is the performance which is low because at a time single thread execute an object and rest thread has to wait. The main problem is when one thread is iterating a Collections object then if another thread can't modify the content of the object. If another thread try to modify the content of object then we will get RuntimeException saying ConcurrentModificationException. Because of the above reason Collections classes is not suitable for we can say that good choice for Multi-threaded applications. To overcome the above problem SUN microSystem introduced a new feature in JDK 1.5, which is nothing but Concurrent Collections.

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

In this section, we will discuss object-oriented programming in Java. The main objective of  object-oriented programming is to implement real-word entities. Object means a real-world entity such as a pen, chair, table, computer, watch, etc. Object-Oriented Programming is a methodology or paradigm to design a program using classes and objects. It simplifies software development and maintenance by providing the following concepts:

*Object:*
An object is a software bundle of related state and behavior. Software objects are used to model the real-world objects that we find in everyday life. 

*Class:*
A class is a blueprint or prototype from which objects are created.

*Inheritance:*
Inheritance provides a powerful and natural mechanism for organizing and structuring your software. In inheritance, classes inherit state and behavior from their superclasses.

*Interface:*
An interface is a contract between a class and the outside world. When a class implements an interface, it promises to provide the behavior published by that interface. 

*Package:*
A package is a namespace for organizing classes and interfaces logically. Placing your code into packages makes large software projects easier to manage.

*Polymorphism:*
Polymorphism is a concept by which we can perform a single action in different ways. There are two types of polymorphism in Java: compile-time polymorphism and runtime polymorphism. We can perform polymorphism in java by method overloading and method overriding.

*Abstraction:*
Abstraction is a process of hiding the implementation details and showing only functionality to the user. Abstraction lets you focus on what the object does instead of how it does it. We can achieve abstraction using abstract class and interface in Java.

*Encapsulation:*
Encapsulation is a process of wrapping code and data together into a single unit. We can create a fully encapsulated class in Java by making all the data members of the class private. Now we can use setter and getter methods to set and get the data in it.

#### Apart from these concepts we have the following additional design concepts

*Coupling:*
Coupling refers to the knowledge or information or dependency of another class. It arises when classes are aware of each other. If a class has the details information of another class, there is strong coupling. In Java, we use private, protected, and public modifiers to display the visibility level of a class, method, and field.

*Cohesion:*
Cohesion refers to the level of a component which performs a single well-defined task. A single well-defined task is done by a highly cohesive method. The weakly cohesive method will split the task into separate parts.

*Association:*
Association represents the relationship between the objects. Here, one object can be associated with one object or many objects.

*Aggregation:*
Aggregation is a way to achieve Association. Aggregation represents the relationship where one object contains other objects as a part of its state. It represents the weak relationship between objects.

*Composition:*
The composition is also a way to achieve Association. The composition represents the relationship where one object contains other objects as a part of its state. There is a strong relationship between the containing object and the dependent object.

### Threading

In this section, we explore threading in java. A thread, in the context of Java, is the path followed when executing a program. All Java programs have at least one thread, known as the main thread, which is created by the Java Virtual Machine (JVM) at the program’s start. This happens when the main() method is invoked with the main thread.

Let's consider a simple java program where we have to calculate squares and cubes of numbers from 1 to 100. In sequential approach, we do first compute squares and then compute cubes. This is implemented in SequentialExample under threads package. A single-threaded application has only one thread and can handle only one task at a time. To handle multiple tasks in parallel, multi-threading is used: multiple threads are created, each performing a different task.

Most commercial applications use multi-threading extensively. This is done for several reasons:

- For faster processing of background/batch tasks
- To take advantage of modern processors as they have multiple cores
- For reducing response times
- To serve multiple users at the same time

In Java, creating a thread is accomplished by implementing Runnable interface or by extending Thread class. Every Java thread is created and controlled by the java.lang.Thread class. This is illustrated in the class ThreadExample. Thread has multiple features and are discussed in the following sub-topics.

##### Joins 

Thread class provides the join() method which allows one thread to wait until another thread completes its execution. If t is a Thread object whose thread is currently executing, then t.join() will make sure that t is terminated before the next instruction is executed by the program.
If there are multiple threads calling the join() methods that means overloading on join allows the programmer to specify a waiting period. However, as with sleep, join is dependent on the OS for timing, so you should not assume that join will wait exactly as long as you specify. This is demonstrated by JoinExample class.

##### Volatile

Volatile is a keyword to make a class thread safe. Thread safe means that a method or class instance can be used by multiple threads at the same time without any problem. It is yet another way like synchronized, atomic wrapper to make a class thread safe. This is demonstrated in VolatileExample class.
 
##### DeadLock And LiveLock

Deadlock describes a situation where two or more threads are blocked forever, waiting for each other. Deadlock occurs when multiple threads need the same locks but obtain them in different order. A Java multithreaded program may suffer from the deadlock condition because the synchronized keyword causes the executing thread to block while waiting for the lock, or monitor, associated with the specified object.

A livelock is a recursive situation where two or more threads would keep repeating a particular code logic. The intended logic is typically giving opportunity to the other threads to proceed in favor of 'this' thread. A real-world example of livelock occurs when two people meet in a narrow corridor, and each tries to be polite by moving aside to let the other pass, but they end up swaying from side to side without making any progress because they both repeatedly move the same way at the same time.

##### Synchronization

Synchronization in java is the capability to control the access of multiple threads to any shared resource. Java Synchronization is better option where we want to allow only one thread to access the shared resource. It is mainly used for:
- To prevent thread interference.
- To prevent consistency problem.

Synchronized can be attached to a block or a method. Synchronized block can be used to perform synchronization on any specific resource of the method. Suppose you have 50 lines of code in your method, but you want to synchronize only 5 lines, you can use synchronized block. 
If you put all the codes of the method in the synchronized block, it will work same as the synchronized method. This is demonstrated in SynchronizationExample class.

##### Wait, Notify, NotifyAll

The java.lang.Object.wait() causes current thread to wait until another thread invokes the notify() method or the notifyAll() method for this object. The current thread must own this object's monitor. The thread releases ownership of this monitor and waits until another thread notifies threads waiting on this object's monitor to wake up either through a call to the notify method or the notifyAll method. The thread then waits until it can re-obtain ownership of the monitor and resumes execution. This method should only be called by a thread that is the owner of this object's monitor. See the notify method for a description of the ways in which a thread can become the owner of a monitor.

The notify() method is used for waking up threads that are waiting for an access to this object's monitor. For all threads waiting on this object's monitor (by using any one of the wait() method), the method notify() notifies any one of them to wake up arbitrarily. The choice of exactly which thread to wake is non-deterministic and depends upon the implementation. Since notify() wakes up a single random thread it can be used to implement mutually exclusive locking where threads are doing similar tasks, but in most cases, it would be more viable to implement notifyAll(). This is demonstrated in WaitNotifyExample.


##### Locks

A lock is a thread synchronization mechanism like synchronized blocks except locks can be more sophisticated than Java's synchronized blocks. Locks (and other more advanced synchronization mechanisms) are created using synchronized blocks, so it is not like we can get totally rid of the synchronized keyword. Synchronized blocks in Java are reentrant. This means, that if a Java thread enters a synchronized block of code, and thereby take the lock on the monitor object the block is synchronized on, the thread can enter other Java code blocks synchronized on the same monitor object. This is demonstrated in LocksExample.

##### Semaphore

Semaphore is used to control access to a shared resource that uses a counter variable. In other words, it is a non-negative variable that is shared among the threads known as a counter. It sets the limit of the threads. A mechanism in which a thread is waiting on a semaphore can be signaled by other threads. Java also provides a Semaphore class that contains constructors and various methods to control access over the shared resource. There are four types of semaphores:

- Counting Semaphores
- Bounded Semaphores
- Timed Semaphores
- Binary Semaphores

##### Executor

The Concurrency API introduces the concept of an ExecutorService as a higher level replacement for working with threads directly. Executors are capable of running asynchronous tasks and typically manage a pool of threads, so we don't have to create new threads manually. All threads of the internal pool will be reused under the hood for revenant tasks, so we can run as many concurrent tasks as we want throughout the life-cycle of our application with a single executor service.

##### Executor With Runnable and Callable

Runnable and Callable both functional interface. Classes which are implementing these interfaces are designed to be executed by another thread. Thread can be started with Ruunable and they are two ways to start a new thread: one is by subclassing Thread class and another is implementing Runnable interface. Thread class does not have constructor for callable so we should use ExecutorService class for executing thread. Callables are functional interfaces just like runnables but instead of being void they return a value. This is demonstrated in ExecutorExample class.

##### Callable & Future

There are two ways of creating threads – one by extending the Thread class and other by creating a thread with a Runnable. However, one feature lacking in  Runnable is that we cannot make a thread return result when it terminates, i.e., when run() completes. For supporting this feature, the Callable interface is present in Java. Callable has a method called call() that needs to be implemented.

When the call() method completes, answer must be stored in an object known to the main thread, so that the main thread can know about the result that the thread returned. How will the program store and obtain this result later? For this, a Future object can be used. Think of a Future as an object that holds the result – it may not hold it right now, but it will do so in the future (once the Callable returns). Thus, a Future is basically one way the main thread can keep track of the progress and result from other threads. To implement this interface, 5 methods have to be overridden, but as the example below uses a concrete implementation from the library, only the important methods are listed here.

Observe that Callable and Future do two different things – Callable is similar to Runnable, in that it encapsulates a task that is meant to run on another thread, whereas a Future is used to store a result obtained from a different thread. In fact, the Future can be made to work with Runnable as well, which is something that will become clear when Executors come into the picture.

##### Cyclic Barrier

A CyclicBarrier is a synchronizer that allows a set of threads to wait for each other to reach a common execution point, also called a barrier. CyclicBarriers are used in programs in which we have a fixed number of threads that must wait for each other to reach a common point before continuing execution

##### Fork-Join Framework

The fork-join framework allows to break a certain task on several workers and then wait for the result to combine them. It leverages multi-processor machine's capacity to great extent. Following are the core concepts and objects used in fork-join framework.

- Fork is a process in which a task splits itself into smaller and independent sub-tasks which can be executed concurrently.
- Join is a process in which a task join all the results of sub-tasks once the subtasks have finished executing, otherwise it keeps waiting.
- Fork-Join Pool  is a special thread pool designed to work with fork-and-join task splitting.
- RecursiveAction represents a task which does not return any value.
- RecursiveTask represents a task which returns a value.

### Process

In this section we discuss about Process class in Java. Process class provides methods for performing input from the process, performing output to the process, waiting for the process to complete, checking the exit status of the process, and destroying (killing) the process.

This is an auxiliary class for the Process and is instantiated to manage a collection of process attributes. We can invoke the start method to create a new process with the attributes defined by the instance of the ProcessBuilder class. Repeated calls to the start method would create a new process with the same attributes. Note that ProcessBuilder is not a synchronized class; hence, if it is not synchronized explicitly, it not thread safe to access the instance of this class through multiple threads. As of Java 1.5, ProcessBuilder.start() is preferred way to create a process.

### Stream

Introduced in Java 8, the Stream API is used to process collections of objects. A stream is a sequence of objects that supports various methods which can be pipelined to produce the desired result. The major features of Streams are listed below:

- A stream is not a data structure instead it takes input from the Collections, Arrays or I/O channels.
- Streams don’t change the original data structure, they only provide the result as per the pipelined methods. 
- Each intermediate operation is lazily executed and returns a stream as a result, hence various intermediate operations can be pipelined. Terminal operations mark the end of the stream and return the result.

This is demonstrated in StreamExample class.

##### Collections vs Streams

A Collection is an in-memory data structure, which holds all the values that the data structure currently has. Every element in the Collection has to be computed before we add it to the Collection. These are modifiable i.e one can easily add to or remove elements from collections. Collections are iterated externally using loops. It supports parallel processing and parallel processing can be very helpful in achieving high performance. They don’t use functional interfaces. It stores/holds all the data that the data structure currently has in a particular data structure like Set, List or Map,

A Stream is a fixed data structure, in which the elements are computed on demand. The Stream API is used to process collections of objects. A stream is a sequence of objects that supports various methods that can be pipelined to produce the desired result. Streams are not modifiable i.e one can’t add or remove elements from streams. Streams are iterated internally by just mentioning the operations. Java streams support both sequential and parallel processing. They use functional interfaces like lambda which makes it a good fit for programming language. It doesn’t store data, it operates on the source data structure i.e collection.

##### Numerical Stream

In case of normal stream we usually do operate stream on some class object. In case of primitive (numerical) types we have a special set of stream class. They are listed below:

- IntStream
- LongStream*
- DoubleStream*

As we have them in a sequence, we have the following methods that are specially supported for this type of stream. 

- sum()
- max()
- min()
- average()

As we use stream to process, at the final step we do usually convert elements of stream into a collection. This works perfectly for majority of stream except the primitive types. In case of primitive type we use the concept of boxing and unboxing as described below:

*Boxing*
To solve the problem to converting primitive numerical stream we use a box to each element into their wrapper class, which will be collected as a collection. This type of stream known as Java boxed stream.

*Unboxing*
When we convert an object into primitive type on stream operation, we call this process as unboxing.

Numerical Streams is demonstrated in NumericalStreamExample.

##### Parallel Streams

Parallel Streams is a feature of Java 8 and higher, meant for utilizing multiple cores of the processor. Normally any java code has one stream of processing, where it is executed sequentially. Whereas by using parallel streams, we can divide the code into multiple streams that are executed in parallel on separate cores and the final result is the combination of the individual outcomes. The order of execution, however, is not under our control.

Therefore, it is advisable to use parallel streams in cases where no matter what is the order of execution, the result is unaffected and the state of one element does not affect the other as well as the source of the data also remains unaffected. This is demonstrated in ParallelStreamExample class.

##### Sequential vs Parallel Performance

Sequential Streams are non-parallel streams that use a single thread to process the pipelining. Any stream operation without explicitly specified as parallel is treated as a sequential stream. Sequential stream’s objects are pipelined in a single stream on the same processing system hence it never takes the advantage of the multi-core system even though the underlying system supports parallel execution. Sequential stream performs operation one by one.

Parallel Stream is a very useful feature of Java to use parallel processing, even if the whole program may not be parallelized. Parallel stream leverage multi-core processors, which increases its performance. Using parallel streams, our code gets divide into multiple streams which can be executed parallelly on separate cores of the system and the final result is shown as the combination of all the individual core’s outcomes. It is always not necessary that the whole program be parallelized, but at least some parts should be parallelized which handles the stream. The order of execution is not under our control and can give us unpredictably unordered results and like any other parallel programming, they are complex and error-prone. 

### Supplier, Consumer, Lambdas

In this section we discuss on supplier, consumer and lambdas. Each of the topics are discussed in the following sub-sections.

##### Supplier

Supplier Interface is a part of the java.util.function package which has been introduced since Java 8, to implement functional programming in Java. It represents a function which does not take in any argument but produces a value of type T. The lambda expression assigned to an object of Supplier type is used to define its get() which eventually produces a value. Suppliers are useful when we don’t need to supply any value and obtain a result at the same time. The Supplier interface consists of only one function: get() . This method does not take in any argument but produces a value of type T. 

##### Consumer

Java Consumer is a functional interface which represents an operation that accepts a single input argument and returns no result. Unlike most other functional interfaces, Consumer is expected to operate via side-effects. The Consumer's functional method is accept(Object). It can be used as the assignment target for a lambda expression or method reference.

##### Lambdas

Lambda expression is a new and important feature of Java which was included in Java SE 8. It provides a clear and concise way to represent one method interface using an expression. It is very useful in collection library. It helps to iterate, filter and extract data from collection.

The Lambda expression is used to provide the implementation of an interface which has functional interface. It saves a lot of code. In case of lambda expression, we don't need to define the method again for providing the implementation. Here, we just write the implementation code.

Java lambda expression is treated as a function, so compiler does not create .class file.
Lambda expression provides implementation of functional interface. An interface which has only one abstract method is called functional interface. Java provides an anotation @FunctionalInterface, which is used to declare an interface as functional interface.

_Please do let me know if I am missing any topic to cover in java_
