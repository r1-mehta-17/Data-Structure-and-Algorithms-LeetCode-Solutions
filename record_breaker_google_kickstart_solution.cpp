/*
Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of the following conditions:
  1. The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
  2. Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            arr[i] = temp;
        }
        int maxim = 0;
        int count = 0;
        if (arr[0] > arr[1]) {
            count++;
        } else {
            count = 0;
        }
        cout << count << endl;
        for (int i = 1; i < n; i++) {
            cout << maxim << endl;
            if (arr[i] > maxim) {
                maxim = arr[i];
                if (i == n - 1) {
                    count++;
                    continue;
                } else if (arr[i] > arr[i+1]) {
                    count++;
                } else {
                    continue;
                }
            } else {
                continue;
            }
            cout << count << endl;
        }
        cout << count << endl;
    }
}

/*
SAMPLE INPUT :
4
8
1 2 0 7 2 0 2 0
6
4 8 15 16 23 42
9
3 1 4 1 5 9 2 6 5
6
9 9 9 9 9 9

SAMPLE OUTPUT :
2
1
3
0

*/
