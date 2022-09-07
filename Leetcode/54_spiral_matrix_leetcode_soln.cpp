/*
Given an m x n matrix, return all elements of the matrix in spiral order.
*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int l1=0,l2=matrix.size()-1, r1=0, r2=matrix[0].size()-1;
        vector<vector<bool>> visited(l2+1,vector<bool> (r2+1,false));
        vector<int> ans;
        while(l1<=l2 && r1<=r2) {
            for(int i=r1;i<=r2;i++) {
                if(visited[l1][i] == false) {
                    ans.push_back(matrix[l1][i]);
                    visited[l1][i] = true;
                }
            }
            for(int i=l1+1;i<=l2;i++) {
                if(visited[i][r2]==false) {
                    ans.push_back(matrix[i][r2]);
                    visited[i][r2] = true;
                }
            }
            for(int i=r2-1;i>=r1;i--) {
                if(visited[l2][i]==false) {
                    ans.push_back(matrix[l2][i]);
                    visited[l2][i] = true;
                }
            }
            for(int i=l2-1;i>l1;i--) {
                if(visited[i][r1]==false) {
                    ans.push_back(matrix[i][r1]);
                    visited[i][r1] = true;
                }
            }
            l1++;
            r1++;
            l2--;
            r2--;
        }
        return ans;
    }
};

/*
SAMPLE INPUT :
[[1,2,3],[4,5,6],[7,8,9]]
[[1,2,3,4],[5,6,7,8],[9,10,11,12]]
SAMPLE OUTPUT :
[1,2,3,6,9,8,7,4,5]
[1,2,3,4,8,12,11,10,9,5,6,7]
*/
