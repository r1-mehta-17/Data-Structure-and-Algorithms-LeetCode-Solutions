/*
Given an encoded string, return its decoded string.
The encoding rule is: k[encoded_string], where the encoded_string inside the square brackets is being repeated exactly k times. Note that k is guaranteed to be a positive integer.
You may assume that the input string is always valid; there are no extra white spaces, square brackets are well-formed, etc. Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, k. For example, there will not be input like 3a or 2[4].
The test cases are generated so that the length of the output will never exceed 105.
*/

class Solution {
public:
    string helper(string s, int & pos) {
        string ans = "";
        int num = 0;
        for(;pos<s.size();pos++) {
            if (s[pos]=='[') {
                pos++;
                string ret_str = helper(s,pos);
                for(int i=0;i<num;i++) {
                    ans+=ret_str;
                }
                num = 0;
            } else if (s[pos] == ']') {
                return ans;
            } else if (isdigit(s[pos])){
                num = num*10 + (s[pos]-'0');
            } else {
                ans+=s[pos];
            }
        }
        return ans;
    }
    string decodeString(string s) {
        int pos = 0;
        return helper(s,pos);
    }
};

/*
SAMPLE INPUT :
"3[a]2[bc]"
"3[a2[c]]"
"2[abc]3[cd]ef"
SAMPLE OUTPUT :
"aaabcbc"
"accaccacc"
"abcabccdcdcdef"
*/
