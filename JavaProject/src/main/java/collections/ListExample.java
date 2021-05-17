package collections;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Stack;

public class ListExample {
    public static void arrayListExamples() {
        System.out.println("ArrayList Example: \n");
        ArrayList<String> strList1 = new ArrayList<>(); // Creating a list
        strList1.add("ele 1"); // Adding single element to the list
        strList1.add(1, "ele 2"); // Adding element to an particular index
        System.out.println("My Array " + strList1);
        // Looping through the items
        System.out.println("Printing Items in a loop: ");
        for (String i: strList1) {
            System.out.println(i);
        }
        System.out.println("===========================================\n");
    }

    public static void linkedListExamples() {
        System.out.println("LinkedList Example: \n");
        LinkedList<String> strList1 = new LinkedList<>(); // Creating a list
        strList1.add("ele 1"); // Adding single element to the list
        strList1.add(1, "ele 2"); // Adding element to an particular index
        System.out.println("My Array " + strList1);
        // Looping through the items
        System.out.println("Printing Items in a loop: ");
        for (String i: strList1) {
            System.out.println(i);
        }
        System.out.println("Special methods: addFirst(), addLast(), removeFirst(), " +
                "removeLast(), getFirst(), getLast()");
        System.out.println("Example: getFirst()");
        System.out.println(strList1.getFirst());
        System.out.println("===========================================\n");
    }

    public static void stackExamples() {
        System.out.println("LinkedList Example: \n");

        Stack<String> strStack1 = new Stack<>();
        strStack1.add("ele 0"); // Same as list
        strStack1.push("ele 1"); // Adding single element to the stack
        strStack1.push("ele 2");
        System.out.println("My stack " + strStack1);
        // Looping through the items
        System.out.println("Special methods: empty(), push(E item), pop(), peek(), search(Object o)");
        System.out.println("Example: peek() - to view top element");
        System.out.println(strStack1.peek());
        System.out.println("===========================================\n");
    }

    public static void main(String[] args) {
        arrayListExamples();
        linkedListExamples();
        stackExamples();
    }
}
