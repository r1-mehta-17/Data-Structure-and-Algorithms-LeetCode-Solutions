/*
You are given a string s and an integer array indices of the same length. The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.
Return the shuffled string.
*/
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans;
        for(int i=0;i<s.size();i++){
            ans.push_back('0');
        }
        for(int i=0;i<indices.size();i++){
            ans[indices[i]] = s[i]; 
        }
        return ans;
    }
};

/*
SAMPLE INPUT :
"codeleet"
[4,5,6,7,0,2,1,3]
SAMPLE OUTPUT :
"leetcode"
*/
