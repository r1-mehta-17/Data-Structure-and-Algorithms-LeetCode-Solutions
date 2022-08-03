/*
Given an n x n matrix where each of the rows and columns is sorted in ascending order, return the kth smallest element in the matrix.
Note that it is the kth smallest element in the sorted order, not the kth distinct element.
*/

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> arr;
        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix[i].size();j++) {
                arr.push_back(matrix[i][j]);
            }
        }
        sort(arr.begin(),arr.end());
        return arr[k-1];
    }
};

/*
SAMPLE INPUT :
[[1,5,9],[10,11,13],[12,13,15]]
8
[[-5]]
1
SAMPLE OUTPUT :
13
-5
*/
