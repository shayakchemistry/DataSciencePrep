package lambdas;

import java.util.Locale;
import java.util.function.Supplier;

public class SupplierExample {

    public static void main(String[] args) {

        System.out.println("Supplier example Example: \n");

        String str1 = "HELLOOOOOOO 123";

        System.out.println("Original String " + str1);

        Supplier<String> s1 = () -> str1.toLowerCase(Locale.ROOT);

        System.out.println("Output of supplier = " + s1.get());

    }
}
