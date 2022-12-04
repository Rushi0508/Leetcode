//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// User function Template for C++

class Solution{
    public:
    bool prime(int n){
        if(n<=1)
        return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)
            return false;
        }
        return true;
    }
public:
    vector<int> primeDivision(int N){
        vector<int>ans;
        for(int i=2;i<N;i++){
            int n=i;
            if(prime(n)){
                int num=N-n;
                if(prime(num)){
                    ans.push_back(n);
                    ans.push_back(num);
                    return ans;
                }
            }
        }
        return ans;
   }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends