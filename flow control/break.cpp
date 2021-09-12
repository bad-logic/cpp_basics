/* 
    BREAK statement
    terminates the loop 
    if used inside the nested loops then the inner loop is terminated
    syntax:
    for(initialization;condition;update){
        // code
        if(condition to break){
            break;
        }
        // code
    }
    while(condition){
        // code
        if(condition to break){
            break;
        }
        // code
    }
*/

#include <iostream>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        // break condition
        if (i == 3)
        {
            break;
        }
        std::cout << i << std::endl;
    }

    return 0;
}