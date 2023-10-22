Question:- https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-125/problems
1st question:-

vector<vector<int>> generateAdjacencyList(int V, int E, vector<vector<int>> &edges)
{
    // Write Code Here
  vector<set<int>> adj(V);
  for(int i=0;i<E;i++)
  {
      adj[edges[i][0]].insert(edges[i][1]);
      adj[edges[i][1]].insert(edges[i][0]);
  }
  
  vector<vector<int>> ans(V);
  
  for(int i=0; i<V; i++)
  {
      for(auto x :adj[i])
      {
          ans[i].push_back(x);
      }
  }
  
  return ans;
}
