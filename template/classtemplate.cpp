#include <iostream>
template <class M>
class Calculator
{
private:
    M num1, num2;

public:
    Calculator(M n1, M n2) : num1(n1), num2(n2){};
    void displayResult()
    {
        std::cout << num1 << " + " << num2 << " = " << add() << std::endl;
        std::cout << num1 << " - " << num2 << " = " << subtract() << std::endl;
        std::cout << num1 << " * " << num2 << " = " << multiply() << std::endl;
    }
    M add()
    {
        return num1 + num2;
    }
    M subtract()
    {
        return num1 - num2;
    }
    M multiply()
    {
        return num1 * num2;
    }
};

int main()
{
    Calculator<int> cal1(4, 5);
    Calculator<float> floatCal(4.4, 5.5);
    cal1.displayResult();
    floatCal.displayResult();
    return 0;
}