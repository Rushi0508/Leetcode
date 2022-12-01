//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends

class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            
            int i=0, j=0;
            int arr[n+m];
            int k=0;
            while(1)
            {
                if(arr1[i] >= arr2[j])
                {
                    arr[k] = arr2[j];
                    k++;
                    j++;
                    if(j == m) break;
                }
                else if(arr1[i] < arr2[j])
                {
                    arr[k] = arr1[i];
                    i++;
                    k++;
                    if(i == n) break;
                }
            }
            if(i!=n || j!=m)
            {
                while(j != m)
                {
                    arr[k++] = arr2[j++];
                }
                while(i != n) 
                {
                    arr[k++] = arr1[i++];
                }
            }
            
            int v = 0;
            for(int s=0; s<n; s++)
            {
                arr1[s] = arr[v++];
            }
            
            for(int s=0; s<m; s++)
            {
                arr2[s] = arr[v++];
            }
            
            return;
        } 
};



//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends