/*
    Structure is a collection of related information under a single name

    syntax: struct structure_name{
        dataType var_name1;
        dataType var_name2;
        ...
    }
*/

#include <iostream>

// defining a structure Person
struct Person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    Person p1;
    std::cout << "enter full name : ";
    std::cin.get(p1.name, 50);
    std::cout << "enter age: ";
    std::cin >> p1.age;
    std::cout << "enter salary: ";
    std::cin >> p1.salary;

    std::cout << "\nDisplaying Information: " << std::endl;
    std::cout << "Name: " << p1.name << std::endl;
    std::cout << "age: " << p1.age << std::endl;
    std::cout << "salary: " << p1.salary << std::endl;

    return 0;
}