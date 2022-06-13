#include <bits/stdc++.h>
using namespace std;
vector <int> insertion_sort (vector <int> arr) {
    int i, key, j;
    for (i = 1; i < arr.size(); i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return arr;
}
int main() {
    vector <int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    arr = insertion_sort(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

/*
Sample Input :
5
10 15 9 3 12

Sample Output :
3 9 10 12 15 
*/
