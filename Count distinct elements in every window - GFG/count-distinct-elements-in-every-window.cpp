//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<k;i++){
            mp[A[i]]++;
        }
        ans.push_back(mp.size());
        int i=1,j=k;
        while(j<n){
            mp[A[j]]++;
            if(mp[A[i-1]]>1){
                mp[A[i-1]]--;
            }
            else if(mp[A[i-1]]==1){
                mp.erase(A[i-1]);
            }
            ans.push_back(mp.size());
            i++;j++;
        }
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

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends