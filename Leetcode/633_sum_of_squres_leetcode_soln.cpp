/*
Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.
*/

class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0) return true;
        map<long long,int> map1;
        for(int i=0;i<=sqrt(c);i++) {
            map1[i*i]++;
        }
        for(int i=0;i<sqrt(c);i++) {
            if(map1[c-i*i]>=1) return true;
        }
        return false;
    }
};

/*
SAMPLE INPUT :
5
3
SAMPLE OUTPUT :
true
false
*/
