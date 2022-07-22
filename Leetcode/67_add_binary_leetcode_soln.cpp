/*
Given two binary strings a and b, return their sum as a binary string.
*/
class Solution {
public:
    string addBinary(string a, string b) {
        char carry = '0';
        string ans;
        for(int i = a.size()-1, j = b.size()-1; i>=0 && j>=0; i--,j--) {
            if(a[i] == '1' && b[j] == '1') {
                if(carry == '1') {
                    ans.push_back('1');
                    carry = '1';
                } else if (carry == '0') {
                    ans.push_back('0');
                    carry = '1';
                }
            } else if(a[i] == '1' && b[j] == '0') {
                if(carry == '1') {
                    ans.push_back('0');
                    carry = '1';
                } else if (carry == '0') {
                    ans.push_back('1');
                    carry = '0';
                }
            } else if(a[i] == '0' && b[j] == '1') {
                if(carry == '1') {
                    ans.push_back('0');
                    carry = '1';
                } else if (carry == '0') {
                    ans.push_back('1');
                    carry = '0';
                }
            } else if(a[i] == '0' && b[j] == '0') {
                if(carry == '1') {
                    ans.push_back('1');
                    carry = '0';
                } else if (carry == '0') {
                    ans.push_back('0');
                    carry = '0';
                }
            }
        }
        int l = a.size() - b.size();
        if(l > 0) {
            while(l > 0){
                if(a[l-1] == '1' && carry == '1') {
                    ans.push_back('0');
                    carry = '1';
                } else if(a[l-1] == '1' && carry == '0') {
                    ans.push_back('1');
                    carry = '0';
                } else if(a[l-1] == '0' && carry == '1') {
                    ans.push_back('1');
                    carry = '0';
                } else if(a[l-1] == '0' && carry == '0') {
                    ans.push_back('0');
                    carry = '0';
                }
                l--;
            }
        } else if (l<0) {
            l *= (-1);
            while(l > 0){
                if(carry == '1') {
                    if(b[l-1] == '1') {
                        carry = '1';
                        ans.push_back('0');
                    } else if (b[l-1] == '0') {
                        carry = '0';
                        ans.push_back('1');
                    }
                } else if(carry = '0') {
                    ans.push_back(b[l-1]);
                    cout << b[l-1] << endl;
                }
                l--;
            }
        }
        if(carry=='1') {
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;    
    }
};

/*
SAMPLE INPUT : 
"101111"
"10"
SAMPLE OUTPUT : 
"110001"
*/
