/*
You are given two non-increasing 0-indexed integer arrays nums1 and nums2.
A pair of indices (i, j), where 0 <= i < nums1.length and 0 <= j < nums2.length, is valid if both i <= j and nums1[i] <= nums2[j]. The distance of the pair is j - i.
Return the maximum distance of any valid pair (i, j). If there are no valid pairs, return 0.
An array arr is non-increasing if arr[i-1] >= arr[i] for every 1 <= i < arr.length.
*/

class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxi = 0;
        for(int i=0;i<nums1.size();i++){
            int l=i;
            int r=nums2.size()-1;
            while(l<=r) {
                int mid = l+((r-l)/2);
                if(nums2[mid]>=nums1[i]) l=mid+1;
                else r=mid-1;
            }
            maxi=max(maxi,l-i-1);
        }
        return maxi;
    }
};

/*
SAMPLE INPUT :
[55,30,5,4,2]
[100,20,10,10,5]
[2,2,2]
[10,10,1]
[30,29,19,5]
[25,25,25,25,25]
SAMPLE OUTPUT :
2
1
2
*/
