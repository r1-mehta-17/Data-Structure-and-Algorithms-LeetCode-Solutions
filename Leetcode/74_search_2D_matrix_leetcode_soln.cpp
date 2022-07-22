/*
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:
 - Integers in each row are sorted from left to right.
 - The first integer of each row is greater than the last integer of the previous row.
*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix[0].size()-1;
        int i=0, temp=i;
        for(i = 0; i<matrix.size(); i++){
            if(matrix[i][0] <= target && matrix[i][r] >= target) {
                temp = i;
                break;
            } else if(matrix[i][0] > target) {
                return false;
            }
        }
        for(int j=0;j<matrix[temp].size();j++){
            if(matrix[temp][j] == target) {
                return true;
            }
        }
        return false;
    }
};

/*
SAMPLE INPUT : 
[[1,3,5,7],[10,11,16,20],[23,30,34,60]]
3
[[1,3,5,7],[10,11,16,20],[23,30,34,60]]
13
SAMPLE OUTPUT : 
true
false
*/
