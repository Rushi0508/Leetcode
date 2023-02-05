//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


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
	void dfsT(int node, int vis[], vector<int> adjT[]){
	    vis[node] = 1;
	    for(auto it: adjT[node]){
	        if(vis[it]==0){
	            dfsT(it,vis,adjT);
	        }
	    }
	}
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
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
        
        int scc=0;
        while(!s.empty()){
            int node = s.top();
            s.pop();
            if(vis[node]==0){
                scc++;
                dfsT(node,vis,adjT);
            }
        }
        return scc;
        
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
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends