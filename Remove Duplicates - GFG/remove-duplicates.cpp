//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	   vector<char> v1;
    int a[26] = {0};
    int n = S.length();
    string ans;
    for (int i = 0; i < n; i++)
    {

        if (a[S[i] - 97] == 0)
        {
            a[S[i] - 97] += 1;
            v1.push_back(S[i]);
        }
    }
    for (int i = 0; i < v1.size(); i++)
    {
        
        ans+=v1[i];
    }
    return ans;
}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends