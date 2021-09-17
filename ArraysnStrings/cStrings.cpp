/*
    c-strings: terminated with null character \0
    syntax: char str[] = "string";
    syntax: char str[] = {'s','t','r','i','n','g','\0'};
    syntax: char str[7] = {'s','t','r','i','n','g','\0'};

*/

#include <iostream>

int main()
{
    char name[20];
    char line[100];

    std::cout << "enter your name: ";
    std::cin >> name;
    std::cout << "name : " << name << std::endl;

    // std::cout << "Describe yourself :";
    // std::cin.get(line, 100);
    // std::cout << "description : " << line << std::endl;

    return 0;
}