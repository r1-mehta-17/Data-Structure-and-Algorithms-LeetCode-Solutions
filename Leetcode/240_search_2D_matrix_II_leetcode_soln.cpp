/*
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:
 - Integers in each row are sorted in ascending from left to right.
 - Integers in each column are sorted in ascending from top to bottom.
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=matrix[0].size()-1, r=0;
        while(l>=0 && r<matrix.size()) {
            
            if(matrix[r][l]==target) {
                return true;
            } else if(matrix[r][l] > target) {
                l--;
            } else {
                r++;
            }
        }
        return false;
    }
};

/*
SAMPLE INPUT : 
[[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]]
5
[[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]]
20
SAMPLE OUTPUT :
true
false
*/
