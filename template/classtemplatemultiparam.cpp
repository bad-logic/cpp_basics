#include <iostream>

template <class T, class M, class I = int> // using int as default if not provided
class MultiParam
{
private:
    T val1;
    M val2;
    I val3;

public:
    MultiParam(T v1, M v2, I v3) : val1(v1), val2(v2), val3(v3){};
    void display()
    {
        std::cout << "val1 = " << val1 << std::endl;
        std::cout << "val2 = " << val2 << std::endl;
        std::cout << "val3 = " << val3 << std::endl;
    }
};
int main()
{
    MultiParam<float, double> multi(1.1, 2.002, 3);
    multi.display();
    MultiParam<float, double, char> multiP(1.1, 2.002, 'R');
    multiP.display();

    return 0;
}