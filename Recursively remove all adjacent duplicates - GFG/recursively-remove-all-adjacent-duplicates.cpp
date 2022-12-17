//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    
private:
    string removal(string s){
        string str;
        int i=0,n = s.length();
        while(i<n){
            if(s[i] != s[i+1]){
                str += s[i];
            }
            while(s[i]==s[i+1]){
                i++;
            }
            
            i++;
        }
        return str;
    }
    
    
public:
   
  

    string rremove(string s){
        // code here
        string s1;
        while(s1.size()!=s.size()){
            s1 = s;
            s = removal(s);
            
        }
        return s;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends