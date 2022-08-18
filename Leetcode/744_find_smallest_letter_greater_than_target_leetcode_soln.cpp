/*
Given a characters array letters that is sorted in non-decreasing order and a character target, return the smallest character in the array that is larger than target.
Note that the letters wrap around.
For example, if target == 'z' and letters == ['a', 'b'], the answer is 'a'.
*/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i;
        for (i = 0; i < letters.size(); i++) {
            if (letters[i] <= target) {
                continue;
            } else {
                return letters[i];
            }
        }
        return letters[0];
    }
};

/*
SAMPLE INPUT :
["c","f","j"]
"a"
["c","f","j"]
"c"
["c","f","j"]
"d"
SAMPLE OUTPUT :
"c"
"f"
"f"
*/
