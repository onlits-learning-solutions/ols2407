package local.ols2407.strategy;

public class DuckSimulator {

    public static void main(String[] args) {
        testDuck(new MallardDuck());

        System.out.println("--------------");

        testDuck(new RedHeadDuck());

        System.out.println("--------------");

        testDuck(new RubberDuck());

        System.out.println("--------------");

        testDuck(new DecoyDuck());

    }

    public static void testDuck(Duck duck) {
        duck.display();
        duck.performQuack();
        duck.swim();
        duck.performFly();
    }
}
