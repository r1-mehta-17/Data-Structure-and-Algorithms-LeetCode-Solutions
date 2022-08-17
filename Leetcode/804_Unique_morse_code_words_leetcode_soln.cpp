/*
International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, as follows:

 - 'a' maps to ".-",
 - 'b' maps to "-...",
 - 'c' maps to "-.-.", and so on.
For convenience, the full table for the 26 letters of the English alphabet is given below:

[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
Given an array of strings words where each word can be written as a concatenation of the Morse code of each letter.

For example, "cab" can be written as "-.-..--...", which is the concatenation of "-.-.", ".-", and "-...". We will call such a concatenation the transformation of a word.
Return the number of different transformations among all words we have.
*/

class Solution {
public:
    string contom(string s) {
        string ans;
        map<char,string> morsec;
        morsec['a'] = ".-";
        morsec['b'] = "-...";
        morsec['c'] = "-.-.";
        morsec['d'] = "-..";
        morsec['e'] = ".";
        morsec['f'] = "..-.";
        morsec['g'] = "--.";
        morsec['h'] = "....";
        morsec['i'] = "..";
        morsec['j'] = ".---";
        morsec['k'] = "-.-";
        morsec['l'] = ".-..";
        morsec['m'] = "--";
        morsec['n'] = "-.";
        morsec['o'] = "---";
        morsec['p'] = ".--.";
        morsec['q'] = "--.-";
        morsec['r'] = ".-.";
        morsec['s'] = "...";
        morsec['t'] = "-";
        morsec['u'] = "..-";
        morsec['v'] = "...-";
        morsec['w'] = ".--";
        morsec['x'] = "-..-";
        morsec['y'] = "-.--";
        morsec['z'] = "--..";
        for(int i=0;i<s.size();i++){
            ans += morsec[s[i]];
        }
        return ans;
    }
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> morse;
        for(int i=0;i<words.size();i++) {
            morse.insert(contom(words[i]));
        }
        return morse.size();
    }
};

/*
SAMPLE INPUT : 
["gin","zen","gig","msg"]
["a"]
SAMPLE OUTPUT :
2
1
*/
