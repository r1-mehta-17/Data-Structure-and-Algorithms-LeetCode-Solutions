/*
Given a non-negative integer x, compute and return the square root of x.
Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.
Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.
*/

class Solution {
public:
    int mySqrt(int x) {
        if(x <= 1){
            return x;
        }
        int start = 2, end = x, middle;
        while(start <= end){
            middle = start + (end - start)/2;
            if(middle == x/middle){
                return middle;
            }
            if(middle < x/middle){
                start = middle + 1;
            } else {
                end = middle - 1;
            }
        }
        if(start > x/start){
            return start - 1;
        }
        return start;
    }
};

/*
SAMPLE INPUT : 
4
8
SAMPLE OUTPUT :
2
2
*/
