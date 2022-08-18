/*
Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.
Return the kth positive integer that is missing from this array.
*/

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        map<int,int> map1;
        for(int i=0;i<arr.size();i++) {
            map1[arr[i]]++;
        }
        int count = 0;
        int ans = 0;
        for(int i=1;i<=arr[arr.size()-1]+k;i++){
            if(map1[i]==0) {
                count++;
            }
            if(count == k) {
                ans = i;
                break;
            }
            
        }
        return ans;
    }
};

/*
SAMPLE INPUT :
[2,3,4,7,11]
5
[1,2,3,4]
2
SAMPLE OUTPUT :
9
6
*/
