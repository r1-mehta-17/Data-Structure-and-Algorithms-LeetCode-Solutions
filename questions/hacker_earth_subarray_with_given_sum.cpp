//Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;	
		long long target;
		cin >> target;			
		int arr[n];
		for(int i=0;i<n;i++){
			int temp;
			cin >> temp;
			arr[i] = temp;
		}
		int start=0, end=0;
		long long sum = 0;
		while(end!=n){
			sum+=arr[end];
			while(sum > target){
				sum = sum - arr[start];
				start++;
			}
			if(sum == target){
				break;
			}
			end++;
		}
		if(end==n) cout << -1 << endl;
		else cout << (start+1) << " " << end+1 << endl;
	}
}

/*
SAMPLE INPUT :
2
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10
SAMPLE OUTPUT : 
2 4
1 5
*/
