/*
Given an integer array ‘arr[]’ of size n, find sum of all sub-arrays of given array. 

Examples : 

Input   : arr[] = {1, 2, 3}
Output  : 20
Explanation : {1} + {2} + {3} + {2 + 3} + {1 + 2} + {1 + 2 + 3} = 20
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> arr;
    for (int i = 0; i < n; i++) {
        int temp = 0;
        cin >> temp;
        arr.push_back(temp);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int this_sub_sum = 0;
        for (int j = i; j < n; j++) {
            this_sub_sum += arr[j];
            sum += this_sub_sum;
        }
        
    }
    cout << sum;
}

/*
SAMPLE INPUT 1 : 
4
1 2 3 4
SAMPLE OUTPUT 1 : 
50
SAMPLE INPUT 2 : 
5
1 2 3 4 5
SAMPLE OUTPUT 2 ;
105
*/
