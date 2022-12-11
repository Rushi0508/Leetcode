//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
        //sliding window approach
        int good=0,bad=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=k){
                good++;
            }
        }
        for(int i=0;i<good;i++){
            if(arr[i]>k){
                bad++;
            }
        }
        int i=0,j=good;
        int ans=bad;
        while(j<n){
            if(arr[i]>k){
                bad--;
            }
            if(arr[j]>k){
                bad++;
            }
            i++;j++;
            ans = min(bad,ans);
        }
        return ans;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends