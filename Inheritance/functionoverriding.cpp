/*
    when both the base class and derived class have same function defined.
    then if the function is called with the instance of derived class then the function of the derived
    class will be executed. this is known as function overloading.

    // access override functions
    // :: scope resolution operator
    // syntax: derivedInstance.BaseClass::function()
*/

#include <iostream>

class Base
{
public:
    void display()
    {
        std::cout << "base class function called" << std::endl;
    }
    void null()
    {
        std::cout << "do nothing" << std::endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        std::cout << "derived class function called" << std::endl;
        // access base class function from derived class
        Base::display();
        Base::null();
    }
};

int main()
{
    Derived d1;
    d1.display(); // overridden function
    // accessing the overridden function with derived instance
    d1.Base::display();

    // call overriden function using pointer
    Base *ptr = &d1; // since ptr is pointer of base type so it points to function of base class
    ptr->display();
    return 0;
}