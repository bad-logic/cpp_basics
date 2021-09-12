/*
    GOTO STATEMENT
    used to alter the normal sequence of program 
    execution by transferring the program control to another part of the program

    syntax: goto label;
*/

#include <iostream>

int main()
{
    float num, average, sum = 0.0;
    int i, n;

    std::cout << "enter the maximum number of i/ps: " << std::endl;
    std::cin >> n;
    for (i = 1; i <= n; ++i)
    {
        std::cout << "Enter n" << i << ": " << std::endl;
        std::cin >> num;

        if (num < 0.0)
        {
            // transfer the control to label end
            goto end;
        }
        sum += num;
    }
end:
    average = sum / (i - 1);
    std::cout << "\nAverage = " << average;
    return 0;
}