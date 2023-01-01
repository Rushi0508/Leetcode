class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string>mp1;
        map<string,char>mp2;
        int n=s.size();
        int j=0;
        int count=0;
        for(int i=0;i<n;i++)
        if(s[i]==' ')
        count++;
        for(int i=0;i<pattern.size();i++)
        {
            string res="";
            while(s[j]!=' '&&j<n)
            {
                res+=s[j];
                j++;
            }
            j++;
            
            if(mp2.find(res)!=mp2.end())
            {
                if(mp2[res]!=pattern[i])
                return false;
            }
            else
            mp2[res]=pattern[i];
            if(mp1.find(pattern[i])!=mp1.end())
            {
            if(mp1[pattern[i]]!=res){
                return false;
            }
            }
            else
            mp1[pattern[i]]=res;
        }
        
        if(++count!=pattern.size())
        return false;
        return true;
    }
};