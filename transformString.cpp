/*Given two strings A and B. Find the minimum number of steps required to transform string A into string B. The only allowed operation for the transformation is selecting a character from string A and inserting it in the beginning of string A.

Example 1:

Input:
A = "abd"
B = "bad"
Output: 1
Explanation: The conversion can take place in
1 operation: Pick 'b' and place it at the front.*/
int solve(int i,int j,string &A,string &B)
    {
        if(i==0)
        {
          if(A[i]==B[j])
          return j;
          else
          return j+1;
        }
        
        if(A[i]==B[j])
        return solve(i-1,j-1,A,B);
        return solve(i-1,j,A,B);
        
        
    }
    int transform (string A, string B)
    {
        int i=A.length();
        int j=B.length();
        if(i!=j)
        return -1;
        map<char,int> mp;
        for(int i=0;i<A.length();i++)
        {
            mp[A[i]]++;
        }
        for(int i=0;i<j;i++)
        {
            if(mp[B[i]]<=0)
            return -1;
            else
            mp[B[i]]--;
        }
        int a=solve(i-1,j-1,A,B);
        
        return a;
    }
