

class Solution {
public:
    bool backspaceCompare(string s, string t) {
string s1="",s2="";
for(int i=0;i<s.size();i++)
{
if(s[i]!='#')
{
s1.push_back(s[i]);
}
else if(s[i]=='#')
{
if(!s1.empty())
s1.pop_back();
else
continue;
}
}
for(int i=0;i<t.size();i++)
{
if(t[i]!='#')
s2.push_back(t[i]);
else
{
if(!s2.empty())
s2.pop_back();
else
continue;
}
}
return s1==s2;
}
   
};