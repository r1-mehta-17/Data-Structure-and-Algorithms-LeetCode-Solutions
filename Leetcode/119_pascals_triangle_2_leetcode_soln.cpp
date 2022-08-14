/*
Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it.
*/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> res;
        res.push_back({1});
        for(int i=1;i<rowIndex+1;i++) {
            vector<int> thisrow (i+1);
            thisrow[0]=1;
            thisrow[i]=1; 
            for(int j=1; j<i;j++) {
                thisrow[j]=res[i-1][j]+res[i-1][j-1];
            }
            res.push_back(thisrow);
        }
        return res[rowIndex];
    }
};

/*
SAMPLE INPUT :
3
0
1
SAMPLE OUTPUT :
[1,3,3,1]
[1]
[1,1]
*/
