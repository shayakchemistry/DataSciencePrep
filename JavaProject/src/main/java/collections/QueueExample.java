package collections;

import java.util.PriorityQueue;

public class QueueExample {

    public static void priorityQueueExamples() {
        System.out.println("Priority Queue Example \n\n");

        PriorityQueue<String> myQueue = new PriorityQueue<>();
        myQueue.add("ele 1");
        myQueue.add("ele 2");
        myQueue.add("ele 3");
        myQueue.add("ele 4");

        System.out.println("My top element is " + myQueue.peek());
        System.out.println("Removing my top element " + myQueue.poll());
        System.out.println("Now My top element is " + myQueue.poll());

        System.out.println("===========================================\n");
    }

    public static void main(String[] args) {
        priorityQueueExamples();
    }
}
