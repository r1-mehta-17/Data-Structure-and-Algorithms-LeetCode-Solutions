/*
In MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data.
You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.
The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.
If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.
*/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size()*mat[0].size() != r*c) {
            return mat;
        } else {
            vector <int> arr;
            for(int i=0;i<mat.size();i++){
                for(int j=0;j<mat[i].size();j++){
                    arr.push_back(mat[i][j]);
                }
            }
            vector<vector<int>> ans(r,vector<int> (c));
            vector<int> :: iterator it = arr.begin();
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    it = arr.begin();
                    ans[i][j] = arr[0];
                    arr.erase(it);
                }
            }
            return ans;
        }
    }
};

/*
SAMPLE INPUT : 
[[1,2],[3,4]]
1
4
[[1,2],[3,4]]
2
4
SAMPLE OUTPUT : 
[[1,2,3,4]]
[[1,2],[3,4]]
*/
