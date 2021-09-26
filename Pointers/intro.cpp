/*
    pointers are the variables that store the memory addresses of other variables

    Example: int value = 5; then &value will give its memory address

    syntax: int* intptr; pointer of int type
*/

#include <iostream>

int main()
{
    int var = 5;
    int *varPointer;

    varPointer = &var;
    // varPointer=&var, *varPointer=var, varPointer!=var,  *varPointer!=&var

    std::cout << "value of var is " << var << std::endl;
    std::cout << "address of var is " << &var << std::endl;
    std::cout << "address of var as stored in pointer varPointer " << varPointer << std::endl;
    std::cout << "content inside address is " << *varPointer << std::endl;

    // changing the value pointed by pointers
    *varPointer = 67;

    std::cout << "value of var is " << var << std::endl;
    std::cout << "address of var is " << &var << std::endl;
    std::cout << "address of var as stored in pointer varPointer " << varPointer << std::endl;
    std::cout << "content inside address is " << *varPointer << std::endl;

    return 0;
}