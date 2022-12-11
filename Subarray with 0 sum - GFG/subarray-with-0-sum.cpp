//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        // Using Prefix Sum there is a property that if we get repeated sum or zero sum than a 
        // subarray is present having 0 sum.
        
        int pre_sum = 0;
        unordered_map<int,bool> mp;
        for(int i=0;i<n;i++){
            pre_sum = pre_sum + arr[i];
            if(mp[pre_sum]==1){
                return 1;
            }
            mp[pre_sum]=1;
            if(pre_sum==0){
                return 1;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends