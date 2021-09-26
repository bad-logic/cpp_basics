#include <iostream>

int main()
{
    int num;

    std::cout << "enter number of students: ";

    std::cin >> num;

    float *ptr;

    // allocate memory
    ptr = new float[num]; // rturns the memory location of first item in an array

    std::cout << "enter marks of a students :" << std::endl;

    for (int i = 0; i < num; i++)
    {
        std::cin >> *(ptr + i);
    }

    std::cout << "displaying the marks of the student" << std::endl;

    for (int i = 0; i < num; i++)
    {
        std::cout << *(ptr + i) << std::endl;
    }
    // remove the allocated memory
    delete[] ptr;

    return 0;
}