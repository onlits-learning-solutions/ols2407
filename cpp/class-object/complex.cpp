#include <iostream>

namespace math
{
    class complex
    {
        float real;
        float imaginary;

    public:
        complex()
        {
        }

        complex(float real, float imaginary = 0.0F)
        {
            this->real = real;
            this->imaginary = imaginary;
        }

        complex operator+(complex &x)
        {
            complex sum;
            sum.real = this->real + x.real;
            sum.imaginary = this->imaginary + x.imaginary;
            return sum;
        }

        void diplay()
        {
            std::cout << this->real << " + " << imaginary << "i";
        }
    };
}

int main(int argc, char const *argv[])
{
    math::complex c1(10.1, 9.8), c2(5.3, 4.1), c3;
    c3 = c1 + c2;
    c3.diplay();
    return 0;
}
