/*
Given a string s, find the length of the longest substring without repeating characters.

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.size();
        int curlen = 0;
        int maxim = 0;
        vector<char>v1;
        vector<char> :: iterator it, it1;
        for(int i=0;i<len;i++){
            it = find(v1.begin(),v1.end(),s[i]); //it points to the end of the array
            if(it != v1.end()){ //if a repeating character is found
                int count = 1;
                it1 = v1.begin(); //it1 points to beginning of the array
                while(it1!=it){ 
                    it1++;
                    count++; //count is incremented till it1 becomes equal to it
                }
                if(it==v1.begin()){ //if it points to the beginning of the array then it is removed directly from the array
                    v1.erase(it);
                } else {
                    v1.erase(v1.begin(),++it); //otherwise all the elements from it1 to it are removed from the array
                }
                v1.push_back(s[i]); //Then the repeating element is added to the new vector string 
                curlen++;
                curlen = curlen - count; //The new current length is calculated and then max is updated accordingly
            } else {
                v1.push_back(s[i]);
                curlen++; //maintains the current length of the subarray with unique characters
            }
            if(curlen>maxim){
                maxim = curlen; //maintains the max length of the subarray with unique characters
            }
        }
        return maxim;
    }
};

/*
Sample Input: 
"bbbbb"
Sample Output: 
1
Sample Input: 
"pwwkew"
Sample Output: 
3
*/
