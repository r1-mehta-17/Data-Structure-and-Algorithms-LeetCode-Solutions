/*
You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.
Return the length of the longest substring containing the same letter you can get after performing the above operations.
*/

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int ws = 0;
        int we = 0;
        int max_count = 0;
        int max_length = 0;
        vector<int> cc(26,0);
        for(we=0;we<n;we++){
            cc[s[we]-'A']++;
            int ccc = cc[s[we]-'A'];
            max_count = max(max_count,ccc);
            while(we-ws-max_count+1>k){
                cc[s[ws]-'A']--;
                ws++;
            }
            max_length = max(max_length, we-ws+1);
        }
        return max_length;
    }
};

/*
SAMPLE INPUT : 
"ABAB"
2
"AABABBA"
1
SAMPLE OUTPUT :
4
4
*/
