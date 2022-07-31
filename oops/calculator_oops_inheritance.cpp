/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Ans1 : Hybrid Inheritance is used.
    Q2. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Answer is the output.
*/
#include<bits/stdc++.h>
using namespace std;
class simple
{
    protected:
        int x1,y1;
    public:
        void process()
        {
            cout<<"The addition is "<<x1+y1<<endl;
            cout<<"The subtraction is "<<x1-y1<<endl;
            cout<<"The multiplication is "<<x1*y1<<endl;
            cout<<"The division is "<<x1/y1<<endl;
        }
        void set(int a,int b)
        {
            x1=a;
            y1=b;
        }
};

class scientific
{
    protected:
        int x2,y2;
    public:
        void process()
        {
            cout<<"The square root of x is "<<sqrt(x2)<<endl;
            cout<<"The square root of y is "<<sqrt(y2)<<endl;
            cout<<"The cube root of x is  "<<cbrt(x2)<<endl;
            cout<<"The cube root of y is "<<cbrt(y2)<<endl;
        }
        void set(int a,int b)
        {
            x2=a;
            y2=b;
        }
};

class hybrid: public simple,public scientific
{
    public:
        void masterset(int a,int b)
        {
            simple::set(a,b);
            scientific::set(a,b);
            simple::process();
            scientific::process();
        }
};

int main()
{
    int p,q;
    hybrid h;
    cout<<" Enter two values "<<endl;
    cin>>p>>q;

    h.masterset(p,q);
    return 0;
}

/*
OUTPUT : 
Enter two values 
12
20
The addition is 32
The subtraction is -8
The multiplication is 240
The division is 0
The square root of x is 3.4641
The square root of y is 4.47214
The cube root of x is  2.28943
The cube root of y is 2.71442
*/
