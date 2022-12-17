//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            string num;
            vector<string>arr;
            int dot_cnt=0;
            if(count(s.begin(),s.end(),'.')!=3)return false;
            for(int i=0;i<s.length();i++){
                num="";
                while(i<s.length() and s[i]!='.'){
                    if(s[i]=='0' and s[i+1]!=0 and s[i+1]!='.')return false;
                    num+=s[i];
                    i++;
                }
                arr.push_back(num);
                if(num=="a" || num=="b" || num=="o")return false;
                if(num=="00" || num=="000" || num=="0000")return false;
                if(s[i]=='.' and s[i+1]=='.')return false;
                if(stoi(num)>255)return false;
            }
            if(arr.size()!=4)return false;
            return true;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends