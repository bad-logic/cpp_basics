/*
  every variable in c++ has two features: type and storage class  
  type : int, float, ...
  storage class controls two different properties of a variable lifetime and the scope
  lifetime: how long variable can exist
  scope: which part of the program can access it
  Based on the storage class there are four types of variables:
   local variable(automatic variable): defined inside a function and can be only accessed within that function,

   global variable : defined outside all functions. can be accessed inside whole program ,

   static local variable : exists inside a function but lifetime starts when the function is called and ends when program ends,

   register variable : keyword register is used to declare, they are similar to automatic/local variables and exists inside a 
   particular function. they are supposed to be faster than the local variables
   on encoutering a register variable by a program, it stores the variable in processor's register rather than
   memory. this makes it faster than the local variables.
   DEPRECATED in C++11

   thread local storage: mechanism allocated variables such that there is only one instance of that variable living per thread
*/

#include <iostream>
// global variable
bool global = true;

void counter()
{
    // static local variable
    static int count = 0;
    // local variable(automatic variable) "auto" keyword is also used to define local variable but has
    // example: auto char symbol = '='
    // but auto keyword has different meaning after C++11
    char symbol = '=';
    ++count;
    std::cout << "global variable = " << global << std::endl;
    std::cout << "counter value " << symbol << " " << count << std::endl;
}

int main()
{
    std::cout << "global variable = " << global << std::endl;
    counter();
    counter();
    return 0;
}