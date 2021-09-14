/*
    two function with same name can co-exists until and unless they have
    different number of parameters or types 
    int test(){}
    int test(int a){},float test(float a){} overloading with different types of parameters
    int test(int a){},int test(int a,int b){} overloading with different number of parameters
    int test(int a, int b){}
    int test(float a){}
*/

#include <iostream>

int add(int a, int b)
{
    return a + b;
}
void add()
{
    std::cout << "sum = " << 5 + 6 << std::endl;
}
int main()
{
    std::cout << "integer sum = " << add(5, 6) << std::endl;
    add();
    return 0;
}