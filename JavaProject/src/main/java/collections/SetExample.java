package collections;

import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.TreeSet;

public class SetExample {
    public static void hashSetExample() {
        System.out.println("HashSet Example: \n");

        HashSet<String> set1 = new HashSet<>(); // Declaration
        set1.add("HDP"); // Adding elements to the set
        set1.add("CDH");
        set1.add("MAPR");
        set1.add("AWS");
        set1.add("AZURE");
        set1.add("MAPR");

        System.out.println("Set of elements = " + set1);
        System.out.println("Check if AWS is there in the set = " + set1.contains("AWS"));
        set1.remove("CDH");
        System.out.println("After removing CDH set = " + set1);

        System.out.println("===========================================\n");
    }

    public static void linkedHashSetExample() {
        System.out.println("LinkedHashSet Example: \n");
        LinkedHashSet<String> set1 = new LinkedHashSet<>(); // Declaration
        set1.add("HDP"); // Adding elements to the set
        set1.add("CDH");
        set1.add("MAPR");
        set1.add("AWS");
        set1.add("AZURE");
        set1.add("MAPR");

        System.out.println("For traversal: ");
        // Traversal
        for (String i: set1) {
            System.out.println(i);
        }

        System.out.println("===========================================\n");

    }

    public static void treeSetExample() {
        System.out.println("TreeSet Example: \n");

        TreeSet<String> set1 = new TreeSet<>(); // Declaration
        set1.add("HDP"); // Adding elements to the set
        set1.add("CDH");
        set1.add("MAPR");
        set1.add("AWS");
        set1.add("AZURE");
        set1.add("MAPR");

        System.out.println("Tree set elements are: " + set1); // Always stored in a sorted fashion

        System.out.println("===========================================\n");
    }

    public static void main(String[] args) {
        hashSetExample();
        linkedHashSetExample();
        treeSetExample();
    }

}
