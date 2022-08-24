/*
PROBLEM LINK : https://www.codingninjas.com/codestudio/problems/rotate-matrix-by-90-degrees_981261?leftPanelTab=0
*/

vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix)
{
    int m=matrix.size(),n=matrix[0].size();
    vector<vector<int>> ans (m,vector<int> (n,0));
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            ans[i][j] = matrix[j][n-i-1];
        }
    }
    return ans;
}

/*
SAMPLE INPUT :
2
3
1 2 3
4 5 6
7 8 9
4
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16
SAMPLE OUTPUT :
3 6 9 
2 5 8 
1 4 7 
4 8 12 16 
3 7 11 15 
2 6 10 14 
1 5 9 13
*/
