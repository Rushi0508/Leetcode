//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
        int ans;
        int sundays = S/7;
        int total_food = S*M;
        int buying_days = S-sundays;
        if(total_food%N == 0){
            ans = total_food/N;
        }
        else{
            ans =  total_food/N + 1;
        }
        if(ans<=buying_days){
            return ans;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}
// } Driver Code Ends