//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
        unordered_map<char,int> mp;
        int c=0;
        for(int i=0;i<str1.length();i++){
            mp[str1[i]]++;
        }
        for(int i=0;i<str2.length();i++){
            if(mp[str2[i]]){
                mp[str2[i]]--;
            }
            else if(!mp[str2[i]]){
                c++;
            }
        }
        if(c<=k && str1.length()==str2.length()){
            return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}
// } Driver Code Ends