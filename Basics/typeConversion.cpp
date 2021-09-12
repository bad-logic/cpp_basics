/*
 implicit conversion
 explicit conversion(type casting) => cast notation,Function notation, type conversion operators

 DATA LOSS DURING CONVERSION
 data loss increases while converting from larger data type to smaller data type
 long double->double->float->long->int->short->char => data loss increases
 char->short->int->long->float->double->long double => no data loss
*/

#include <iostream>

int main()
{
    int numi = 78;
    double numd;
    int numin;
    double numdouble = 9.89;

    int number1 = 27;
    double number2;

    int number3 = 26;
    double number4;

    // implicit conversion
    // assign int to double
    numd = numi;
    // assign double to int
    numin = numdouble;

    // explicit conversion
    // c-style type casting (cast notation)
    number2 = (double)number1;
    // c++ style type casting (function notation)
    number4 = double(number3);
    // type conversion operator
    // static_cast, dynamic_cast, const_cast, reinterpret_cast

    std::cout << "numi = " << numi << " type: " << typeid(numi).name() << std::endl;
    std::cout << "numd = " << numd << " type: " << typeid(numd).name() << std::endl;
    std::cout << "numdouble = " << numdouble << " type: " << typeid(numdouble).name() << std::endl;
    std::cout << "numin = " << numin << " type: " << typeid(numin).name() << std::endl;
    std::cout << "number1 = " << number1 << " type: " << typeid(number1).name() << std::endl;
    std::cout << "number2 = " << number2 << " type: " << typeid(number2).name() << std::endl;
    std::cout << "number3 = " << number3 << " type: " << typeid(number3).name() << std::endl;
    std::cout << "number4 = " << number4 << " type: " << typeid(number4).name() << std::endl;
    return 0;
}