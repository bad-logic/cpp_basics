/*

    changing the way operator works for user defined types like objects and structures

    doesnot work for fundamental data type like int, float, char

    Syntax: returnType operator symbol (args){}


    unary operators works on a single operand
    
    ++ operator overloading in a Count object
*/

#include <iostream>

class Count
{
private:
    int value;

public:
    Count() : value(5) {} // inititalize the count to 5 with constructor

    // overload ++ when used as prefix
    Count operator++()
    {
        Count temp;
        temp.value = ++value; // ++ increases the value and returns increased value
        return temp;
    }

    // overload ++ when used as postfix
    Count operator++(int)
    {
        Count temp;
        temp.value = value++; // returns the value and then increases the value
        return temp;
    }
    void display()
    {
        std::cout << "Count : " << value << std::endl;
    }
};

int main()
{
    Count count1, result;

    result = ++count1;
    result.display(); // 6

    count1.display(); // 6

    result = count1++;
    result.display(); // 6

    count1.display(); // 7

    return 0;
}