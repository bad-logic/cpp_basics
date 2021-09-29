/*
    whenever we want some function to be overriden in the child class we declare virtual functions
    in the parent class

    unlike using pointer where we could access the overriden functions of the parents class using parent pointer 
    pointing to child class, the virtual function cannot be accessed using pointer,
    even though it is overriden in the child class.
    Example: class A{
        public:
            void display(){}
    } 
    class B: public A{
        public:
            void display(){}
    }, 
    B objB;
    A *ptr = &objB;
    ptr->display(); access display of A(parent).

    this will call display of respective object class, if display is virtual function in parent

    syntax: virtual returnType functionName(){}
*/

#include <iostream>

class A
{
private:
    std::string str;

public:
    A() : str("parent"){};
    virtual std::string getValue()
    {
        return str;
    }
};

class B : public A
{
private:
    std::string value;

public:
    B() : value("child"){};
    std::string getValue() override //override is optional, to inform compiler that this is overriden function
    // so display error msgs if any mistakes
    {
        return value;
    }
};

void display(A *ptr)
{
    std::cout << "this is " << ptr->getValue() << " class" << std::endl;
}

int main()
{
    B *objB = new B();
    A *objA = new A();
    display(objA);
    display(objB);
    B obj1;
    A obj2;
    display(&obj1);
    display(&obj2);
    return 0;
}