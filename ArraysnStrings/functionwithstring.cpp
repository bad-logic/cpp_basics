#include <iostream>

void display(char *);
void display(std::string);

int main()
{
    std::string str1;
    char str2[100];

    std::cout << "Enter first string : ";
    getline(std::cin, str1);

    std::cout << "Enter second string : ";
    std::cin.get(str2, 100, '\n');
    display(str1); // triggers string s
    display(str2); // triggers char s[]
    return 0;
}

void display(char s[])
{
    std::cout << "char s[] triggered : " << s << std::endl;
}

void display(std::string s)
{
    std::cout << "string s triggered : " << s << std::endl;
}