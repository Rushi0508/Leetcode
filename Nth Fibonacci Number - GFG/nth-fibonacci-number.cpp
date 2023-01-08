//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int fib(int n, vector<long long int> &dp){
        if(n<=1) return n%1000000007;
        
        if(dp[n]!=-1){
            return dp[n]%1000000007;
        }
        dp[n] = fib(n-1, dp) + fib(n-2,dp);
        return dp[n]%1000000007;
    }
    long long int nthFibonacci(long long int n){
        // code here
        vector<long long int> dp(n+1);
        for(int i=0;i<n+1;i++){
            dp[i] = -1;
        }
       return fib(n,dp)%1000000007;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends