class Solution {
  public:
  //find the minimum number of steps required to convert string(s) to string(t) 
  //steps involved:-
  //1-insertion
  //2-deletion
  //3-replace

    int f(string &s,string &t,int i,int j,vector<vector<int>> &dp)
    {
        if(i==0)//if index of one string go out of bond then return remaining number of chars of other string  
        return j;
        if(j==0)//if index of one string go out of bond then return remaining number of chars of other string
        return i;
        
        if(dp[i-1][j-1]!=-1)//overlapping 
        return dp[i-1][j-1];
        
        if(s[i-1]==t[j-1])
        return dp[i-1][j-1]=f(s,t,i-1,j-1,dp);//if char matches
        
        return dp[i-1][j-1]=1+ min(f(s,t,i,j-1,dp),min(f(s,t,i-1,j,dp),f(s,t,i-1,j-1,dp)));
        //minimum steps from (insertion, deletion, and replacing)
    }
    int editDistance(string s, string t) {
        int i=s.length();
        int j=t.length();
        vector<vector<int>> dp(i,vector<int>(j,-1));
        int ans=f(s,t,i,j,dp);
        return ans;
    }
};