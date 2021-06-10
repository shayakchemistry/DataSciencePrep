package streams;

import java.util.stream.*;

public class NumericalStreamExample {

    public static void main(String[] args) {
        System.out.println("Numerical Stream Example: \n");

        IntStream s1 = IntStream.range(1, 10);
        LongStream s2 = LongStream.range(1, 10);
        DoubleStream s3 = DoubleStream.builder().add(10.1).add(20.3).build();

        IntStream s4 = IntStream.range(7, 11);

        System.out.println("Avg of s1 = " + s1.average());

        System.out.println("Sum of s2 = " + s2.sum());

        System.out.println("Max of s3 = " + s3.max());

        System.out.println("Boxing of s4 = " + s4.boxed().collect(Collectors.toList()));

        System.out.println("Unboxing = " + Stream.of(4, 5, 6).mapToInt(i -> i).sum());
    }
}
