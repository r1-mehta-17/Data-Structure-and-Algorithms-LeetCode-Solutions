// This is the brute force approach and this problem can also be solved using binary search method. TIME COMPLEXITY : O(N)

class Solution {
public:
    int arrangeCoins(int n) {
        int i = 1;
        int temp = n;
        while (n > 0) {
            n -= i;
            if (n < 0) {
                break;
            }
            i = i + 1;
        }
        return i - 1;
    }
};

/* SAMPLE INPUT :
5
SAMPLE OUTPUT :
2
*/


// Given below is the binary search approach. This is much more faster than the brute for approach. TIME COMPLEXITY : O(LOG(N))

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
