//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        vector<string> v;
        string temp = "";
        for(int i=0;i<s.length();i++){
            if(s[i]!='.'){
                temp = temp + s[i];
            }else{
                v.push_back(temp);
                temp = "";
            }
        }
        v.push_back(temp);
        string ans = "";
        for(int i=v.size()-1;i>=0;i--){
            ans = ans + v[i];
            if(i!=0){
                ans +='.';
            }
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends