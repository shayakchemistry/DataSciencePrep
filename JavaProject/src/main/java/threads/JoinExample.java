package threads;

public class JoinExample {

    public static void main(String[] args) throws Exception {
        System.out.println("Join Example \n\n");

        System.out.println("Without Join \n");
        T2 t1 = new T2();
        T2 t2 = new T2();
        System.out.println("Created threads with id's " + t1.getId() + " and " + t2.getId());
        t1.start();
        t2.start();
        System.out.println("Back to main");
        Thread.sleep(5000);

        System.out.println("With Join \n");
        t1 = new T2();
        t2 = new T2();
        System.out.println("Created threads with id's " + t1.getId() + " and " + t2.getId());
        t1.start();
        t1.join();
        t2.start();
        t2.join();
        System.out.println("Back to main");

    }
}

class T2 extends Thread {

    @Override
    public void run() {
        System.out.println("Inside thread " + this.getId());
    }
}