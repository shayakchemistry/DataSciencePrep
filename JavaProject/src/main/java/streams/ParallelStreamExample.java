package streams;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

public class ParallelStreamExample {

    public static void main(String[] args) {
        System.out.println("Parallel Stream Example: \n");

        List<String> list1 = new ArrayList<>();
        list1.add("A1");
        list1.add("B3");
        list1.add("P0");
        list1.add("K9");
        list1.add("Y6");
        list1.add("R4");

        System.out.println("Contents of the list " + list1);

        System.out.println("Appending \"rrt\" to evey element using parallel stream");

        List<String> list2 = list1.parallelStream().map(i -> i + "rrt").collect(Collectors.toList());

        System.out.println("Modified list = " + list2);

    }
}
