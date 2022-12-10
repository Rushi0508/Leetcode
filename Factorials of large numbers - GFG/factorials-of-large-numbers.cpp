//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int n){
        // code here
        
        vector<int> ans;
        int carry=0;
        int currsum=0;
        ans.push_back(1);
        
        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<ans.size();j++)
            {
                currsum=ans[j]*i+carry;
                carry=currsum/10;
                ans[j]=currsum%10;
            }
            while(carry>0)
            {
                currsum=carry%10;
                ans.push_back(currsum);
                carry=carry/10;
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
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends