//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string computeParity(int N) {
        // code here
        bool parity = 0;
        while (N)
        {
            parity = !parity;
            N     = N & (N - 1);
        }   
        if(parity==1){
            return "odd";
        }
        return "even";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.computeParity(N) << endl;
    }
    return 0;
}
// } Driver Code Ends