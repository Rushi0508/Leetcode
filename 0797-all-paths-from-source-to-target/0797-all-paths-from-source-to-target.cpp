class Solution {
public:
    void helper(vector<vector<int>>& graph,int node,vector<vector<int>> &ans,vector<int>&ans1,int dest)
    {
        // vis[node]=1;
        ans1.push_back(node);
        for(auto j:graph[node])
        {
          if(j==dest)
          {
            ans1.push_back(dest);
            ans.push_back(ans1);
            ans1.pop_back();
            continue;
          }      
            helper(graph,j,ans,ans1,dest);        
          ans1.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
      vector<int>ans1;
      vector<vector<int>> ans;
      int dest=graph.size()-1;
      helper(graph,0,ans,ans1,dest);
      return ans;

      
        
    }
};