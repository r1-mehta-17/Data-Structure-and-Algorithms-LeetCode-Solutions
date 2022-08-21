/*
You are given an array of integers stones where stones[i] is the weight of the ith stone.
We are playing a game with the stones. On each turn, we choose the heaviest two stones and smash them together. Suppose the heaviest two stones have weights x and y with x <= y. The result of this smash is:
 - If x == y, both stones are destroyed, and
 - If x != y, the stone of weight x is destroyed, and the stone of weight y has new weight y - x.
 - At the end of the game, there is at most one stone left.
Return the weight of the last remaining stone. If there are no stones left, return 0.
*/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(int i=0;i<stones.size();i++){
            q.push(stones[i]);
        }
        while(q.size()!=1) {
            int x = q.top();
            q.pop();
            int y = q.top();
            q.pop();
            q.push(x-y);
        }
        return q.top();
    }
};

/*
SAMPLE INPUT :
[2,7,4,1,8,1]
[1]
SAMPLE OUTPUT :
1
1
*/
