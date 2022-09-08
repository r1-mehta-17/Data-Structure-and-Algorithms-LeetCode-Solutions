/*
The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.
You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.
For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.
Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.
*/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> idx;
        for(int i=0;i<nums2.size();i++) {
            if(idx[nums2[i]]==0) idx[nums2[i]] = i;
            else idx[nums2[i]] = max(idx[nums2[i]],i);
        }
        map<int,int>::iterator it;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++) {
            bool found = false;
            int temp = 1e9+7;
            for(it=idx.begin();it!=idx.end();it++) {
                if(nums1[i]==it->first) continue;
                else if (nums1[i] < it->first && idx[nums1[i]] < it->second) {
                    // cout << nums1[i] << " " << idx[nums1[i]] << " " << it->second << " " << it->first << endl;
                    found = true;
                    temp = min(temp,it->second);
                }
                else continue;
            }
            if(found == false) ans.push_back(-1);
            else ans.push_back(nums2[temp]);
        }
        return ans;
    }
};

/*
SAMPLE INPUT :
[4,1,2]
[1,3,4,2]
[2,4]
[1,2,3,4]
SAMPLE OUTPUT :
[-1,3,-1]
[3,-1]
*/
