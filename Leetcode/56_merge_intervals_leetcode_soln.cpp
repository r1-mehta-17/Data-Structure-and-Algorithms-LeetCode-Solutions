/*
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[&](vector<int> a,vector<int> b){
            return a[0] < b[0];
        });
        vector<vector<int>> ans;
        for(int i=0;i<intervals.size();i++){
            vector<int> t1;
            if(i!=intervals.size()-1 && intervals[i][1] >= intervals[i+1][0]) {
                int maxend = intervals[i][1];
                int temp = i;
                while(i < intervals.size()-1 && maxend >= intervals[i+1][0]){
                    
                    maxend = max(intervals[i+1][1],maxend);
                    i++;
                }
                t1.push_back(intervals[temp][0]);
                t1.push_back(maxend);
                // i+=1;
            } else {
                t1.push_back(intervals[i][0]);
                t1.push_back(intervals[i][1]);
            }
            ans.push_back(t1);
        }
        return ans;
    }
};

/*
SAMPLE INPUT : 
[[2,3],[4,5],[6,7],[8,9],[1,10]]
[[1,3],[2,6],[8,10],[15,18]]
[[1,4],[4,5]]
SAMPLE OUTPUT : 
[[1,10]]
[[1,6],[8,10],[15,18]]
[[1,5]]
*/
