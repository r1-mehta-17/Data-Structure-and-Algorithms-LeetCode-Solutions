/*
Given an integer n, return true if it is a power of three. Otherwise, return false.
An integer n is a power of three, if there exists an integer x such that n == 3x.
*/

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        while(n>1) {
            if(n%3!=0) return false;
            n/=3;
        }
        return true;
    }
};

/*
SAMPLE INPUT :
27
0
9
SAMPLE OUTPUT :
true
false
true
*/
