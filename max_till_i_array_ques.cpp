// This code prints the maximum of the array till the index i of the array. 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; 
    vector <int> arr;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int max_num = INT_MIN;
    for (int i = 0; i < n; i++) {
        max_num = max(max_num,arr[i]);
        cout << max_num << endl;
    }
    return 0;
}

/*
SAMPLE INPUT : 
5
1 26 2 3 112
SAMPLE OUTPUT :
1
26
26
26
112
*/
