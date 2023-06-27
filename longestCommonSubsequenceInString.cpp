class Solution
{
    //find the length of longest common subsequence of two strings
    public:
    //recursive approach
     int f(int index1,int index2,string &s1,string &s2)
    {
        if(index1<0||index2<0)//if index out of bound, return 0 because no more common char 
        return 0;
        
        if(s1[index1]==s2[index2])//if the char are same then, means one char matched return +1 with called for further string by decreasing (index1-1,index2-1)
        return 1+f(index1-1,index2-1,s1,s2);
        
        return max(f(index1-1,index2,s1,s2),f(index1,index2-1,s1,s2));
        //if char does not match then call for both the possible(index1-1,index2)and (index1,index2-1) way and choose max(no. of char matches) from them
    }
    int lcs(int x, int y, string s1, string s2)
    {
        
        int ans=f(x-1,y-1,s1,s2,dp);
        return ans;
    }


    //dynamic programming top down
    //declare the dp matrix ,and assign it to all the function calling steps
    //while returning initialize the dp matrix 
    //if element present in the dp then return that
    int f(int index1,int index2,string &s1,string &s2,vector<vector<int>> &dp)
    {
        if(index1<0||index2<0)
        return 0;
        
        if(dp[index1][index2]!=-1)
        return dp[index1][index2];

        if(s1[index1]==s2[index2])
        return dp[index1][index2]=1+f(index1-1,index2-1,s1,s2,dp);
        
        return dp[index1][index2]= max(f(index1-1,index2,s1,s2,dp),f(index1,index2-1,s1,s2,dp));
    }
    int lcs(int x, int y, string s1, string s2)
    {
        vector<vector<int>> dp(x,vector<int>(y,-1));
        int ans=f(x-1,y-1,s1,s2,dp);
        return ans;
    }
};