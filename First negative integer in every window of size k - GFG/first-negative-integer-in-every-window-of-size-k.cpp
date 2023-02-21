//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends




vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
    int i=0,j=0,k=0; // k is iterator for v
    vector<long long> ans;
    vector<long long> v;
    
    while(j<N){
        // calculation
        if(A[j]<0){
            v.push_back(A[j]);
        }
        
        if(j-i+1<K){
            j++;
        }
        else if(j-i+1==K){
            if(v.size()){
                ans.push_back(v.front());
            }
            else{
                ans.push_back(0);
            }
            
            // maintaing the window size
            if(A[i]<0){
               v.erase(v.begin()); // removing the first element from vector
            }
            i++;
            j++;
            
        }
        
    }
    return ans;
 }