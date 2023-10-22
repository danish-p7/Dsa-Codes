Question:- https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-125/problems
4th

int stableArray(vector<int>& a)
{
      //Code Here
      map<int, int> mpp;
      for(int x : a)mpp[x]++;
      vector<int> v;
      for(auto it : mpp)v.push_back(it.second);
      sort(v.begin(), v.end());
      int n=a.size();
      int ans = n - (v[0]*(int)v.size());
      for(int i=1; i<(int)v.size(); i++)
      {
          if(v[i]!=v[i-1])
          {
              ans = min(ans, (n - (v[i]*((int)v.size()-i))));
          }
      }
      return ans;
}
