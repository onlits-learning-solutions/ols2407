#include <iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

public:
    Date() {}
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
};

class Letter
{
    string reference;
    Date date;
};

int main(void)
{
    Letter letter;
    Date date(9, 6, 2025);
}