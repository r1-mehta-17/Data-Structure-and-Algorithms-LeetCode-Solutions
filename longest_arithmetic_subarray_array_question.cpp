#include <bits/stdc++.h>
using namespace std;
int longest_arithmetic_subarray (vector <int> arr) {
    int count = 1; // in order to count the current arithmetic subarray length 
    int pd = 0; //in order to keep track of the previous difference
    int i = 0;
    int j = 1;
    int max_count = 0; // in order to keep the track of the max length of arithmetic subarray achieved
    for (i = 0; i < arr.size(); i++) {
        count = 1;
        pd = arr[j] - arr[i]; // initialize its value with the difference of the first 2 elements of the subarray
        for (int j = i + 1; j < arr.size() - 1; j++) {
            if (arr[j+1] - arr[j] == pd) {
                count++;
                continue;
            } else {
                break;
            }
        }
        max_count = max(max_count,count);
    }
    return max_count + 1; // as count return the number of equal differences from the array and we need the subarray length therefore, we add 1
}
int main() {
    int n; 
    vector <int> arr;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int len = longest_arithmetic_subarray (arr);
    cout << len << endl;
    return 0;
}

/*
SAMPLE INPUT :
8
1 2 3 4 5 7 8 9
SAMPLE OUTPUT :
5
*/
