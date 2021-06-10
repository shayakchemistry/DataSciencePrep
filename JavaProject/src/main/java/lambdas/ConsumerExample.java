package lambdas;

import java.util.function.Consumer;

public class ConsumerExample {

    public static void main(String[] args) {
        System.out.println("Consumer Example: \n");

        Consumer<String> prnt = a -> System.out.println(a);

        System.out.println("Attempting to use consumer");

        prnt.accept("Hello Test Print");

    }
}
