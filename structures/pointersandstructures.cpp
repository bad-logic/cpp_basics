

#include <iostream>

struct Distance
{
    int feet;
    float inch;
};

int main()
{
    Distance *ptr, d;

    ptr = &d;

    std::cout << "enter feet: ";
    std::cin >> (*ptr).feet;
    std::cout << "enter inch: ";
    std::cin >> (*ptr).inch;

    std::cout << "Displaying Info: " << std::endl;
    std::cout << "Distance = " << (*ptr).feet << " feet " << d.inch << " inches" << std::endl;
    return 0;
}