/*
    builtin function are library functions that are already written
    we just need to include the header file to use them
*/

#include <iostream>
#include <cmath>

int main()
{
    int squareRoot = sqrt(25);
    std::cout << "square root of 25 is " << squareRoot << std::endl;
    return 0;
}