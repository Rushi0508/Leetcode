//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        unordered_map<char,int> mp;
        for(int i=0;i<str.length();i++){
            if(mp[str[i]]>0 and i!=0) continue;
            mp[str[i]] = i;
        }
        int minIndex = INT_MAX;
        for(int i=0;i<patt.length();i++){
            if(patt[i]==str[0]){
                return 0;
            }
            if(mp[patt[i]]!=0){
                minIndex = min(mp[patt[i]], minIndex);
            }
        }
        if(minIndex==INT_MAX) return -1;
        return minIndex;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends