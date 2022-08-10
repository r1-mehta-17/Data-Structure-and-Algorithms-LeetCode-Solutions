/*
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> map1;
        for(int i=0;i<nums.size();i++) {
            map1[nums[i]]++;
        }
        map<int,int> :: iterator it = map1.begin();
        for(;it!=map1.end();it++){
            if(it->second > nums.size()/2) {
                break;
            }
        }
        return it->first;
    }
};

/*
SAMPLE INPUT : 
[3,2,3]
[2,2,1,1,1,2,2]
SAMPLE OUTPUT :
3
2
*/
