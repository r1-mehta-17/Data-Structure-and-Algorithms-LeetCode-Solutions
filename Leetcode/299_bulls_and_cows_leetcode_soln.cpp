/*
You are playing the Bulls and Cows game with your friend.
You write down a secret number and ask your friend to guess what the number is. When your friend makes a guess, you provide a hint with the following info:
 
 - The number of "bulls", which are digits in the guess that are in the correct position.
 - The number of "cows", which are digits in the guess that are in your secret number but are located in the wrong position. Specifically, the non-bull digits in the guess that could be rearranged such that they become bulls.

Given the secret number secret and your friend's guess guess, return the hint for your friend's guess.
The hint should be formatted as "xAyB", where x is the number of bulls and y is the number of cows. Note that both secret and guess may contain duplicate digits.
*/

class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.size();
        int A = 0;
        int B = 0;
        vector<int> secrethash(10,0);
        vector<int> guesshash(10,0);
        for(int i=0;i<n;i++){
            if(secret[i] == guess[i]) {
                A++;
                continue;
            }
            secrethash[secret[i]-'0']++;
            guesshash[guess[i]-'0']++;
        }
        for(int i=0;i<10;i++){
            if(guesshash[i]!=0 && secrethash[i]!=0) {
                B+=min(secrethash[i],guesshash[i]);
            }
        }
        string ans;
        stringstream ssa,ssb;
        ssa<<A;
        ssb<<B;
        string sa, sb;
        ssa>>sa;
        ssb>>sb;
        ans += sa;
        ans.push_back('A');
        ans += sb;
        ans.push_back('B');
        return ans;
    }
};

/*
SAMPLE INPUT : 
"1123111111111111111111111111111111"
"0111111111111111111111111111111111"
"1807"
"7801"
SAMPLE OUTPUT :
"31A1B"
"2A2B"
*/
