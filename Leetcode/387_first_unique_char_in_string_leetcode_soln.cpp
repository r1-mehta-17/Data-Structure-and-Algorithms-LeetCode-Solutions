//Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> map1;
        for(int i=0;i<s.size();i++) {
            map1[s[i]]++;
        }
        for(int i=0;i<s.size();i++) {
            if(map1[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};

/*
SAMPLE INPUT : 
"leetcode"
"loveleetcode"
"aabb"
SAMPLE OUTPUT : 
0
2
-1
*/
