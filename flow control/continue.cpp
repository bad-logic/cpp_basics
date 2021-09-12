/*
    CONTINUE STATEMENT
    it skips the current iteration and moves the control of the program to the next interation
    if used inside the nested loops then skips the iteration of inner loop
    syntax:
    for(initialization;condition;update){
        // code
        if(condition to continue){
            continue;
        }
        // code
    }
    while(condition){
        // code
        if(condition to continue){
            continue;
        }
        // code
    }
*/

#include <iostream>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        // condition to continue
        if (i == 3)
        {
            continue;
        }

        std::cout << i << std::endl;
    }

    return 0;
}