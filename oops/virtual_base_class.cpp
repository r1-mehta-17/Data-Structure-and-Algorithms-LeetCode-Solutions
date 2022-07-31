#include<bits/stdc++.h>
using namespace std;
/*
Inheritance :
student --> Test
student --> sports
test --> result
sports --> result
*/
class student{
    protected:
        int roll_no;
    public :
        void set_number(int a) {
            roll_no = a;
        }
        void print_number(void) {
            cout << "Your roll number is " << roll_no << endl;
        }
};
class test : virtual public student {
    protected :
        float maths, physics;
    public :
        void set_marks(float m1, float m2) {
            maths = m1;
            physics = m2;
        }
        void print_marks(void) {
            cout << "Your result is here : " << endl
                << "Maths : " << maths << endl
                << "Physics : " << physics << endl;
        }
};
class sports : virtual public student {
    protected :
        float score;
    public :
        void set_score(float sc) {
            score = sc;
        }
        void print_score(void) {
            cout << "Your PT score is " << score << endl;
        }
};
class result : public test, public sports {
    private :
        float total;
    public :
        void display(void) {
            total = physics + maths + score;
            print_number();
            print_marks();
            print_score();
            cout << "Your total score is " << total << endl;
        }
};
int main() {
    result aarekh;
    aarekh.set_number(420);
    aarekh.set_marks(99.5,99);
    aarekh.set_score(10);
    aarekh.display();
    return 0;
}
