/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> map1;
        for(int i=0;i<nums.size();i++) {
            map1[nums[i]]++;
        }
        map<int,int> :: iterator it = map1.begin();
        for(;it!=map1.end();it++) {
            if(it->second == 2) {
                continue;
            } else if(it->second==1) {
                break;
            }
        }
        return it->first;
    }
};

/*
SAMPLE INPUT : 
[2,2,1]
[4,1,2,1,2]
[1]
SAMPLE OUTPUT :
1
4
1
*/
