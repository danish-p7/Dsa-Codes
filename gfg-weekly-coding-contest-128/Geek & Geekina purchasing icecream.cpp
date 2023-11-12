https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-128/problems

long long findGoodPairs(vector<int> a, int n, int k)
{
    // code here
    map<long long, long long> mpp;
    for(int i=k; i<n; i++)
    {
        mpp[a[i]]++;
    }
    
    long long ans = 0;
    for(int i=0; i<n-k; i++)
    {
        ans += mpp[a[i]];
        mpp[a[i+k]]--;
    }
    
    return ans;
}
