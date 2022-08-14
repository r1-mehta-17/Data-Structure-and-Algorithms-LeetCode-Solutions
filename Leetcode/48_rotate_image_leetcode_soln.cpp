/*
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> res;
        for(int j=0;j<matrix.size();j++) {
            vector<int> ans;
            for(int i=matrix.size()-1;i>=0;i--) {
                ans.push_back(matrix[i][j]);
            }
            res.push_back(ans);
        }
        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix.size();j++) {
                matrix[i][j] = res[i][j];
            }
        }
    }
};

/*
SAMPLE INPUT : 
[[1,2,3],[4,5,6],[7,8,9]]
[[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
SAMPLE OUTPUT :
[[7,4,1],[8,5,2],[9,6,3]]
[[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
*/
