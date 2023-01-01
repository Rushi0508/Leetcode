//{ Driver Code Starts
//Initial template for C++

#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;  // https://www.geeksforgeeks.org/factorial-large-number-using-boost-multiprecision-library/
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    cpp_int factorial(int n)
    {
        if(n==0)
        return 1;
        return n*factorial(n-1);
        
    }
    //Function to find the nth catalan number.
    cpp_int findCatalan(int n) 
    {
        //code here
        cpp_int a=factorial(2*n);
        cpp_int b=factorial(n);
        return a/(b*b*(n+1));
    }
};

//{ Driver Code Starts.

int main() 
{
    //taking count of testcases
	int t;
	cin>>t;
	while(t--) {
	    
	    //taking nth number
	    int n;
	    cin>>n;
	    Solution obj;
	    //calling function findCatalan function
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends