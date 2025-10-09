package local.ols2407.strategy;

public class DuckSimulator {
    public static void main(String[] args) {
        Duck mallardDuck = new MallardDuck();
        mallardDuck.display();
        mallardDuck.quack();
        mallardDuck.swim();

        System.out.println("--------------");

        Duck readHeadDuck = new RedHeadDuck();
        readHeadDuck.display();
        readHeadDuck.quack();
        readHeadDuck.swim();
    }
}