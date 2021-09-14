/*
    Function that calls itself until some conditions is met
*/

#include <iostream>

int fib(unsigned int n) // take only positive number as argument
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n;
    std::cout << "enter positive number to get fib(number) :" << std::endl;
    std::cin >> n;
    std::cout << "fib(" << n << ") = " << fib(n) << std::endl;
    return 0;
}