/*
Given two strings s and t, determine if they are isomorphic.
Two strings s and t are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
*/

class Solution {
public:
    bool solve (string s, string t) {
        map<char,char> smap;
        for(int i=0;i<s.size();i++){
            smap[s[i]] = t[i];
        }
        for(int i=0;i<s.size();i++){
            if(smap[s[i]] == t[i]) {
                smap[s[i]] = t[i];
            } else {
                return false;
            }
        }
        return true;
    }
    bool isIsomorphic(string s, string t) {
        return solve(s,t) && solve(t,s);
    }
};

/*
SAMPLE INPUT :
"egg"
"add"
"foo"
"bar"
"paper"
"title"
SAMPLE OUTPUT :
true
false
true
*/
