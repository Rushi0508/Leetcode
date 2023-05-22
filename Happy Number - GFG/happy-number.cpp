//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isHappy(int n){
        // code here
        if(n == 1)
            return 1;
        if(n > 1 && n <= 4)
            return 0;
        int sum = 0;
        while(n > 0)
         {    
            int m = n % 10;    
            sum = sum + (m * m);    
            n = n / 10;
        }
        return isHappy(sum);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends