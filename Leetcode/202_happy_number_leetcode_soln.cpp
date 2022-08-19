/*
Write an algorithm to determine if a number n is happy.
A happy number is a number defined by the following process:
 - Starting with any positive integer, replace the number by the sum of the squares of its digits.
 - Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
 - Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.
*/

class Solution {
public:
    int sum_of_squares(int num) {
        int sum=0;
        while(num){
            int x=num%10;
            sum+=x*x;
            num/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        if(n<=0) return false;
        set<int> set1;
        while(set1.find(n)==set1.end()) {
            set1.insert(n);
            n = sum_of_squares(n);
            if(n==1) return true;
        }
        return false;
    }
};

/*
SAMPLE INPUT :
19
2
SAMPLE OUTPUT :
true
false
*/
