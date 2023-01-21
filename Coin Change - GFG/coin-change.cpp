//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int N, int sum) {
        long long int dp[N][sum+1];
        // for(int i=0;i<=sum;i++){
        //     dp[0][i] = 0;
        // }
        for(int i=0;i<N;i++){
            for(int j=0;j<=sum;j++){
                if(j==0){
                    dp[i][j] = 1; 
                }
                else if(coins[i] > j){
                    if(i-1 < 0){
                        dp[i][j] = 0;
                    }
                    else{
                        dp[i][j] = dp[i-1][j];
                    }
                }
                else{
                    if(i-1 < 0){
                        dp[i][j] = 0 + dp[i][j-coins[i]];
                    }else{
                        dp[i][j] = dp[i-1][j] + dp[i][j-coins[i]];
                    }
                }
            }
        }
        return dp[N-1][sum];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends