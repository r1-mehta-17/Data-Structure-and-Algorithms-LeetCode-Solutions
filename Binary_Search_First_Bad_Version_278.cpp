// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 0;
        int end = n;
        int mid = (start + end) / 2;
        while (start <= end) {
            if (isBadVersion(mid) == true && isBadVersion(mid-1) == false) {
                return mid;
            } else if (isBadVersion(mid) == false && isBadVersion(mid+1) == true) {
                return mid + 1;
            } else if (isBadVersion(mid) == true) {
                end = mid - 1;
            } else if (isBadVersion(mid) == false) {
                start = mid + 1;
            }
            // This is done because the value of (start + end) before division by 2 might exceed the value of int allowed memory.
            mid = (start / 2) + (end / 2);
        }
        return mid;
    }
};

/* 
Sample Input :
5
4
Sample Output :
4
*/
