/*
Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.
*/
class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0, r = s.size()-1;
        while (l<r){
            int temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++;
            r--;
        }
    }
};
/*
SAMPLE INPUT :
["h","e","l","l","o"]
SAMPLE OUTPUT :
["o","l","l","e","h"]
*/
