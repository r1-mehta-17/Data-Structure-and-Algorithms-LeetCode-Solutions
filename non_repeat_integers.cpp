/*
Given 2 non negative integers n1 and n2, given n1 < n2. You need to find all the integers in the range of [n1,n2] (both inclusive) which have no repeated digits.
For example : n1 = 11 and n2 = 15
Answer = 4
Explanation : Available integers = 11, 12, 13, 14, 15
But 11 has repeated digits so it should not be counted.
So answer is 4.
*/

#include<bits/stdc++.h>
using namespace std;
bool repeat (int n) {
    vector <int> temp;
    bool ans = false;
    while (n > 0) {
        int x;
        x = n % 10;
        for (int i = 0; i < temp.size(); i++) {
            if (x == temp[i]) {
                ans = true;
            }
        }
        temp.push_back(x);
        n /= 10;
    }
    return ans;
}
int main() {
    int n1, n2;
    cin >> n1;
    cin >> n2;
    int count = 0;
    for (int i = n1; i <= n2; i++) {
        if(repeat(i) == true) {
            continue;
        } else {
            count++;
        }
    }
    cout << count;
}

/*
SAMPLE INPUT : 
101
200
SAMPLE OUTPUT :
72
*/
