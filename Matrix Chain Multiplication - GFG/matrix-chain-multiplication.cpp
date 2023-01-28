//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int matrixMultiplication(int n, int arr[])
    {
        int dp[n][n];
        for(int i=0;i<n;i++){
            dp[i][i]=0;
        }
        
        for(int i=n-1;i>=1;i--){
            for(int j=i+1;j<n;j++){
                int mini = 1e9;
               for(int k=i;k<j;k++){
                    int steps = arr[k] * arr[i-1] * arr[j] + dp[i][k] + dp[k+1][j];
                    mini = min(mini,steps);
               }
                dp[i][j] = mini;
            }
        }
        return dp[1][n-1];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends