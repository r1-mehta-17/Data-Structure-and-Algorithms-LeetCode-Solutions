/*
You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
Given the integer n, return the number of complete rows of the staircase you will build.
*/

class Solution {
public:
    int arrangeCoins(int n) {
        int l=0;
        long long r=sqrt(1LL*2*n)+1;
        
        while(l<=r){
            int mid=(l+r)/2;
            
            if((1LL*mid*(mid+1))/2<=n){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        
        return l-1;
    }
};

/*
SAMPLE INPUT :
5
8
SAMPLE OUTPUT :
2
3
*/
