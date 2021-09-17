/*
    syntax: dataType array_name[row_size][col_size] // 2d
    syntax: dataType array_name[x_size][y_size][z-size] // 3d

    example: int array[2][3] = {{1,2,3}.{2,5,6}};
*/

#include <iostream>

int main()
{
    const size_t row = 2;
    const size_t col = 3;
    int arr[row][col] = {{1, 2, 3}, {2, 5, 6}};
    // using nested for loops
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            std::cout << "arr[" << i + 1 << "][" << j + 1 << "] = " << arr[i][j] << std::endl;
        }
    }

    return 0;
}