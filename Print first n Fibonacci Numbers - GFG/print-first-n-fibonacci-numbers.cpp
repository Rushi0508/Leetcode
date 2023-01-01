//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        
        
        vector<long long> ans;
        long long int n1 = 1;
        long long int n2 = 1;
        long long int n3;
        ans.push_back(n1);
        if(n==1){
            return ans;
        }
        ans.push_back(n2);
        if(n==2){
            return ans;
        }
        long long int c=2;
        while(c<n){
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            ans.push_back(n3);
            c++;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends