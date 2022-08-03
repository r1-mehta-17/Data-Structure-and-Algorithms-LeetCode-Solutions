/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
 - Open brackets must be closed by the same type of brackets.
 - Open brackets must be closed in the correct order.
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        for(int i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                s1.push(s[i]);
            }
            else if(s[i] == ')') {
                if(!s1.empty()) {
                    if(s1.top()=='('){
                        s1.pop();
                        continue;
                    } else {
                        return false;
                    }
                } else return false;
            }
            else if(s[i] == '}') {
                if(!s1.empty()){
                    if(s1.top()=='{'){
                        s1.pop();
                        continue;
                    } else {
                        return false;
                    }
                } else return false;
            }
            else if(s[i] == ']') {
                if(!s1.empty()) {
                    if(s1.top()=='['){
                        s1.pop();
                        continue;
                    } else {
                        return false;
                    }
                } else return false;
            }
        }
        if(s1.empty()) return true;
        else return false;
    }
};

/*
SAMPLE INPUT : 
"()"
"()[]{}"
"(]"
SAMPLE OUTPUT : 
true
true
false
*/
