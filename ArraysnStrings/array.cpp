/*
    syntax: datatype array_name[size]

*/

#include <iostream>

int main()
{
    int arr[5];
    int num_arr[] = {1,
                     2,
                     3,
                     4,
                     5};

    for (int i = 0; i < 3; i++)
    {
        std::cout << "enter number" << i + 1 << std::endl;
        std::cin >> arr[i];
    }
    for (const int &n : arr) // using &n to reference the memory address of elements rather than using
    // just n which copies the value from array index to n which is not so memory friendly
    // using &n is memory efficient
    // also using const as to not accidentally change array values
    {
        std::cout << n << std::endl;
    }

    for (int &n : num_arr)
    {
        n = 6; // changes all values in num_arr to 6
        std::cout << n << std::endl;
    }
    return 0;
}