/*
    ENUMERATION 
    syntax: enum enum_name{enum_val1,enum_value2,...}

    Examples:
    enum season {spring, summer, autumn, winter};

    by default spring=0, summer=1, autumn=2, winter=3

    you can change the default value during declaration if needed
    
    Example: enum season { spring = 34, summer = 4, autumn = 9, winter = 32};

*/

#include <iostream>

enum week
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday
};

int main()
{
    week today;
    today = Wednesday;
    std::cout << "Day " << today + 1 << std::endl;
    return 0;
}