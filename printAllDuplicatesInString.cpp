#include<bits/stdc++.h>

using namespace std;
void PrintDuplicates(string s)
{
    map<char,int> mp;
    map<char,int>::iterator it;
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }
    for(it=mp.begin();it!=mp.end();++it)
    {
        if(it->second>1)
        cout<<it->first<<"="<<it->second<<endl;

    }
   
}
int main()
{
    string s="test string";
PrintDuplicates(s);
    return 0;
}