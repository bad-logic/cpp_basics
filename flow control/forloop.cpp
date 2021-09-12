// FOR LOOP

/*
SYNTAX: for(initialization;condition;update)
initialization - initializes variables and is executed only once
condition - if true, the body of for loop is executed
if false, the for loop is terminated
update - updates the value of initialized variables and again checks the condition
*/

#include <iostream>

int main()
{
    int sum = 0;
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 1; i <= 10; ++i)
    {
        sum += i;
    }
    std::cout << "sum of first 10 natural number is " << sum << std::endl;
    for (int n : num_array)
    {
        std::cout << n << std::endl;
    }
    return 0;
}