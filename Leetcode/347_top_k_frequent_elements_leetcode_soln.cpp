/*
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.
*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m1;
        for(int i=0;i<nums.size();i++) {
            m1[nums[i]]++;
        }
        map<int,int> :: iterator it=m1.begin();
        priority_queue<pair<int,int>> q;
        for(;it!=m1.end();it++) {
            pair<int,int> p = {it->second,it->first};
            q.push(p);
        }
        vector<int> ans;
        while(k--) {
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};

/*
SAMPLE INPUT :
[1,1,1,2,2,3]
2
[1]
1
SAMPLE OUTPUT :
[1,2]
[1]
*/
