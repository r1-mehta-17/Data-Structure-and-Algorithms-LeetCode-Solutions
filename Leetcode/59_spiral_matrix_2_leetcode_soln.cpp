/*
Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.
*/

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if(n==1) return {{1}};
        vector<vector<int>> matrix(n,vector<int> (n));
        int k=1;
        int i=0;
        int l=0;
        while(k<=n*n) {
            i=l;
            int j=l;
            for(;j<n-l;j++){
                matrix[i][j] = k;
                k++;
            }
            i++;
            j--;
            for(;i<n-l;i++) {
                matrix[i][j] = k;
                k++;
            }
            i--;
            j--;
            for(;j>=0+l;j--){
                matrix[i][j] = k;
                k++;
            }
            i--;
            j++;
            l++;
            for(;i>=0+l;i--){
                matrix[i][j]=k;
                k++;
            }
        }
        return matrix;
    }
};

/*
SAMPLE INPUT : 
3
1
SAMPLE OUTPUT :
[[1,2,3],[8,9,4],[7,6,5]]
[[1]]
*/
