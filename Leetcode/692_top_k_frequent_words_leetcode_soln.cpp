/*
Given an array of strings words and an integer k, return the k most frequent strings.
Return the answer sorted by the frequency from highest to lowest. Sort the words with the same frequency by their lexicographical order.
*/

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> map1;
        for(int i=0;i<words.size();i++) {
            map1[words[i]]++;
        }
        map<string,int> :: iterator it;
        vector<pair<int,string>> q;
        for(it=map1.begin();it!=map1.end();it++) {
            q.push_back({it->second,it->first});
        }
        sort(q.begin(),q.end(),[&](pair<int,string>a,pair<int,string>b) {
            if(a.first>b.first) return true;
            else if(a.first==b.first && a.second>b.second) return false;
            else if(a.first==b.first && a.second<b.second) return true;
            else return false;
        });
        vector<string> ans;
        for(int i=0;i<k;i++){
            ans.push_back(q[i].second);
        }
        return ans;
    }
};

/*
SAMPLE INPUT :
["i","love","leetcode","i","love","coding"]
2
["the","day","is","sunny","the","the","the","sunny","is","is"]
4
SAMPLE OUTPUT :
["i","love"]
["the","is","sunny","day"]
*/
