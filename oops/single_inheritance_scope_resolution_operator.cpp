#include <bits/stdc++.h>
using namespace std;

class Base {
    int data1;
    public : 
        int data2;
        void setdata();
        int getdata1();
        int getdata2();
};
// :: is the scope resolution operator. It is used to qualify hidden names so that you can still use them.
// You can also use the class scope operator to qualify class names or class member names. If a class member name is hidden, you can use it by qualifying it with its class name and the class scope operator.
void Base :: setdata(void) {
    data1 = 10;
    data2 = 20;
}
int Base :: getdata1() {
    return data1;
}
int Base :: getdata2() {
    return data2;
}

class Derived : public Base {
    int data3;
    public :
        void process();
        void display();
};
void Derived :: process() {
    data3 = data2 * getdata1();
}
void Derived :: display() {
    // getdata1() is used to print the value of data1
    cout << "Value of data 1 is : " << getdata1() << endl;
    // although getdata2() is not used because data2 is a public member of the base class and base class is publically inherited to the derived class.
    cout << "Value of data 2 is : " << data2 << endl;
    // data3 is also a public member of 
    cout << "Value of data 3 is : " << data3 << endl;
}

int main() {
    Derived der;
    der.setdata();
    der.process();
    der.display();
}
