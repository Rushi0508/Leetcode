//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long  l = 0 , r = n-1 , left_max = 0 , right_max = 0 , ans = 0;
        while(l <= r)
        {
            if(arr[l] <= arr[r])
            {
                if(arr[l] >= left_max)
                {
                    left_max = arr[l];
                }
                else
                {
                    ans += left_max - arr[l];
                }
                l++;
            }
            else
            {
                 if(arr[r] >= right_max)
                {
                    right_max = arr[r];
                }
                else
                {
                    ans += right_max - arr[r];
                }
                r--;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends