/*
    Special type of member function that is automatically called whenever an object is created
    
    It has the same name as the class and doesnot have a return type

    A constructor with no params is known as default constructor

    three types: default , parameterized and copy constructor
*/

#include <iostream>

class Person
{
private:
    int roll;
    double salary;

public:
    Person(int rol, double sal) // parameterized constructor
    {
        // constructor
        roll = rol;
        salary = sal;
    }

    Person(Person &pers) // copy constructor
    {
        roll = pers.roll;
        salary = pers.salary;
    }

    int getRoll()
    {
        return roll;
    }
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    // create amd Person class object
    Person pers(101, 25000.09);
    // copy contents from pers to pers2
    Person pers2 = pers;
    // std::cout << "pers = " >> pers.roll >> pers.salary >> std::endl; // error roll and salary are private
    std::cout << "pers = " << pers.getRoll() << " " << pers.getSalary() << std::endl;
    std::cout << "pers2 = " << pers2.getRoll() << " " << pers2.getSalary() << std::endl;
    return 0;
}