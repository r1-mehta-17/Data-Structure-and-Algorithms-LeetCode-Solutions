#include <bits/stdc++.h>
using namespace std;

class Base {
    protected :
        int a;
    private :
        int b;
};

/*
For a protected member : 
                            Public Derivation   Private Derivation   Protected Derivation
    1. Private members      Not Inherited       Not Inherited        Not Inherited
    2. Protected members    Protected           Private              Protected
    3. Public members       Public              Private              Protected
*/

class Derived : protected Base {
    
};

int main() {
    Base b;
    Derived der;
    // cout << der.a; will not work as a is protected in the base class which is inherited also in protected way.
}
