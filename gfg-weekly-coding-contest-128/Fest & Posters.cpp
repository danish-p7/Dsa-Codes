//Problem 4 : https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-128/problems

bool box(vector<int> &v, int N, long long x)
{
    long long ans = 0;
    for(auto it : v)
    {
        ans += (x / (long long)it);
    }
    return ans >= (long long)N;
}
long long minimumTime(int N, int NUM, vector<int> &v)
{
      // code here
      sort(v.begin(), v.end());
      long long low = 0, high = 1000000000000000000, ans = -1;
      while(low<=high)
      {
          long long mid = low + (high - low)/2;
          if(box(v, NUM, mid))
          {
              ans = mid;
              high = mid-1;
          }
          else low = mid + 1;
      }
      return ans;
  }
