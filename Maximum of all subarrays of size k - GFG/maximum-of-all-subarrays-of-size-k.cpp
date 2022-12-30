//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> result(n-k+1,0);
        priority_queue<pair<int,int>> pq;
        for(int i = 0; i<k; i++)
            pq.push({arr[i],i});
        result[0] = pq.top().first;
        for(int i = k; i<n; i++){
            pq.push({arr[i],i});
            while(i - pq.top().second >= k) pq.pop();
            result[i-k+1] = pq.top().first;
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends