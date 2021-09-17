/*
    C++ strings
    syntax: string str;

*/

#include <iostream>

int main()
{

    std::string str;

    std::cout << "enter a string : ";
    getline(std::cin, str);
    std::cout << "you entered : " << str << std::endl;
    return 0;
}