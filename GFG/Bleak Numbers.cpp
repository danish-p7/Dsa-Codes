Question:- https://practice.geeksforgeeks.org/problems/bleak-numbers1552/1

class Solution
{
public:
	int is_bleak(int n)
	{
	    // Code here.
	    if(n==0)return 0;
	    for(int i=1; i<=n && i<32; i++)
	    {
	        if(__builtin_popcount(n-i) == i)return 0;
	    }
	    return 1;
	}
};
