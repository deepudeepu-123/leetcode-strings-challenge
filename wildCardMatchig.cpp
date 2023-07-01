/*Given an input string (s) and a pattern (p), implement wildcard pattern matching with support for '?' and '*' where:

'?' Matches any single character.
'*' Matches any sequence of characters (including the empty sequence).
The matching should cover the entire input string (not partial).

 

Example 1:

Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".*/
bool solve(string &s,string &p,int i1,int i2, vector<vector<int>> &dp)
    {
        if(i1<0&&i2<0)
        return true;
        if(i1>=0&&i2<0)
        return false;
        if(i2>=0&&i1<0)
        {
            for(int i=i2;i>=0;i--)
            {
                if(p[i]!='*')
                return false;
            }
            return true;
        }
         if(dp[i1][i2]!=-1)
             return dp[i1][i2];
        if(s[i1]==p[i2]||p[i2]=='?')
        return dp[i1][i2]= solve(s,p,i1-1,i2-1,dp);
        
        if(p[i2]=='*')
        return dp[i1][i2]= solve(s,p,i1-1,i2,dp)|| solve(s,p,i1,i2-1,dp); 
        
        return dp[i1][i2]=false;
        
    }
    bool isMatch(string s, string p)
    {
        int i1=s.length();
        int i2=p.length();
        vector<vector<int>> dp(i1,vector<int>(i2,-1));
        bool ans=solve(s,p,i1-1,i2-1,dp);
        return ans;
    }