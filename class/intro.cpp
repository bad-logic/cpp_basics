/*
    syntax:
    class class_name{
        // some data
        // some functions
    };
    class access modifiers
    public: accessbile from anywhere
    private(default): accessible from within the class and by friend functions and friend classes
    protected: accessed from within and derived class

    Specifiers |	Same Class     |  Derived Class | Outside Class
    private	   |        Yes	       |    No	        |   No
    protected  |        Yes	       |    Yes	        |   No
    public	   |        Yes	       |    Yes	        |   Yes

*/

#include <iostream>

class Room
{
public:
    double length, breadth, height;

    double calculcateArea()
    {
        return length * breadth;
    }

    double calculateVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    // create Room objects
    Room room1;
    room1.length = 5;
    room1.breadth = 6;
    room1.height = 8;

    std::cout << "area = " << room1.calculcateArea() << std::endl;
    std::cout << "volume = " << room1.calculateVolume() << std::endl;
    return 0;
}