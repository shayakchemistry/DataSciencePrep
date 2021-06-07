package threads;


public class ThreadExample {

    public static void main(String[] args) {
        System.out.println("Thread execution Example \n\n");

        Thread t1 = new Thread(new R1()); // Using Runnable interface
        Thread t2 = new T1();             // Using Thread class
        t1.start();
        t2.start();

        System.out.println("===========================================\n");
    }
}

/**
 * This class is an example to create thread using Runnable
 */
class R1 implements Runnable {

    @Override
    public void run() {
        int range = 100;
        System.out.println("Squares list: \n");
        for (int i = 1; i <= range; i++) {
            System.out.println(i + " square ----> " + (i*i));
        }
    }
}

/**
 * This class is an example to create thread using Thread
 */
class T1 extends Thread {

    @Override
    public void run() {
        int range = 100;
        System.out.println("\nCubes list: \n");
        for (int i = 1; i <= range; i++) {
            System.out.println(i + " cube ----> " + (i*i*i));
        }
    }
}