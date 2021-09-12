// do while loop
/*
    do while is a vatiant of while loop. the only difference is that the body of do while loop is executed
    at least once before termination
    SYNTAX:
    do{}while(condition)
*/

#include <iostream>

int main()
{
    int i = 1;
    do
    {
        std::cout << i << std::endl;
        ++i;
    } while (i <= 5);
    return 0;
}
