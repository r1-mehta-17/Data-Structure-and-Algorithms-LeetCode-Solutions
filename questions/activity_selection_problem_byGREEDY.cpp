#include<bits/stdc++.h>
using namespace std;
int asp(int n, vector<vector<int>> arr){
    sort(arr.begin(),arr.end(),[&](vector<int> &a,vector<int>&b) {
        return a[1]<b[1];
    });
    int task=1;
    int end = arr[1][0];
    for(int i=1;i<n;i++){
        if(end <= arr[i][0]) {
            task++;
            end = arr[i][1];
        }
    }
    return task;
}
int main(){
    vector<vector<int>> sch;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        vector<int> merge;
        int temp;
        cin >> temp;
        merge.push_back(temp);
        cin >> temp;
        merge.push_back(temp);
        sch.push_back(merge);
    }
    cout << asp(n,sch) << endl;
}

/*
SAMPLE INPUT : 
5
10 20
12 15
15 18
20 30
25 28
SAMPLE OUTPUT : 
3
*/
