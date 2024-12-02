package ols2407.math;

public class Complex {
    float real;
    float imaginary;

    Complex() {
    }

    Complex(float real, float imaginary) {
        this.real = real;
        this.imaginary = imaginary;
    }

    Complex plus(Complex x) {
        Complex sum = new Complex();
        sum.real = this.real + x.real;
        sum.imaginary = this.imaginary + x.imaginary;
        return sum;
    }

    void diplay() {
        System.out.printf("%1.2f + %1.2fi", real, imaginary);
    }

    public static void main(String[] args) {
        Complex c1 = new Complex(10.1F, 9.8F);
        Complex c2 = new Complex(5.3F, 4.1F);
        Complex c3 = new Complex();
        c3 = c1.plus(c2);
        c3.diplay();
    }
}
