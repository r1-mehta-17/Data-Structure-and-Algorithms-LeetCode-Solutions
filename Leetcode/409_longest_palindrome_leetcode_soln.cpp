/*
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.
Letters are case sensitive, for example, "Aa" is not considered a palindrome here.
*/

class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> freq;
        for(int i=0;i<s.size();i++) {
            freq[s[i]]++;
        }
        int ans=0;
        bool odd = false;
        for(map<char,int> :: iterator itr = freq.begin();itr!=freq.end();itr++){
            if((*itr).second % 2 == 0){
                ans += (*itr).second;
            } else {
                ans += (*itr).second - 1;
                odd = true;
            }
        }
        if(odd == true) {
            ans = ans + 1;
        }
        return ans;
    }
};

/*
SAMPLE INPUT :
"abccccdd"
"a" 
SAMPLE OUTPUT :
7
1
*/
