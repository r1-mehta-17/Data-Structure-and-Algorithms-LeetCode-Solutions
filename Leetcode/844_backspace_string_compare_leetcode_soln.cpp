/*
Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.
Note that after backspacing an empty text, the text will continue empty
*/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss;
        for(int i=0;i<s.size();i++){ 
            if(s[i]=='#') {
                if(ss.empty()) continue;
                ss.pop();
            }
            else ss.push(s[i]);
        }
        stack<char> st;
        for(int i=0;i<t.size();i++){
            if(t[i]=='#') {
                if(st.empty()) continue;
                st.pop();
            }
            else st.push(t[i]);
        }
        if(ss.size()!=st.size()) return false;
        for(int i=0;i<ss.size();){
            if(ss.top()!=st.top()) return false;
            else {
                ss.pop();
                st.pop();
            }
        }
        return true;
    }
};

/*
SAMPLE INPUT : 
"ab#c"
"ad#c"
"ab##"
"c#d#"
"a#c"
"b"
SAMPLE OUTPUT : 
true
true
false
*/
