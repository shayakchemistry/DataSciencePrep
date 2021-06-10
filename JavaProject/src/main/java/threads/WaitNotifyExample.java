package threads;

public class WaitNotifyExample {

    static String message1 = "";

    public static void main(String[] args) {
        System.out.println("Wait Notify Example \n\n");

        Object lockObj = new Object();


        Thread t1 = new Thread(() -> {
            synchronized (lockObj) {
                while (message1.equals("")) {
                    System.out.println("Thread 1 going to wait ");
                    try {
                        lockObj.wait();
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                }
                System.out.println("Thread 1 has received a message = " + message1);
            }
        });

        Thread t2 = new Thread(() -> {
            synchronized (lockObj) {
                System.out.println("Thread 2 going to notify");
                message1 = "MESSAGE !!!";
                lockObj.notify();
            }
        });

        t1.start();
        t2.start();
    }
}
