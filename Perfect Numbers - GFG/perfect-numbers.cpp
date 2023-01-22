//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        if(N==1){
            return 0;
        }
        long long root = sqrt(N);
        int sum = 0;
        for(int i=2;i<=root;i++){
            if(N%i==0){
                sum = sum + i;
                if(N/i >root){
                    sum = sum + (N/i);
                }
            }
        }
        sum = sum + 1;
        if(sum==N){
            return 1;
        }
        return 0;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends