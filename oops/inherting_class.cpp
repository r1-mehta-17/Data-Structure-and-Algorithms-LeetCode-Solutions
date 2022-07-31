#include <bits/stdc++.h>
using namespace std;

// Base Class
class Employee {
    public : 
        int id;
        float salary;
    public : 
        Employee(int inpId, int inpsal) {
            id = inpId;
            salary = inpsal;
        }
        // Default constructor is needed whenever inheritance is taking place
        Employee() {}
};

/*
Derived Class syntax :
class {{derived-class-name}} : visibility-mode {{base-class-name}} {
    class members,methods,etc;
};
//visibility mode : private, public, protected
Note : 
1. Default visibility mode is private
2. Private Visibility mode : public members of the base members become the private members of the derived class.
3. Public Visibility mode : public members of the base members become the public members of the derived class.
4. Pirvate members are never inherited. 
*/
 
// Derived privately from base class Employee
class Programmer : Employee {
    public :
        Programmer (int inpId, int inpsal) {
            id = inpId;
            salary = inpsal;
        }
        int languageCode = 7;
        // We need this method to print the members id and salary because we didn't specify the visibility mode of the inherited class EMployee and by default it is private. So, all the members of the inherited class Employee are inherited privately, thus, we require a funciton to print them.
        void getdata(){
            cout << id << endl;
            cout << salary << endl;
        }
};
 
int main() {
    Employee aarekh(1,101), kanav(2,101);
    cout << aarekh.id << " : " << aarekh.salary << endl;
    cout << kanav.id << " : " << kanav.salary << endl;
    Programmer ansh(3,100), ayush(4,100);
    cout << "Language Code : " << ansh.languageCode << " " << ayush.languageCode << endl;
    ansh.getdata();
    ayush.getdata();
    return 0;
}

/*
OUTPUT : 
1 : 101
2 : 101
Language Code : 7 7
3
100
4
100
*/
