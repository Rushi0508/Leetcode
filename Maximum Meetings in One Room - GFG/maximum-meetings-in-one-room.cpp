//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution{
public:
   static bool cmp(pair<int ,pair<int,int>>p1,pair<int,pair<int,int>>p2){
       return p1.second<p2.second;
   }
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<pair<int,pair<int,int>>>v;
        vector<int>ans;
        for(int i=0;i<N;i++){
            v.push_back({S[i],{F[i],i+1}});
        }
        sort(v.begin(),v.end(),cmp);
        int endt=v[0].second.first;
        int count=v[0].second.second;
        ans.push_back(count);
        for(int i=1;i<N;i++){
           // count++;
            if(endt<v[i].first){
                endt=v[i].second.first;
                ans.push_back(v[i].second.second);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends