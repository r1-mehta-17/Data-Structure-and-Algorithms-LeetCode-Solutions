/*
We are playing the Guess Game. The game is as follows:
I pick a number from 1 to n. You have to guess which number I picked.
Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.
You call a pre-defined API int guess(int num), which returns three possible results:
 - -1: Your guess is higher than the number I picked (i.e. num > pick).
 - 1: Your guess is lower than the number I picked (i.e. num < pick).
 - 0: your guess is equal to the number I picked (i.e. num == pick).
Return the number that I picked.
*/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l=0;
        int r=n;
        int mid = (l+r)/2;
        int ans=0;
        while(l<=r) {
            mid = (l+r)/2;
            if(guess(mid) == 1) {
                l=mid+1;
            } else if(guess(mid)==-1) {
                r=mid-1;
            } else if(guess(mid) == 0){
                ans = mid;
                break;
            }
        }
        return ans;
        
    }
};

/*
SAMPLE INPUT : 
10
6
1
1
2
1
SAMPLE OUTPUT : 
6
1
1
*/
