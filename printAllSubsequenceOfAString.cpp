#include<bits/stdc++.h>
using namespace std;
void printSubsequence(string input,int index,vector<string> &ans,int n,string temp)
{
    if(index==n)
    {
        ans.push_back(temp);
        return;
    }
    printSubsequence(input,index+1,ans,n,temp+input[index]);
    printSubsequence(input,index+1,ans,n,temp);
}
int main()
{

    vector<string> ans;
    string input = "abcd";
    int n=input.length();
    string temp="";
    printSubsequence(input,0, ans,n,temp);
    for(auto x:ans)
    cout<<x<<" ";
 
    return 0;
}