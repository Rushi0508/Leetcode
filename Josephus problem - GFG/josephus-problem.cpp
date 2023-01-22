//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int josephus(int n, int k)
    {
       //Your code here
        queue<int> q;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
        while(q.size()!=1){
            int c=0;
            while(c < k-1){
                int a = q.front();
                q.push(a);
                q.pop();
                c++;
            }
            q.pop();
        }
        return q.front();
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends