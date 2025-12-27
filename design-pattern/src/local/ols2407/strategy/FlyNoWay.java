package local.ols2407.strategy;

public class FlyNoWay implements FlyBehavior {
    @Override
    public void fly() {
        System.err.println("I am flying");
    }
}