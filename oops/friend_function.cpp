#include<bits/stdc++.h>
using namespace std;

// Example of complex number : 1 + 4i

class Complex{
    int a,b;
    public :
        void setNumber(int n1, int n2) {
            a = n1;
            b = n2;
        }
        // Declaring the function which accesses the private data members of the class a friend makes them accessible to that function
        friend Complex sumComplex(Complex o1, Complex o2);
        void printNumber() {
            cout << "Your number is " << a << " + " << b << "i" << endl;
        }
};

Complex sumComplex(Complex o1, Complex o2) {
    Complex o3;
    o3.setNumber(o1.a+o2.a,o1.b+o2.b);
    return o3;
}

int main() {
    Complex c1,c2,c3;
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    c1.printNumber();
    c2.printNumber();
    c3 = sumComplex(c1,c2);
    c3.printNumber();
}

/*
OUTPUT : 
Your number is 1 + 4i
Your number is 5 + 8i
Your number is 6 + 12i
*/
