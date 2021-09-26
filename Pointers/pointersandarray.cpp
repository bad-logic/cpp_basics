#include <iostream>

int main()
{
    int *ptr, arr[5]; // arr is in itself a pointer pointing
    // to the memory location of a first element by default
    ptr = &arr[0];
    // ptr = arr;  // same as &arr[0]

    std::cout << ptr << std::endl;     // address of arr[0]
    std::cout << ptr + 1 << std::endl; // address of arr[1]
    return 0;
}