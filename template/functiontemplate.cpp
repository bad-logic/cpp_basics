/*
    SYNTAX:
    template<typename T>
    T functionName(T param1,T param2,...){}
*/

#include <iostream>
template <typename T>
T add(T num1, T num2)
{
    return num1 + num2;
}
int main()
{
    std::cout << "1 + 2 = " << add<int>(1, 2) << std::endl;
    std::cout << "99.88 + 11.112 = " << add<float>(99.88, 11.112) << std::endl;
    return 0;
}
