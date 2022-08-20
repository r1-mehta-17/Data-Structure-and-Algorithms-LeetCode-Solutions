/*
Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).
More formally check if there exists two indices i and j such that :
 - i != j
 - 0 <= i, j < arr.length
 - arr[i] == 2 * arr[j]
*/

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map <int,int> map1;
        for(int i:arr) {
            map1[i]++;
        }
        map<int,int> :: iterator it;
        for(it=map1.begin();it!=map1.end();it++) {
            if(it->first == 0 && it->second >= 2) return true; 
            else if(it->second >= 1 && map1[it->first*2] >= 1 && it->first != 0) return true;
        }
        return false;
    }
};

/*
SAMPLE INPUT :
[10,2,5,3]
[7,1,14,11]
[3,1,7,11]
SAMPLE OUTPUT :
true
true
false
*/
