//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    queue<char> q;
		    vector<int> hash(26,0);
		    string ans="";
		    for(int i=0;i<A.size();i++)
		    {
		        hash[A[i]-'a']++;
		        q.push(A[i]);
		        while(!q.empty() && hash[q.front()-'a']!=1)
		        {
		            q.pop();
		        }
		        if(!q.empty())
		            ans+=q.front();
		        else
		            ans+='#';
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends