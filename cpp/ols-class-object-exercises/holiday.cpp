#include <iostream>

using namespace std;

namespace ols2407
{
    class Holiday
    {
        int id; // instance variable
        string date;
        string name;
        string description;
        int firstHeld;

    public:
        int generateId();
        int getId()
        {
            id = generateId();
            return id;
        }

        void setDate(string date)
        {
            this->date = date;
        }

        string getDate()
        {
            return date;
        }

        void setName(string name)
        {
            this->name = name;
        }

        string getName()
        {
            return name;
        }
    };

    int Holiday::generateId()
    {
        return 1;
    }
}

int main(int argc, char const *argv[])
{
    ols2407::Holiday holiday;
    holiday.setDate("21/10/2024");
    holiday.setName("Independence Day");
    cout << "Date: " << holiday.getDate() << endl;
    cout << "Name:" << holiday.getName() << endl;
    return 100;
}