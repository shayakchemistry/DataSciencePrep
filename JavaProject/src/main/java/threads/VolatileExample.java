package threads;

public class VolatileExample {

    public static void main(String[] args) throws Exception {
        System.out.println("Volatile Example \n\n");
        Runnable r1 = new Runnable() {
            @Override
            public void run() {
                SharedObjv1.sharedVar++;
                SharedObjv2.sharedVar++;
            }
        };
        System.out.println("Shared var 1 value = " + SharedObjv1.sharedVar);
        System.out.println("Shared var 2 value = " + SharedObjv2.sharedVar);
        Thread tx1 = new Thread(r1);
        Thread tx2 = new Thread(r1);
        Thread tx3 = new Thread(r1);
        Thread tx4 = new Thread(r1);
        tx1.start();
        tx2.start();
        tx3.start();
        tx4.start();
        System.out.println("\nShared var 1 value = " + SharedObjv1.sharedVar);
        System.out.println("Shared var 2 value = " + SharedObjv2.sharedVar);
        Thread.sleep(500);
        System.out.println("\nShared var 1 value = " + SharedObjv1.sharedVar);
        System.out.println("Shared var 2 value = " + SharedObjv2.sharedVar);
    }

}

class SharedObjv1 {
    static int sharedVar = 1;
}

class SharedObjv2 {
    static volatile int sharedVar = 1;
}