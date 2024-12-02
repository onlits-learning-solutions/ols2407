#include <iostream>
using namespace std;

int increment();

int main(int argc, char const *argv[])
{
    for(int i=1; i<=5; i++)
        cout << increment() << endl;
    return 0;
}

int increment()
{
    static int i;
    return ++i;
}
