package threads;

public class SynchronizationExample {
    public static void main(String[] args) throws Exception {
        System.out.println("Synchronization Example \n\n");

        Counter1 c1 = new Counter1();

        System.out.println("Output for non sync thread\n");
        NonSyncThread1 t1 = new NonSyncThread1(c1);
        NonSyncThread1 t2 = new NonSyncThread1(c1);
        t1.start();
        t2.start();
        t1.join();
        t2.join();

        System.out.println("\n\nWith synchronization ");
        SyncThread1 t3 = new SyncThread1(c1);
        SyncThread1 t4 = new SyncThread1(c1);
        t3.start();
        t4.start();
        t3.join();
        t4.join();

        System.out.println("\n===========================================\n");
    }
}

class Counter1 {
    public void printFn() {
        for (int i = 0; i < 10; i++) {
            System.out.println("Counter ---> " + i);
        }
    }
}

class NonSyncThread1 extends Thread {

    Counter1 c;

    NonSyncThread1(Counter1 c) {
        this.c = c;
    }

    @Override
    public void run() {
        c.printFn();
        System.out.println("Exiting " + this.getId());
    }
}


class SyncThread1 extends Thread {

    Counter1 c1;

    SyncThread1(Counter1 c) {
        c1 = c;
    }

    @Override
    public void run() {
        synchronized (c1) {
            c1.printFn();
            System.out.println("Exiting " + this.getId());
        }
    }
}