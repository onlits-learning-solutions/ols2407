#include <iostream>
using namespace std;

int & super()
{
    return 2; // Error: cannot return a reference to a temporary
}

int main(void)
{
    int x = super(); // Error: trying to assign a reference to a temporary
    cout << x << endl; // This line will not be reached due to the errors above
    return 0;
}