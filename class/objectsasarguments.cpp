/*
    we can pass objects to the function similar to passing regular arguments

*/

#include <iostream>

class Student
{
public:
    double marks;
    Student(double m)
    {
        marks = m;
    }
};

void calculateAverage(Student s1, Student s2)
{
    double average = (s1.marks + s2.marks) / 2;
    std::cout << "Average marks = " << average << std::endl;
}

Student createStudent()
{
    Student stdnt(4);
    stdnt.marks = 88.56;

    return stdnt; // returns object
}

int main()
{
    Student s1(34);
    Student s2 = createStudent();

    // passing object as argument
    calculateAverage(s1, s2);

    return 0;
}