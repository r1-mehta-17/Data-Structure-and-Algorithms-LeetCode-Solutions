/*
Isyana is given the number of visitors at her local theme park on N consecutive
days. The number of visitors on the i-th day is V[i]. A day is record breaking if it

satisfies both of the following conditions:
The number of visitors on the day is strictly larger than the number of
visitors on each of the previous days.
Either it is the last day, or the number of visitors on the day is strictly larger
than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.
*/

// OPTIMIZED APPROACH WITH TIME COMPLEXITY : O(N)

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr;
    int n=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int count = 0;
    int maxtillnow = 0;
    for(int i=0;i<n;i++){
        if(maxtillnow < arr[i]){
            if(arr[i] > arr[i+1]){
                count++;
                maxtillnow = arr[i];
                continue;
            } else if (i == n) {
                count++;
            } else {
                maxtillnow = arr[i];
                continue;
            }
        }
    }
    cout << count << endl;
    return 0;
}

/*
SAMPLE INPUT : 
8
1 2 0 7 2 0 2 2
SAMPLE OUTPUT :
2
*/
