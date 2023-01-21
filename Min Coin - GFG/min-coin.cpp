//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int MinCoin(vector<int>coins, int V)
	{
	    // Your code goes here
	    int M = coins.size();
	    int dp[M+1][V+1];
	    for(int i=0; i<=M; i++) {
	        dp[i][0] = 0;
	    }
	    for(int j=1; j<=V; j++) {
	        dp[0][j] = INT_MAX-1;
	    }
	    for(int i=1;i<=M;i++){
	        for(int j=1;j<=V;j++){
	            if(coins[i-1] > j){
	                dp[i][j] = dp[i-1][j];
	            }else{
	                dp[i][j] = min(dp[i-1][j] , 1+dp[i][j - coins[i-1]]);
	            }
	        }
	    }
	    if(dp[M][V] == INT_MAX-1) {
	        return -1;
	    }
	    
	    return dp[M][V];
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, amount;
		cin >> n >> amount;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.MinCoin(nums, amount);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends