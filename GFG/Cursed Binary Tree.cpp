Question:- https://practice.geeksforgeeks.org/contest/job-a-thon-24-hiring-challenge/problems

  int helper(Node* root, int left, int right)
  {
    //   if(!root)return 0;
      
      int ans = 0;
      if(left>0 && root->left)ans = max(ans, helper(root->left, left-1, right));
      if(right>0 && root->right)ans = max(ans, helper(root->right, left, right-1));
      return root->data + ans;
  }
  
  int solve(Node* root, int k)
  {
      int ans = helper(root, k, k);
      if(root->left)ans = max(ans, solve(root->left, k));
      if(root->right)ans = max(ans, solve(root->right, k));
      return ans;
  }
    int maximumSum(int n, Node* root, int k) {
        // code here
        return solve(root, k);
    }
