#include <iostream>

class Person
{
private:
    int age;
    float salary;

public:
    Person() : age(32), salary(2200.56) {}
    void displayInfo()
    {
        std::cout << "age " << age << " salary " << salary << std::endl;
    }
};

int main()
{
    Person *sptr = new Person(); // allocate memory dynamically

    sptr->displayInfo();

    delete sptr; // deallocate the memory

    return 0;
}