//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int n) {
        // code here
        vector<int> ans;
        if(arr[n-1]!=9){
            arr[n-1] = arr[n-1] + 1;
            ans = arr;
            return ans;
        }
        if(n==1 && arr[0]==9){
            ans.push_back(1);
            ans.push_back(0);
            return ans;
        }
        int carry = 1;
        ans.push_back(0);
        for(int i=n-2;i>=0;i--){
            if(carry+arr[i]==10){
                ans.push_back(0);
                carry = 1;
                if(i==0){
                    ans.push_back(1);
                }
            }else{
                ans.push_back(arr[i]+carry);
                carry = 0;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends