//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    bool knows(vector<vector<int> >& M,int a,int b,int n){
        if(M[a][b]==1)
        return 1;
        else
        return 0;
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> s;
        //push all in stack
        for(int i=0;i<n;i++){
            s.push(i);
        }
        while(s.size()>1){
            int a = s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if(knows(M,a,b,n)){
                s.push(b);
            }else{
                s.push(a);
            }
        }
        //last element left is potential element.
        int candidate = s.top();
        bool rowCheck=0;
        int r=0;
        for(int i=0;i<n;i++){
            if(M[candidate][i]==0){
                r++;
            }
        }
        if(r==n) rowCheck=1;
        bool colCheck=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(M[i][candidate]==1){
                c++;
            }
        }
        if(c==n-1) colCheck = 1;
        if(rowCheck==1 && colCheck==1){
            return candidate;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends