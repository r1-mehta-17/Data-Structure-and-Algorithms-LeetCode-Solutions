/*
Given an array arr[] of size N. The task is to find the first repeating element in an array of integers, i.e., an element that occurs more than once and whose index of first occurrence is smallest.
*/
// TIME COMPLEXITY REQUIREMENT : MAX(O(N))
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        arr[i] = temp;
    }
    map<int,int> map1;
    map<int,int>::iterator itr;
    for(int i=0;i<n;i++){
        map1[arr[i]]++;
    }
    for(itr=map1.begin(); itr!=map1.end();++itr){
        if(itr->second>1){
            break;
        }
    }
    int count = 0;
    while(itr->first!=arr[count]){
        count++;
    }
    cout << count << endl;
    return 0;
}

/*
SAMPLE INPUT :
7
1 5 3 4 3 5 6
SAMPLE OUTPUT :
2
*/
