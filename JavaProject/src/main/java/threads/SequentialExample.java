package threads;

public class SequentialExample {

    public static void main(String[] args) {
        System.out.println("Sequential execution Example \n\n");
        int range = 100;
        System.out.println("Squares list: \n");
        for (int i = 1; i <= range; i++) {
            System.out.println(i + " ----> " + (i*i));
        }
        System.out.println("\nCubes list: \n");
        for (int i = 1; i <= range; i++) {
            System.out.println(i + " ----> " + (i*i*i));
        }

        System.out.println("===========================================\n");
    }
}
