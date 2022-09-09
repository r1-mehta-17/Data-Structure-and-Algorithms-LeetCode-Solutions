/*
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        string temp = strs[0];
        int count = 0;
        for(int i=0;i<temp.size();i++) {
            bool cont = false;
            for(int j=0;j<strs.size();j++) {
                if(temp[i] == strs[j][i]) {
                    cont = true;
                } else {
                    cont = false;
                    break;
                }
            }
            if(cont == true) count++;
            else break;
        }
        for(int i=0;i<count;i++) {
            ans+=temp[i];
        }
        return ans;
    }
};

/*
SAMPLE INPUT :
["flower","flow","flight"]
["dog","racecar","car"]
SAMPLE OUTPUT :
"fl"
""
*/
