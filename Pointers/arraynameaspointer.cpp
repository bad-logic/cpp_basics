/*
    since array variable points to the first element of the array it can be used as a pointer
    
    arr[i] = *(arr + i)
*/
#include <iostream>

int main()
{
    float arr[5];
    std::cout << "enter information :" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "enter arr[" << i + 1 << "]" << std::endl;
        std::cin >> *(arr + i);
    }
    std::cout << "displaying information" << std::endl;
    for (const int &i : arr)
    {
        std::cout << i << std::endl;
    }
    std::cout << "displaying information using pointer" << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << *(arr + i) << std::endl;
    }

    return 0;
}