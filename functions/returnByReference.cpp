/*
    in most function you have seen a function returning a value
    but you can also a return a reference(memory address) of a value from a function
*/

#include <iostream>

// global variable
int num;

// function declaration
/*
    this function will return a memory address/reference of integer type variable
    to which you can later on assign some integer value example reference() = 7
    if you try to return some constant or local variable then it will throw error
    because that reference is limited within the function scoper and cannot be accessed outside
    those function
*/
int &reference();

int main()
{
    std::cout << "before the value of num is " << num << std::endl;
    reference() = 7;
    std::cout << "after the value of num is " << num << std::endl;
    return 0;
}

int &reference()
{
    return num; // will return the reference/memory address of num variable
}