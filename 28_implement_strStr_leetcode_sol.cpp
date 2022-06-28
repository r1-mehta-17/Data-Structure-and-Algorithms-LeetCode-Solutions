/*
Implement strStr().
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        int j;
        for (i = 0; i < haystack.size(); i++) {
            if (haystack[i] == needle[0]) {
                int k = i + 1;
                for (j = 1; j < needle.size(); j++) {
                    if (haystack[k] == needle[j]) {
                        k++;
                    } else {
                        break;
                    }
                }
                if (j == needle.size()) {
                    return i;
                } else {
                    continue;
                }
            }
        }
        return -1;
    }
};

/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Implement strStr().
Memory Usage: 6.3 MB, less than 60.18% of C++ online submissions for Implement strStr().

SAMPLE INPUT :
"hellllllloonnnnnoooonnnnooo"
"ooo"

SAMPLE OUTPUT :
16
*/
