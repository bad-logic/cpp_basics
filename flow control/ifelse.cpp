

#include <iostream>

int main()
{
    int number;
    std::cout << "enter a number: ";
    std::cin >> number;
    if (number > 0)
    {
        std::cout << "number is positive" << std::endl;
    }
    else if (number == 0)
    {
        std::cout << "number is zero" << std::endl;
    }
    else
    {
        std::cout << "number is negative" << std::endl;
    }
    return 0;
}