/*
    we can provide a default values for a function in case it is not provided
    or to make the argument optional

    default parameters must be at the last of the function argument list

*/

#include <iostream>

void symbol(char = '$');

void display(int count = 5)
{
    std::cout << "number is " << count << std::endl;
}
int main()
{
    symbol('#'); // #
    symbol();    // $
    display();   // 5
    display(10); // 10
    return 0;
}

void symbol(char sym)
{
    std::cout << sym << std::endl;
}