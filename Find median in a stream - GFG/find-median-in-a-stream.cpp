//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
       public:
 priority_queue<int> pqMax, pqMin;
    //Function to insert heap.
    void insertHeap(int &x){

        if(pqMax.empty() or x > pqMax.top())
            pqMin.push(-x);
        else
            pqMax.push(x);

        balanceHeaps();
    }

    
    //Function to balance heaps.
    void balanceHeaps(){

        if(pqMax.size() == pqMin.size() + 2){
            pqMin.push(-pqMax.top());
            pqMax.pop();
        }

        if(pqMax.size() == pqMin.size() - 2){
            pqMax.push(-pqMin.top());
            pqMin.pop();
        }

        return;
    }
    

    //Function to return Median.
    double getMedian(){

        if(pqMax.size() == pqMin.size())
            return (pqMax.top() - pqMin.top()) / 2;

        if(pqMax.size() < pqMin.size())
            return -pqMin.top();

        if(pqMax.size() > pqMin.size())
            return pqMax.top();
     
    }
};


//{ Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}
// } Driver Code Ends