/*
    binary operators work on two operands

    operators that cannot be overloaded in c++
    (::) scope resolution
    (.)  member selection
    (.*) member selection through pointer to function
    (?:) ternary operator
*/
#include <iostream>

class Complex
{
private:
    float real, imaginary;

public:
    Complex() : real(0), imaginary(0) {} // defaul constructor
    Complex(float a, float b)            // parameterized constructor
    {
        real = a;
        imaginary = b;
    }

    Complex operator+(const Complex &com) // referencing the address for memory efficiency
    // and const to prevent from modifying Complex object com
    {
        Complex temp;
        temp.real = real + com.real;
        temp.imaginary = imaginary + com.imaginary;
        return temp;
    }
    void display()
    {
        std::cout << real << " + i" << imaginary << std::endl;
    }
};

int main()
{
    Complex com1(2, 3), com2(4, 5);
    Complex result = com1 + com2;
    result.display();

    return 0;
}