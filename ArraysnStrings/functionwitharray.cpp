/*
    syntax: returnType function_name(dataType array_name[size]);
    syntax: returnType function_name(dataType array_name[row_size][col_size]);
    syntax: returnType function_name(dataType array_name[][col_size]);
    specifying the row size in array in optional
*/

#include <iostream>

void print(int arr[3])
{
    for (int i = 0; i < 3; ++i)
    {

        std::cout << arr[i] << std::endl;
    }
}

int main()
{

    int sal_month_in_k[3] = {5, 6, 12};
    print(sal_month_in_k);
    return 0;
}