/*
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).
*/
class Solution {
public:
    bool isfreq(string s, string t) {
        map<char,int>sf;
        map<char,int>tf;
        for(int i=0;i<s.size();i++){
            sf[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            tf[t[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(sf[s[i]] > tf[s[i]]){
                return false;
            }
        }
        return true;
    }
    bool isSubsequence(string s, string t) {
        int l=0;
        int x=s.size(),y=t.size();
        if(x==0) return true;
        if(y==0) return false;
        for(int i=0;i<s.size();i++){
            if(s[i]==t[l]){
                i++;
                l++;
            }
            while(s[i]!=t[l]) {
                l++;
                if(l==t.size()){
                    break;
                }
            } 
            if(l==t.size()) {
                return false;
            }
        }
        if(isfreq(s,t)) {
            return true;
        } else {
            return false;
        }
        return true;
    }
};

/*
SAMPLE INPUT :
"abc"
"ahbgdc"
"axc"
"ahbgdc"
SAMPLE OUTPUT :
true
false
*/
