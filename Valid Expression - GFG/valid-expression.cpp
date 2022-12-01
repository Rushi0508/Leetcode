//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends


bool valid(string s)
{
    // code here
    stack<int> st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else if((st.top()=='(' && s[i]==')') || (st.top()=='{' && s[i]=='}') || (st.top()=='[' && s[i]==']')){
            st.pop();
        }else{
            st.push(s[i]);
        }
    }
    if(st.empty()){
        return 1;
    }
    return 0;
}