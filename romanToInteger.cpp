class Solution {
public:
int f(char a)
{
if(a=='I')
return 1;
if(a=='V')
return 5;
if(a=='X')
return 10;
if(a=='L')
return 50;
if(a=='C')
return 100;
if(a=='D')
return 500;
if(a=='M')
return 1000;
return -1;
}
    int romanToInt(string s) {
    int b1,b2;
    int res=0;
        for(int i=0;i<s.length();i++)
        {
        b1=f(s[i]);
        b2=f(s[i+1]);
        if(b1>=b2)
        {
        res+=b1;

        }
        else
    {
    res+=b2-b1;
    i++;
    }
        }
        return res;
    }
};