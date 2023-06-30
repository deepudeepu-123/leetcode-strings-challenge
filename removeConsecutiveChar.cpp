void solve(string &ans,int index,string &S)
    {
      if(index==S.length())
      return;
      if(S[index]!=S[index+1])
      ans+=S[index];
      solve(ans,index+1,S);
    }
    string removeConsecutiveCharacter(string S)
    {
        string ans="";
        solve(ans,0,S);
        return ans;
        
    }