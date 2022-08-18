/*
You are given an integer array arr. You can choose a set of integers and remove all the occurrences of these integers in the array.
Return the minimum size of the set so that at least half of the integers of the array are removed.
*/

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> map1;
        int n=arr.size();
        for(int i=0;i<arr.size();i++) map1[arr[i]]++;
        map<int,int> :: iterator it;
        vector<int> freq_sorted;
        for(it=map1.begin();it!=map1.end();it++) {
            freq_sorted.push_back(it->second);
        }
        sort(freq_sorted.begin(),freq_sorted.end());
        int new_size = n;
        int i=0;
        for(i=freq_sorted.size()-1;i>=0;i--) {
            new_size -= freq_sorted[i];
            if(new_size <= n/2) break;
        }
        return freq_sorted.size() - i;
    }
};

/*
SAMPLE INPUT :
[3,3,3,3,5,5,5,2,2,7]
[7,7,7,7,7,7]
SAMPLE OUTPUT :
2
1
*/
