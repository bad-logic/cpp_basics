/*
    functions: standard library functions and user defined functions
    syntax:
    returnType functionName(parameter1,parameter2,...){
        // function body
        // return statement
    }

    NOTE: function declaration should be before function call
    TYPES:  function with no argument and no return value, 
            example: 
            void greet(){
                std::cout<<"good morning";
                }
            function with no argument but return value,
            example: 
            int greet(){
                return 5;
                }
            function with argument but no return value,
            example: 
            void greet(int num){
                std::cout<<"your number is "<<num;
                }
            function with argument and return value
            example: 
            int greet(int n1,int n2){
                return n1 + n2;
                }

*/
#include <iostream>

// function definition
int sum(int n1, int n2)
{

    return n1 + n2;
}

int main()
{
    // function call
    int total = sum(5, 6);
    std::cout << "5 + 6 = " << total << std::endl;
    return 0;
}