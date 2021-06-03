package collections;

import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.CopyOnWriteArraySet;

public class ConcurrentCollectionExample {

    public static void concurrentHashMapExample() {
        System.out.println("Concurrent Hash Map Example \n");

        ConcurrentHashMap<String, Integer> map1 = new ConcurrentHashMap<>();
        Runnable r1 = () -> map1.put("In thread", 121);
        map1.put("Obj 1", 1);
        map1.put("Obj 2", 2);
        map1.put("Obj 3", 3);
        Thread t1 = new Thread(r1);
        t1.start();
        System.out.println("Each element in Map: ");
        for (Map.Entry<String, Integer> i: map1.entrySet()) {
            System.out.println(i.getKey() + " ---> " + i.getValue());
        }
        System.out.println("Printing map as a whole = " + map1);

        System.out.println("===========================================\n");
    }

    public static void copyOnWriteArrayListExample() throws InterruptedException {
        System.out.println("Copy On Write Array List Example \n");

        CopyOnWriteArrayList<String> list1 = new CopyOnWriteArrayList<>();

        Runnable r1 = () -> list1.add("121");

        list1.add("A1");
        list1.add("D1");
        list1.add("OOP1");

        Iterator<String> iter = list1.iterator();
        Thread t1 = new Thread(r1);
        t1.start();

        System.out.println("Contents in the list:");
        while (iter.hasNext()) {
            System.out.println("------>  " + iter.next());
        }

        Thread.sleep(1000);

        System.out.println("List contents: " + list1);

        System.out.println("===========================================\n");
    }


    public static void copyOnWriteArraySetExample() {
        System.out.println("Copy On Write Array Set Example \n");

        CopyOnWriteArraySet<String> set1 = new CopyOnWriteArraySet<>();

        set1.add("OO1");
        set1.add("PP1");
        set1.add("LL1");

        Iterator<String> iter = set1.iterator();

        set1.add("NEW11");

        System.out.println("After adding but not recreating iterator ");

        while (iter.hasNext()) {
            System.out.println("----> " + iter.next());
        }

        iter = set1.iterator();

        System.out.println("After recreating iterator ");

        while (iter.hasNext()) {
            System.out.println("----> " + iter.next());
        }

        System.out.println("===========================================\n");
    }




    public static void main(String[] args) throws Exception{
        concurrentHashMapExample();
        copyOnWriteArrayListExample();
        copyOnWriteArraySetExample();
    }
}
