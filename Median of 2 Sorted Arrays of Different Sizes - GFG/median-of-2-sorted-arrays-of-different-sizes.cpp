//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        int n = array1.size();
        int m = array2.size();
        int arr[n+m];
        int i=0,j=0,k=0;
        while(i<n && j<m){
            if(array1[i]<array2[j]){
                arr[k]=array1[i];
                k++;i++;
            }else{
                arr[k]=array2[j];
                k++;j++;
            }
        }
        while(i<n){
            arr[k]=array1[i];
            k++;i++;
        }
        while(j<m){
            arr[k]=array2[j];
            k++;j++;
        }
        int len = n+m;
        if(len%2==0){
            double ans = arr[len/2] + arr[len/2 - 1];
            return ans/2;
        }else{
            return arr[len/2];
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
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends