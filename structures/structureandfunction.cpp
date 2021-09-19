

#include <iostream>

struct Person
{
    char name[50];
    int age;
    float salary;
};

void displayInfo(Person);
Person getInfo(Person);

int main()
{
    Person p1;
    p1 = getInfo(p1);

    displayInfo(p1);
    return 0;
}

Person getInfo(Person p)
{
    std::cout << "enter full name : ";
    std::cin.get(p.name, 50);
    std::cout << "enter age: ";
    std::cin >> p.age;
    std::cout << "enter salary: ";
    std::cin >> p.salary;

    return p;
}
void displayInfo(Person p)
{
    std::cout << "\nDisplaying Information: " << std::endl;
    std::cout << "Name: " << p.name << std::endl;
    std::cout << "age: " << p.age << std::endl;
    std::cout << "salary: " << p.salary << std::endl;
}