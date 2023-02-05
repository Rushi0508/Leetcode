//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
	public:
	void dfs(int node, int vis[], vector<int> adj[], stack<int> &s){
	    vis[node] = 1;
	    for(auto it: adj[node]){
	        if(vis[it]==0){
	            dfs(it,vis,adj,s);
	        }
	    }
	    s.push(node);
	}
	void dfsT(int node, int vis[], vector<int> adjT[], vector<int> &v){
	    vis[node] = 1;
	    v.push_back(node);
	    
	    for(auto it: adjT[node]){
	        if(vis[it]==0){
	            dfsT(it,vis,adjT,v);
	        }
	    }
	}
    //Function to return a list of lists of integers denoting the members 
    //of strongly connected components in the given graph.
    vector<vector<int>> tarjans(int V, vector<int> adj[])
    {
        //code here
        //code here
        stack<int> s;
        int vis[V] = {0};
        
        // 1. Sort vertices according to their finishing time.
        
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                dfs(i,vis,adj,s);
            }
        }
        
        // 2. Reverse the graph i.e reverse edges.
        
        vector<int> adjT[V];
        for(int i=0;i<V;i++){
            vis[i] = 0;
            for(auto it: adj[i]){
                // implies i->it.
                // we need it->i.
                adjT[it].push_back(i);
            }
        }
        
        // 3. Perform dfs as per sorted vertices and print or count the SCC. 
        
        vector<vector<int>> ans;
        while(!s.empty()) {
            int node = s.top();
            s.pop();
            
            if(!vis[node]) {
                vector<int> temp;
                dfsT(node, vis, adjT, temp); // dfs call
                sort(temp.begin(), temp.end());
                ans.push_back(temp);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for(int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<vector<int>> ptr = obj.tarjans(V, adj);

        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                if(j==ptr[i].size()-1)
                    cout<<ptr[i][j];
                else
                    cout<<ptr[i][j]<<" ";
            }
            cout<<',';
        }
        cout<<endl;
    }

    return 0;
}


// } Driver Code Ends