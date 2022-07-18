#include <bits/stdc++.h>
using namespace std;
vector<int> bubble_sort(vector <int> arr)
{
    int i, j;
    for (i = 0; i < arr.size() - 1; i++)
        for (j = 0; j < arr.size() - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
    return arr;
}
int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    arr = bubble_sort(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}

/*
SAMPLE INPUT :
5
10 6 3 7 2

SAMPLE OUTPUT :
2 3 6 7 10 
*/
