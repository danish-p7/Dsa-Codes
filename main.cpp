#include<bits/stdc++.h>

using namespace std;



int helper(int r, int c, vector<vector<int>> &v, vector<vector<int>> &dp)
{
    if(r>=v.size())rerurn 0;
    if(c<0 || c>=v[0].size() || v[r][c]==-1)return 0;

    if(dp[r][c] != -1)return dp[r][c];

    return dp[r][c] = v[r][c] + max({helper(r+1, c, v), helper(r+1, c-1, v), helper(r+1, c+1, v)});
}

int MaxGold(vector<vector<int>>& matrix){
    int ans=0, n=matrix.size(), m=matrix[0].size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    for(int i=0; i<n; i++)
    {
        ans = max(ans, helper(0, i, matrix, dp));
    }
    return ans;
}
};

singed main()
{
    int n;
    cin>>n;

    cout<<n<<endl;
    return 0;
}
