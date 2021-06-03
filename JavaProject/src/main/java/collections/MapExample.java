package collections;

import java.util.*;

public class MapExample {

    public static void hashMapExample() {
        System.out.println("Hash Map Example \n");

        HashMap<String, Integer> myMap1 = new HashMap<>();
        myMap1.put("Str1", 10);
        myMap1.put("Str2", 20);
        myMap1.put("Str3", 30);
        myMap1.put("Str4", 40);
        myMap1.put("Str5", 50);
        myMap1.put("Str6", 60);

        System.out.println("Size of the map : " + myMap1.size());
        System.out.println("Map contents : " + myMap1);

        if (myMap1.containsKey("Str2")) {
            System.out.println("Value for \"Str2\" is " + myMap1.get("Str2"));
        }

        System.out.println("===========================================\n");
    }

    public static void linkedHashMapExample() {
        System.out.println("Linked Hash Map Example \n");

        LinkedHashMap<String, Integer> myMap2 = new LinkedHashMap<>();
        myMap2.put("Str1", 10);
        myMap2.put("Str2", 20);
        myMap2.put("Str3", 30);
        myMap2.put("Str4", 40);
        myMap2.put("Str5", 50);
        myMap2.put("Str6", 60);

        System.out.println("Printing the contents: " + myMap2);
        System.out.println("Getting value for key \"Str4\": " + myMap2.get("Str4"));

        System.out.println("Size of the map: " + myMap2.size());

        System.out.println("Is map empty? " + myMap2.isEmpty());

        System.out.println("===========================================\n");
    }

    public static void identityHashMapExample() {
        System.out.println("Identity Hash Map Example \n");

        IdentityHashMap<String, Integer> myMap3 = new IdentityHashMap<>();
        myMap3.put("Str1", 10);
        myMap3.put("Str2", 20);
        myMap3.put("Str3", 30);
        myMap3.put("Str4", 40);
        myMap3.put("Str5", 50);
        myMap3.put("Str6", 60);

        System.out.println("Printing the contents: " + myMap3);
        System.out.println("Getting value for key \"Str4\": " + myMap3.get("Str4"));

        System.out.println("Size of the map: " + myMap3.size());

        System.out.println("Is map empty? " + myMap3.isEmpty());

        IdentityHashMap<String, Integer> duplicateMap = new IdentityHashMap<>();
        duplicateMap.putAll(myMap3);

        System.out.println("Comparison between maps = " + (duplicateMap == myMap3));

        System.out.println("===========================================\n");
    }

    public static void weakHashMapExample() {
        System.out.println("Weak Hash Map Example \n");

        WeakHashMap<String, String> map4 = new WeakHashMap<>();
        map4.put(new String("Hello1"), "World");

        Runnable r1 = new Runnable() {
            @Override
            public void run() {
                while (map4.containsKey("Hello1")) {
                    try {
                        Thread.sleep(500);
                    } catch (InterruptedException ex) {
                        // Do nothing
                    }
                    System.out.println("Thread is waiting ......");
                    System.gc();
                }
            }
        };

        Thread t1 = new Thread(r1);
        t1.start();
        System.out.println("Main is waiting ....");
        try {
            t1.join();
        } catch (InterruptedException ex) {
            // Exception
        }

        System.out.println("===========================================\n");
    }

    public static void treeMapExample() {
        System.out.println("Tree Map Example \n");

        TreeMap<String, Integer> myMap5 = new TreeMap<>();
        myMap5.put("Str1", 10);
        myMap5.put("Str2", 20);
        myMap5.put("Str3", 30);
        myMap5.put("Str4", 40);
        myMap5.put("Str5", 50);
        myMap5.put("Str6", 60);

        System.out.println("Size of the map : " + myMap5.size());
        System.out.println("Map contents : " + myMap5);

        if (myMap5.containsKey("Str2")) {
            System.out.println("Value for \"Str2\" is " + myMap5.get("Str2"));
        }

        System.out.println("===========================================\n");
    }

    public static void main(String[] args) {
        hashMapExample();
        linkedHashMapExample();
        identityHashMapExample();
        weakHashMapExample();
        treeMapExample();
    }
}
