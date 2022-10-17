class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            if((s[i]<=122 && s[i]>=97) || (s[i]>=48 && s[i]<=57)){
                ans += s[i];
            }if(s[i]<=90 && s[i]>=65){
                s[i] = s[i] + 32;
                ans+=s[i];
            }
        }
        string rev = ans;
        reverse(rev.begin(),rev.end());
       
        if(rev==ans){
            return 1;
        }
        return 0;
    }
};