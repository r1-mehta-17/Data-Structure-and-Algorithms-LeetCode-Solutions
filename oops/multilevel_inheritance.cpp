#include <iostream>
using namespace std;

// Base class : Level 1
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

// Derived Class : Level 2
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

// Derived from derived class : Level 3
class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};

/*
Inheritance :
Student -> Exam -> Result
*/
int main()
{
    Result r1;
    r1.set_roll_number(15);
    r1.set_marks(94.0, 90.0);
    r1.display_results();
    return 0;
}

/*
OUTPUT :
The roll number is 15
The marks obtained in maths are: 94
The marks obtained in physics are: 90
Your result is 92%
*/
