#include<bits/stdc++.h>
using namespace std;
bool isStringRotationOfOther(string s1,string s2)
{
    if(s1.length()!=s2.length())
    return false;
    string temp=s1+s1;
    return temp.find(s2)!=-1;
}
int main()
{
    string s1="ABCD";
    string s2="BCDA";
    cout<<isStringRotationOfOther(s1,s2);

    return 0;
}