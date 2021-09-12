/*
    SWITCH STATEMENT
    helps to execute a block of code based on options or alternatives
    in case of no matches among the alternatives the default block is executed
    syntax:
    switch(expression){
        case case1:
            //code
            break;
        case case2:
            //code
            break;
        default:
            //code
    }
*/
#include <iostream>

int main()
{
    char oper;
    float num1, num2;
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> oper;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> num1 >> num2;

    switch (oper)
    {
    case '+':
        std::cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        std::cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        std::cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        std::cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    default:
        // unmatched case
        std::cout << "Error! Invalid operator";
        break;
    }

    return 0;
}