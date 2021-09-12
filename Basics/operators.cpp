// OPERATORS

/*  ARITHMETIC OPERATORS =>
    Addition +,
    Substraction -,
    Multiplication *,
    Division /,
    Modulo Operation (Remainder after division) %
*/

/*  ASSIGNMENT OPERATORS
    = : a = b
    += : a += b : a = a + b
    -= : a -= b : a = a - b
    *= : a *= b : a = a * b
    /= : a /= b : a = a / b
    %= : a %=s b : a = a % b
*/

/*  RELATIONAL OPERATORS
    is equal to ==,
    not equal to !=,
    greater than >,
    less than <,
    greater than or equal to >=,
    less than or equal to <=
*/

/*  LOGICAL OPERATORS
    Logical AND &&
    Logical OP ||
    Logical  NOT !
*/

/*  BITWISE OPERATORS
    BINARY AND &
    BINARY OR |
    BINARY XOR ^
    BINARY 1's COMPLIMENT ~
    BINARY LEFT SHIFT <<
    BINARY RIGHT SHIFT >>
*/

/*  OTHER OPERATORS
    sizeof returns size of data type
    ?= returns value based on the condition (ternary operator)
    & represents memory address of operand &num1 => address of num1
    . accesses members of struc variables or class objects
    -> used with pointers to access the class or struct variables
    << prints the output value
    >> gets the input value
*/

#include <iostream>
int main()
{
    int a, b;
    a = 5;
    b = 3;

    // ARITHMETIC OPERATORS
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    std::cout << "a % b = " << a % b << std::endl;
    // ASSIGNMENT OPERATORS
    std::cout << "a += b = " << (a += b) << std::endl;
    // RELATIONAL OPERATORS
    std::cout << "a != b = " << (a != b) << std::endl;
    // LOGICAL OPERATORS
    std::cout << "(3 == 5) || (3 > 5) = " << ((3 == 5) || (3 > 5)) << std::endl;

    std::cout << "sizeof (b) = " << sizeof(b) << std::endl;
    std::cout << "sizeof (int) = " << sizeof(int) << std::endl;
    std::cout << "memory address of b = " << &(b) << std::endl;

    return 0;
}