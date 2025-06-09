#include <iostream>
using namespace std;

class employee
{
    int id;
    string name;

public:
    // Default constructor
    // employee() : id(0), name("Unknown") {}   // doubt
    employee()
    {
        id = 0;
        name = "Unknown";
        cout << "Default constructor called!" << endl;
    }

    // Parameterized constructor
    employee(int empId, string empName) 
    {
        id = empId;
        name = empName;
        cout << "Parameterized constructor called!" << endl;
    }

    // // Copy constructor
    // employee(const employee &e) : id(e.id), name(e.name)
    // {
    //     cout << "Copy constructor called!" << endl;
    // }

    // Display function
    void display()
    {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main()
{
    // Using default constructor
    employee emp1;
    emp1.display();

    // Using parameterized constructor
    employee emp2(101, "Alice");
    emp2.display();

    employee emp3 = emp2; // Using copy constructor
    emp3.display();
    
    // // Using copy constructor
    // employee emp3(emp2);
    // emp3.display();

    return 0;
}