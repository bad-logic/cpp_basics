/*
    feature of object oriented programming (OOP)

    allows us to create a new class aka derived class from an existing class aka base class

    inheritance represents is-a-relationship

*/

/*
    Access Modes: ways in which classes can be derived,
    private: all members of the base class are inherited as private in the derived class, 
    protected: the public members of base class are inherited as protected in derived class,
    public: members of base class are inherited as they are by the derived class, 


    NOTE: private members of the base class remain private in derived class irrespective of the derived mode(Access modes)
*/
#include <iostream>

// base class
class Animal
{
public:
    void eat()
    {
        std::cout << "Eating" << std::endl;
    }
    void sleep()
    {
        std::cout << "sleeping" << std::endl;
    }
};

// derived class
class Dog : public Animal
{
public:
    void bark()
    {
        std::cout << "Barking" << std::endl;
    }
};

int main()
{
    Dog dog;

    dog.bark();
    dog.eat();
    dog.sleep();
    return 0;
}