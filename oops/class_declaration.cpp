#include <bits/stdc++.h>
using namespace std;

// Base Class
class Employee {
    //class attributes have to be made public before they are being printed in the emain function
    public : 
        int id;
        float salary;
    public : 
        //constructor : used to initialize the elements/attributes of the class.
        Employee(int inpId, int inpsal) {
            id = inpId;
            salary = inpsal;
        }
};

/*
Derived Class syntax :
class {{derived-class-name}} : visibility-mode {{base-class-name}} {
    class members,methods,etc;
};
//visibility mode : private, public, protected
*/

int main() {
    // creating 2 object of class employees
    Employee aarekh(1,100), kanav(2,101);
    cout << aarekh.id << " : " << aarekh.salary << endl;
    cout << kanav.id << " : " << kanav.salary << endl;
    return 0;
}

/*
OUTPUT :
1 : 100
2 : 101
*/
