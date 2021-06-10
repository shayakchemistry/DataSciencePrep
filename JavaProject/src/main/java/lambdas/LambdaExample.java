package lambdas;

public class LambdaExample {

    public static void main(String[] args) {
        System.out.println("Lambda Example: \n");

        String sayStr = "SAY SAY !!!";

        PrintAll p = (x) -> {
            System.out.println(x);
        };
        p.say(sayStr);
    }
}

interface PrintAll {
    void say(String s);
}