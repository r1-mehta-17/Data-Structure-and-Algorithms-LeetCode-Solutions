// STRINGSTREAM : in order to include this in your code you can use 2 header files : sstream or bits/stdc++.h.
// It allows you to associate to a string object as if it were a stream (like cin). 

#include <bits/stdc++.h>
using namespace std;
int main() {
    int k = 156;
    stringstream ss;
    ss << k;
    string s;
    ss >> s;
    cout << s << endl;
}

// OUTPUT : 156
