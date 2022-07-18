/*
Given an array arr[] on N integers and a positive integer K. The task is to cyclically rotate the array clockwise by K.
Note : Keep the first of the array unaltered.
*/

#include<bits/stdc++.h>
using namespace std;

vector <int> r_array (vector <int> arr, int n, int r) {
    for (int i = 1; i <= n - r; i++) {
        int temp = arr[0];
        arr.push_back(temp);
        arr.erase(arr.begin());
    }
    return arr;
}

int main() {
    int n;
    cin >> n;
    vector <int> arr;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int r;
    cin >> r;
    arr = r_array(arr, n, r);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

/*
SAMPLE INPUT :
5
1
2
3
4
5
2
SAMPLE OUTPUT :
4
5
1
2
3
*/
