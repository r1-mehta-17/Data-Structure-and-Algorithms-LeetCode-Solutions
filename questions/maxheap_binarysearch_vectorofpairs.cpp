/*
You are given an m x n binary matrix mat of 1's (representing soldiers) and 0's (representing civilians). The soldiers are positioned in front of the civilians. That is, all the 1's will appear to the left of all the 0's in each row.
A row i is weaker than a row j if one of the following is true:
 - The number of soldiers in row i is less than the number of soldiers in row j.
 - Both rows have the same number of soldiers and i < j.
Return the indices of the k weakest rows in the matrix ordered from weakest to strongest.
*/

class Solution {
    int calculateSoldierCount(vector<int>& v) {
        int l=0; int h=v.size()-1;
        while(l<=h) { 
            int mid=l+(h-l)/2;
            if(v[mid]==0) {
                h=mid-1;
            } else {
                l=mid+1;
            }
        }
        return l;
    }
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>> strength;
        for(int i=0;i<mat.size();++i){
            strength.push({calculateSoldierCount(mat[i]),i});
            if(strength.size()>k){
                strength.pop();
            }
        }
        vector<int> ans;
        while(strength.size()) {
            ans.push_back(strength.top().second);
            strength.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

/*
SAMPLE INPUT : 
[[1,1,0,0,0],[1,1,1,1,0],[1,0,0,0,0],[1,1,0,0,0],[1,1,1,1,1]]
3
[[1,0,0,0],[1,1,1,1],[1,0,0,0],[1,0,0,0]]
2
SAMPLE OUTPUT : 
[2,0,3]
[0,2]
*/
