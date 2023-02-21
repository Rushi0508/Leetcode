//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

//User function template for C++
class Solution{
public:	
	
	int countTriplet(int a[], int n)
	{
	    // Your code goes here
	    int sum=0;
	    int count ;
	    map<int,int >m;
	   for(int i=0;i<n;i++){
	       m[a[i]]=i;
	   }
	   for(int i=0;i<n;i++){
	       for(int j=i+1;j<n;j++){
	           
	           sum=a[i]+a[j];
	           if(m.find(sum)!=m.end()){
	               if(m[sum]!=i && m[sum]!=j){
	                   count++;
	               }
	           }
	       }
	   }
	   return count ;
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
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}
// } Driver Code Ends