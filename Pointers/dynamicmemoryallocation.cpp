/*
    c++ allows allocation of memory in runtime known as dynamic memory allocation.

    In other programming languages, the compiler automatically manages the memories allocated to variables
    but it is not the case in c++.

    In c++ we need to manually deallocated the allocated memory after memory use is completed.

    we can do so by using the new and delete keywords.

    new keyword returns the address of the newly allocated memory so we need to use pointer

    syntax: pointer_variable = new dataType;

    delete keyword deallocates the occupied memory by the variable.
    syntax: delete pointer_variable;

*/

// DYNAMIC MEMORY ALLOCATION

#include <iostream>

int main()
{
    int *ptr;
    float *fptr;

    // dynamic memory allocation
    ptr = new int;
    fptr = new float;

    // store value in the newly allocated memory
    *ptr = 7;
    *fptr = 54.89;

    // display results
    std::cout << "*ptr " << *ptr << std::endl;
    std::cout << "*fptr " << *fptr << std::endl;

    // deallocated the memory after its use is completed
    delete ptr;
    delete fptr;

    return 0;
}