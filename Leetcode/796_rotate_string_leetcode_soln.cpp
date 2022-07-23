/*
Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
A shift on s consists of moving the leftmost character of s to the rightmost position.
For example, if s = "abcde", then it will be "bcdea" after one shift.
*/

class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp = s;
        while(s!=goal) {
            char t = s[0];
            s.erase(0,1);
            s.push_back(t);
            if(s==temp) {
                return false;
            }
        }
        if(s == goal) {
            return true;
        }
        return false;
    }
};

/*
SAMPLE INPUT :
"abcde"
"cdeac"
SAMPLE OUTPUT : 
false
*/
