//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    static bool cmp(pair<int,int> a, pair<int,int> b){
        return a.second<b.second;
    }
    int minLaptops(int N, int start[], int end[]) {
        // Code here
        sort(start,start+N);
        sort(end,end+N);
        int ans=1,i=1,j=0;
        while(i<N and j<N){
            if(start[i]<end[j]) ans++;
            else j++;
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];
            
        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}
// } Driver Code Ends