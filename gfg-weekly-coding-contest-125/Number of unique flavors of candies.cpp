Question:- https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-125/problems
  3rd:


int maximizeFlavors(vector<int>& candies, int k)
{
        // Write your code here
        map<int, int> mpp;
        int n = candies.size();
        for(auto it : candies)
        {
            mpp[it]++;
        }
        int unique = mpp.size();
        int ans=0;
        for(int i=0; i<k; i++)
        {
            if(--mpp[candies[i]]==0)mpp.erase(candies[i]);
        }
        ans = max(ans, (int)mpp.size());
        
        
        for(int i=k; i<n; i++)
        {
            mpp[candies[i-k]]++;
            if(--mpp[candies[i]]==0)mpp.erase(candies[i]);
            ans = max(ans, (int)mpp.size());
        }
        return ans;
}
