/*
An array arr a mountain if the following properties hold:
 - arr.length >= 3
 - There exists some i with 0 < i < arr.length - 1 such that:
    - arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
    - arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].
You must solve it in O(log(arr.length)) time complexity.
*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=0;
        for(i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]) break;
        }
        int j=0;
        for(j=arr.size()-1;j>1;j--) {
            if(arr[j]>arr[j-1]) break;
        }
        if(i==j) return i;
        else return -1;
    }
};

/*
SAMPLE INPUT : 
[0,1,0]
[0,2,1,0]
[0,10,5,2]
SAMPLE OUTPUT : 
1
1
1
*/
