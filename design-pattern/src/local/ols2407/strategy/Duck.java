package local.ols2407.strategy;

public abstract class Duck {
    public void quack()
    {
        System.out.println("Quack! Quack!");
    }

    public void swim() {
        System.out.println("See here! I am swimming!");
    }

    public abstract void display();
}