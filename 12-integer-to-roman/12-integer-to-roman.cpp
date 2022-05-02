class Solution
{
public:
string intToRoman(int num)
{
string ans="";
//1000 ke saare notes
while(num>=1000)
{
ans=ans+'M';
num-=1000;
}
//900 ke saare notes
if(num>=900)
{
ans=ans+"CM";
num-=900;
}
while(num>=500)
{
ans=ans+'D';
num-=500;
}
if(num>=400)
{
ans+="CD";
num-=400;
}
while(num>=100)
{
ans+='C';
num-=100;
}
if(num>=90)
{
ans+="XC";
num-=90;
}
while(num>=50)
{
ans+='L';
num-=50;
}
if(num>=40)
{
ans+="XL";
num-=40;
}
while(num>=10)
{
ans+='X';
num-=10;
}
if(num>=9)
{
ans+="IX";
num-=9;
}
while(num>=5)
{
ans+='V';
num-=5;
}
if(num>=4)
{
ans+="IV";
num-=4;
}
while(num>0)
{
ans=ans+'I';
num-=1;
}
return ans;

}
};

