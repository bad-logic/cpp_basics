/*
    member functions of friend class becomes friend functions
*/

#include <iostream>

class B;

class A
{
private:
    int num;
    friend class B;

public:
    A() : num(12){}; // constructor initialising num to 12
};

class B
{
private:
    int num1;

public:
    B() : num1(22){};
    int add()
    {
        A objA;
        return objA.num + num1; // can access private variable num
    }
};

int main()
{
    B objB;
    std::cout << "Sum = " << objB.add() << std::endl;
    return 0;
}
/*
    Since Class B is a friend class, we can access all members of Class A from inside Class B.
    However, we cannot access members of Class B from inside Class A. It is because friend relation 
    in C++ is only granted, not taken.
*/