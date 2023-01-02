//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        unordered_map<char,int> mpp{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L', 50},
            {'C',100},
            {'D',500},
            {'M',1000},
        };
        
        int sum = 0;
        for(int i = 0; i < str.size()-1; i++){
            
            if(mpp[str[i]] < mpp[str[i+1]]){
                sum -= mpp[str[i]];
            }else{
                sum += mpp[str[i]];
            }
        }
        
        sum += mpp[str[str.size() - 1]];
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends