/*
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
Each letter in magazine can only be used once in ransomNote.
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> map1;
        map<char,int> map2;
        for(int i=0;i<ransomNote.size();i++) {
            map1[ransomNote[i]]++;
            map2[ransomNote[i]] = 0;
        }
        for(int i=0;i<magazine.size();i++) {
            map2[magazine[i]]++;
        }
        map<char,int> :: iterator it1 = map1.begin();
        for(;it1!=map1.end();it1++) {
            if(it1->second > map2[it1->first]) return false;
        }
        return true;
    }
};

/*
SAMPLE INPUT : 
"a"
"b"
"aa"
"ab"
"aa"
"aab"
SAMPLE OUTPUT : 
false 
false
true
*/
