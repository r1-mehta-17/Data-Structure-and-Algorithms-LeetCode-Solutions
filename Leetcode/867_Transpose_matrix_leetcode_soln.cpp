/*
Given a 2D integer array matrix, return the transpose of matrix.
The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.
*/
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> arr(matrix[0].size(),vector<int> (matrix.size(),0));
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[i].size();j++){
                arr[i][j] = matrix[j][i];
            }
        }
        return arr;
    }
};

/*
SAMPLE INPUT :
[[1,2,3],[4,5,6]]
SAMPLE OUTPUT :
[[1,4],[2,5],[3,6]]
*/
