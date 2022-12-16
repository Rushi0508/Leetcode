//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        int left=0,right=0,maxlength=0,t=2;
        int n = s.length();
        while(t--){
            left=0;
            right=0;
            for(int i=0;i<n;i++){
                if(s[i]=='(')left++;
                else right++;
                
                if(left==right){
                    maxlength=max(maxlength,2*left);
                }
                //when travelling from 0 to n-1    
                if(t%2==1 && right>left){
                    left=0;
                    right=0;
                }
                //when travelling from n-1 to 0
                if(t%2==0 && left>right){
                    left=0;
                    right=0;
                }
            }
            //now we need to do the same thing from the other side;
            reverse(s.begin(),s.end());
        }
        return maxlength;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}

// } Driver Code Ends