/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> list;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j] == 0) {
                    pair<int,int> zero;
                    zero.first = i;
                    zero.second = j;
                    list.push_back(zero);
                }
            }
        }
        for(int i=0;i<list.size();i++){
            cout << list[i].first << " " << list[i].second << endl;
            int l=list[i].first;
            int r=list[i].second;
            for(int j=0;j<matrix.size();j++){
                matrix[j][r] = 0;
            }
            for(int j=0;j<matrix[0].size();j++){
                matrix[l][j] = 0;
            }
        }
    }
};

/*
SAMPLE INPUT : 
[[1,1,1],[1,0,1],[1,1,1]]
[[0,1,2,0],[3,4,5,2],[1,3,1,5]]
SAMPLE OUTPUT ; 
[[1,0,1],[0,0,0],[1,0,1]]
[[0,0,0,0],[0,4,5,0],[0,3,1,0]]
*/
