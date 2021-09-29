/*
 
 In cpp classes private members cannot be accessed outside of the class.

 but cpp has a feature called friend functions that breaks this limitation and allows to access the private members
 
 syntax: friend returnType functionName(args){}

*/

#include <iostream>
class B; // forward declaration of class B

class A
{
private:
    int value;

    friend int add(A, B);

public:
    A() : value(5) {} // constructor and initialising value to 5
};

class B
{
private:
    int value;

    friend int add(A, B);

public:
    B() : value(5) {} // constructor and initialising value to 5
};

int add(A obj, B obj1) // accessing the private members of both classess
{
    return obj.value + obj1.value;
}

int main()
{
    A a;
    B b;
    std::cout << "value = " << add(a, b) << std::endl;

    return 0;
}