/*
Problem Link : https://www.codingninjas.com/codestudio/contests/codestudio-weekend-contest-35/5815830/problems/21207?leftPanelTab=0
*/

// SOLUTION USING MAX_HEAP 

long long maxPower(vector<int> &a, vector<int> &b){
    priority_queue<int> a1,b1;
    for(int i=0;i<a.size();i++) {
        a1.push(a[i]);
        b1.push(b[i]);
    }
    long long result = 0;
    for(int i=0;i<a.size();i++) {
        int x = a1.top();
        int y = b1.top();
        a1.pop();
        b1.pop();
        result += x*y;
    }
    return result;
}

/*
SAMPLE INPUT :
2
4
1 1 1 3
2 2 2 2
2
1 2 
5 5
SAMPLE OUTPUT :
12
15
*/
