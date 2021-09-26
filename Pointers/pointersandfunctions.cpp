/*
    pass by reference
    instead of passing the actual values to a function, the reference to the values are passed to
    the functions
*/

#include <iostream>

void swap(int &n1, int &n2)
{
    int temp;
    temp = n2;
    n2 = n1;
    n1 = temp;
}

int main()
{
    int num1 = 5, num2 = 6;
    std::cout << "num1 = " << num1 << " num2 = " << num2 << std::endl;
    swap(num1, num2);

    std::cout << "num1 = " << num1 << " num2 = " << num2 << std::endl;

    return 0;
}