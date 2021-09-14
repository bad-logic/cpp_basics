/*
    function declaration should be made before function call
    in case you want to define a function after a function call then we need to use
    function prototype
*/

#include <iostream>

// function prototype
void add(int, int);

int main()
{
    // function call
    add(5, 3);
    return 0;
}

// function definition
void add(int n1, int n2)
{
    std::cout << "sum = " << n1 + n2 << std::endl;
}