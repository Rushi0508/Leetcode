//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfsCheck(int node, vector<int> adj[], int vis[], int pvis[]){
        vis[node] = 1;
        pvis[node] = 1;
        // traverse for adj nodes
        for(auto it: adj[node]){
            if(!vis[it]){
                if(dfsCheck(it,adj,vis,pvis)==1) return 1;
            }
            else if(vis[it]==1 && pvis[it]==1){
                return 1;
            }
        }
        pvis[node] = 0;
        return false;
    }
    bool isCyclic(int n, vector<int> adj[]) {
        // code here
        int vis[n] = {0};
        int pvis[n] = {0};
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(dfsCheck(i,adj,vis,pvis)==1) return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends