//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int n = str.length();
        int sum = 0;
        int digit;
        int i=1;
        int l = n;
        l--;
        if(n==1){
            return str[0] - '0';
        }
        if(str[0]=='-'){
            for(int j=1;j<n;j++){
                if(!(str[j] >= '0' && str[j]<='9')){
                    return -1;
                }
                i = i*10;
            }
            i=i/10;
            for(int k=1;k<n;k++){
                digit = str[k] - '0';
                sum = sum + digit * i;
                i = i/10;
            }
            return 0-sum;
        }
        else{
            for(int j=0;j<n;j++){
                if(!(str[j] >= '0' && str[j]<='9')){
                    return -1;
                }
                i = i*10;
            }
            i = i/10;
            for(int k=0;k<n;k++){
                digit = str[k] - '0';
                sum = sum + digit * i;
                i = i/10;
            }
            return sum;
        }
        
        
       
        return sum;
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends