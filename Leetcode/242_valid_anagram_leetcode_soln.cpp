/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> map1;
        map<char,int> map2;
        for (int i=0;i<s.size();i++){
            map1[s[i]]++;
        }
        for (int i=0;i<t.size();i++){
            map2[t[i]]++;
        }
        if(map1.size()!=map2.size()) {
            return false;
        }
        for(int i=0;i<t.size();i++){
            if(map1[t[i]] < map2[t[i]]) {
                return false;
            } else if (map1[t[i]] > map2[t[i]]) {
                return false;
            }
        }
        return true;
    }
};

/*
SAMPLE INPUT : 
"anagram"
"nagaram"
"rat"
"car"
SAMPLE OUTPUT : 
true
false
*/
