package threads;

import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.*;

public class ExecutorExample {

    public static void main(String[] args) {
        System.out.println("Executor Example \n\n");

        System.out.println("Thread pool using Runnable");

        ExecutorService pool1 = Executors.newFixedThreadPool(3);


        for (int i = 1; i < 11; i++) {
            Task1 t1 = new Task1(String.valueOf(i));
            System.out.println("Created task " + i);
            pool1.execute(t1);
        }
        pool1.shutdown();

        System.out.println("\n\nExecutor with Callable");

        ExecutorService pool2 = Executors.newFixedThreadPool(4);
        List<Future<String>> fList = new ArrayList<>();

        for (int i = 1; i < 15; i++) {
            Task2 t2 = new Task2(String.valueOf(i));
            System.out.println("Creating thread " + i);
            Future<String> f1 = pool2.submit(t2);
            fList.add(f1);
        }

        for (Future<String> f : fList) {
            try {
                System.out.println(f.get());
            } catch (InterruptedException e) {
                e.printStackTrace();
            } catch (ExecutionException e) {
                e.printStackTrace();
            }
        }

        pool2.shutdown();

    }
}

class Task1 implements Runnable {
    String name;

    public Task1(String name) {
        this.name = name;
    }

    @Override
    public void run() {
        System.out.println("Executing task for thread  " + this.name + "........");
    }
}

class Task2 implements Callable<String> {

    String name;

    public Task2(String name) {
        this.name = name;
    }

    @Override
    public String call() throws Exception {
        Thread.sleep(1000);
        return "Thread " + this.name + " has ended executing";
    }
}