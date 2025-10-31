package local.ols2407.strategy;

public class MallardDuck extends Duck implements Quackable, Flyable {

    @Override
    public void display() {
        System.out.println("Look! I am a Mallard Duck!");
    }

    @Override
    public void quack() {
        System.out.println("Quack! Quack!");
    }

    @Override
    public void fly() {
        System.out.println("See here! I am flying!");
    }
}
