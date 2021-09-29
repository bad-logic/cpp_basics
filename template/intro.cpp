/*
    features that allows us to write generic programs
    two types:
    function templates
    class templates
*/

#include <iostream>
// CLASS TEMPLATE
template <class T>
class Number
{
private:
    T num;

public:
    Number(T n) : num(n) {} // constructor

    T getNum()
    {
        return num;
    }
};

int main()
{
    Number<int> numberInt(5);
    Number<float> numberFloat(6.7);

    std::cout << "integer = " << numberInt.getNum() << std::endl;
    std::cout << "float = " << numberFloat.getNum() << std::endl;
    return 0;
}