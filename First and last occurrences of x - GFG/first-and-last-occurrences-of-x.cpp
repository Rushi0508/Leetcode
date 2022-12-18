//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends



int binarySearchLeft(int arr[], int n, int x){
    int l = 0, r = n-1, found = -1;
    int middle;
    while(l <= r){
        middle = (l + r)/2;
        if(arr[middle] == x){
            found = middle;
            r = middle - 1;
        }
        else if(arr[middle] > x){
            r = middle - 1;
        }
        else{
            l = middle + 1;
        }
    }
    return found;
}

int binarySearchRight(int arr[], int n, int x){
    int l = 0, r = n-1, found = -1;
    int middle;
    while(l <= r){
        middle = (l + r)/2;
        if(arr[middle] == x){
            found = middle;
            l = middle + 1;
        }
        else if(arr[middle] > x){
            r = middle - 1;
        }
        else{
            l = middle + 1;
        }
    }
    return found;
}

vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans(2);
    ans[0] = binarySearchLeft(arr,n,x);
    ans[1] = binarySearchRight(arr,n,x);
    return ans;
}


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends