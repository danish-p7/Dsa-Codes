Question:-
2nd:

int smallSum(vector<int> &arr, int K)
{
    // Code here
    long long ans=0;
    int n = arr.size();
    for(int i=0; i<n; i++)
    {
        if(arr[i]<arr[(i+1)%n])ans += arr[i];
        else ans += arr[i]%K;
        ans %= ((int)1e9+7);
    }
    return ans;
}
