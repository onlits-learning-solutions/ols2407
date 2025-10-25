package local.ols2407;

import java.util.Scanner;

public class TestLinkedList {

    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        Scanner scanner = new Scanner(System.in);
        do {
            System.out.println("MAIN MENU");
            System.out.println("1. Display");
            System.out.println("2. Insert");
            System.out.print("Enter choice: ");
            int ch = scanner.nextInt();
            switch (ch) {
                case 0:
                    return;
                case 1:
                    list.display();
                    break;
                default:
                    System.out.println("\nInvalid option\n");
            }
        } while (true);
    }
}
