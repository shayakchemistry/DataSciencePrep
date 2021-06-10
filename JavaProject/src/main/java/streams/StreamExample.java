package streams;

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class StreamExample {

    public static void main(String[] args) {
        System.out.println("Stream Example: \n");

        System.out.println("Stream operations with collections \n");

        List<String> itemList =
                Arrays.asList("Item 1","Item 2","Item 3", "Item 4", "Item 12");

        List<String> l1 = itemList.stream().map(x -> x + "OOO").collect(Collectors.toList());

        System.out.println("With map and collect " + l1);

        List<String> l2 = itemList.stream().filter(x -> x.contains("Item 1"))
                .collect(Collectors.toList());

        System.out.println("Filter with collect " + l2);

    }
}
