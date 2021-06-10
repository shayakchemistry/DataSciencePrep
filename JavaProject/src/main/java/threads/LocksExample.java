package threads;

import java.util.concurrent.locks.ReentrantLock;

public class LocksExample {

    static ReentrantLock lock1 = new ReentrantLock();

    public static void main(String[] args) {
        System.out.println("Locks Example \n\n");

        Thread t1 = new Thread(() -> {
            boolean flag1 = true;
            while(flag1) {
                boolean isLock = lock1.tryLock();
                if (isLock) {
                    try {
                        System.out.println("Thread 1 lock acquired");
                        flag1 = false;
                    } finally {
                        lock1.unlock();
                        System.out.println("Thread 1 lock released");
                    }
                }
            }
        });

        Thread t2 = new Thread(() -> {
            boolean flag1 = true;
            while(flag1) {
                boolean isLock = lock1.tryLock();
                if (isLock) {
                    try {
                        System.out.println("Thread 2 lock acquired");
                        flag1 = false;
                    } finally {
                        lock1.unlock();
                        System.out.println("Thread 2 lock released");
                    }
                }
            }
        });

        t1.start();
        t2.start();

    }
}
