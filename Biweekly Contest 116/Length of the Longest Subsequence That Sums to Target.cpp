Question:- https://leetcode.com/problems/length-of-the-longest-subsequence-that-sums-to-target/

class Solution {
public:
    int dp[1001][1001];
    int helper(vector<int> &v, int i, int target)
    {
        if(target == 0)return 0;
        if(i>=v.size() || target<0)return INT_MIN;
        
        if(dp[i][target] != -1)return dp[i][target];
        
        // int way = INT_MIN;
        if(v[i] <= target)
        {
            return dp[i][target] =  max(1 + helper(v, i+1, target-v[i]), helper(v, i+1, target)); 
        }
        else
        {
            return dp[i][target] = helper(v, i+1, target);
        }
    }
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        memset(dp, -1, sizeof dp);
        int ans = helper(nums, 0, target);
        if(ans < 0)return-1;
        return ans; 
    }
};
