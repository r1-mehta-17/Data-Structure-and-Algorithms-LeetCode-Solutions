/*
Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
*/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> shash(26);
        vector<int> phash(26);
        vector<int> ans;
        if(s.size() < p.size()) return ans;
        for(int i=0;i<p.size();i++) {
            shash[s[i]-'a']++;
            phash[p[i]-'a']++;
        }
        if(phash == shash) ans.push_back(0);
        for(int i=p.size();i<s.size();i++) {
            shash[s[i]-'a']++;
            shash[s[i-p.size()]-'a']--;
            if(shash == phash) {
                ans.push_back(i-p.size()+1);
            }
        }
        return ans;
    }
};

/*
SAMPLE INPUT : 
"cbaebabacd"
"abc"
"abab"
"ab"
SAMPLE OUTPUT : 
[0,6]
[0,1,2]
*/
