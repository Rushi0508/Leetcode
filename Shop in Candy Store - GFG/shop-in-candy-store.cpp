//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies,candies+N);
        
        // For Minimum Money
        int amount = 0;
        int j=N-1;
        int i = 0;
        while(i<=j){
            amount += candies[i];
            j  = j - K;
            i++;
        }
        vector<int> ans;
        ans.push_back(amount);
        amount = 0;
        j=N-1;
        i = 0;
        while(i<=j){
            amount += candies[j];
            i  = i + K;
            j--;
        }
        ans.push_back(amount);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends