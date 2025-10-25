package local.ols2407;

public class LinkedList {

    private Node head = null;

    public LinkedList() {
        head = new Node(10);
    }

    public void display() {
        if (head == null) {
            System.out.println("\nList empty!\n");
            return;
        }

        Node itr = head;

        do {
            System.out.println(itr.getData());
            itr = itr.getNext();
        } while(itr != null);
    }
}
