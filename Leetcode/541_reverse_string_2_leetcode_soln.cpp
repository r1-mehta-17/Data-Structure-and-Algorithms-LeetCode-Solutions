/*
Given a string s and an integer k, reverse the first k characters for every 2k characters counting from the start of the string.
If there are fewer than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and leave the other as original.
*/

class Solution {
public:
    string reverseStr(string s, int k) {
        string res;
        bool done = false;
        int i=0;
        while(i<s.size()){
            for(int j=i+k-1;j>=i;j--){
                if(j>=s.size()){
                    done=true;
                    j=s.size()-1;
                }
                res.push_back(s[j]);
            }
            if(done==true){
                break;
            }
            i=i+k;
            for(int j=i;j<i+k;j++){
                if(j>=s.size()){
                    done=true;
                    break;
                }
                res.push_back(s[j]);
            }
            if(done==true){
                break;
            }
            i=i+k;
        }
        return res;
    }
};

/*
SAMPLE INPUT : 
"abcdefg"
2
"abcd"
2
SAMPLE OUTPUT : 
"bacdfeg"
"bacd"
*/
