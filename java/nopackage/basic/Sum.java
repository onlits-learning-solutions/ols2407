
import java.util.Scanner;

class Sum {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int a = s.nextInt();
        System.out.print("Enter another number: ");
        int b = s.nextInt();
        int c = a + b;
        System.out.println("The sum is " + c);
    }
}