class Solution {
public:
    string reverseWords(string s) {
        vector<string> s1;
        string s2="";
        int length = s.length();
        for(int i=0;i<length;i++){
            if(s[i]!=' '){
                s2+=s[i];
            }
            if(s[i]==' ' || i == length - 1){
                reverse(s2.begin(),s2.end());
                s1.push_back(s2);
                s2.clear();
            }
        }
        string ans = "";
        for(auto it:s1){
            ans += it;
            ans += " ";
        }
        ans.pop_back();
        return ans;
    }
};