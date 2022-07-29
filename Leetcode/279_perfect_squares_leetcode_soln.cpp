/*
Given an integer n, return the least number of perfect square numbers that sum to n.
A perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself. For example, 1, 4, 9, and 16 are perfect squares while 3 and 11 are not.
*/

class Solution {
public:
    int numSquares(int n) {
		vector<int>a(n+1);
		for(int i=1;i<=n;i++)
		{
			int mini=1e9;
			for(int j=1;j*j<=i;j++)
			{
				mini=min(mini,a[i-(j*j)]+1);
			}
            a[i]=mini;
		}
		return a[n];
	}
};

/*
SAMPLE INPUT : 
12
13
SAMPLE OUTPUT :
3
2
*/
