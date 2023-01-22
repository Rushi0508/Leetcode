//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        vector<int> v;
        for(int i=0;i<sizeOfStack;i++){
            v.push_back(s.top());
            s.pop();
        }
        int i=0;
        reverse(v.begin(),v.end());
        int n = sizeOfStack;
        if(n%2==0){
            for(int i=0;i<n;i++){
            if(i!=ceil((sizeOfStack-1)/2)){
                s.push(v[i]);
            }
        }
        }else{
            for(int i=0;i<n;i++){
            if(i!=ceil((sizeOfStack)/2)){
                s.push(v[i]);
            }
        }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends