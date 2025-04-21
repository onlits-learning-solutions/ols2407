#include <iostream>
using namespace std;
int main(void)
{
    int n, fact = 1;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Error! Factorial of a negative number doesn't exist.";
        return 0;
    }
    for (int i = 1; i <= n; ++i)
    {
        fact *= i;
    }
    cout << "Factorial of " << n << " = " << fact;
    return 0;
}