package local.ols2407;

import java.util.Scanner;

public class TestLinkedList {

    public static void main(String[] args) {
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
            }
        } while (true);
    }
}
