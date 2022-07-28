/*
Given an integer numRows, return the first numRows of Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above.
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        for (int i = 0; i < numRows; i++) {
            vector<int> row(i+1, 1);
            int mid = i >> 1;
            for (int j = 1; j <= mid; j++) {
                int val = ans[i-1][j-1] + ans[i-1][j];
                row[j] = val;
                row[row.size()-j-1] = val;
            }
            ans[i] = row;
        }
        return ans;
    }
};

/*
SAMPLE INPUT : 
5
1
SAMPLE OUTPUT : 
[[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
[[1]]
*/
