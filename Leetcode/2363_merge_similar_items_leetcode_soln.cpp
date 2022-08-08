/*
You are given two 2D integer arrays, items1 and items2, representing two sets of items. Each array items has the following properties:
 - items[i] = [valuei, weighti] where valuei represents the value and weighti represents the weight of the ith item.
 - The value of each item in items is unique.
Return a 2D integer array ret where ret[i] = [valuei, weighti], with weighti being the sum of weights of all items with value valuei.
Note: ret should be returned in ascending order by value.
*/

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> map1;
        for(int i=0;i<items1.size();i++){
            map1[items1[i][0]] = items1[i][1];
        }
        for(int i=0;i<items2.size();i++) {
            if(map1[items2[i][0]] == 0) {
                map1[items2[i][0]] = items2[i][1];
            } else {
                map1[items2[i][0]] += items2[i][1];
            }
        }
        vector<vector<int>> ans;
        map<int,int> :: iterator it = map1.begin();
        for(;it!=map1.end();it++) {
            vector<int> a1;
            a1.push_back(it->first);
            a1.push_back(it->second);
            ans.push_back(a1);
        }
        return ans;
    }
};

/*
SAMPLE INPUT : 
[[1,1],[4,5],[3,8]]
[[3,1],[1,5]]
[[1,1],[3,2],[2,3]]
[[2,1],[3,2],[1,3]]
[[1,3],[2,2]]
[[7,1],[2,2],[1,4]]
SAMPLE OUTPUT : 
[[1,6],[3,9],[4,5]]
[[1,4],[2,4],[3,4]]
[[1,7],[2,4],[7,1]]
*/
