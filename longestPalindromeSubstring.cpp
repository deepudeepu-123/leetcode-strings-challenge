class Solution {
public:
string generate(int i,int j,string s)
{
    string ans="";
    for(int k=i;k<=j;k++)
    {
        ans+=s[k];

    }
    return ans;
}
    string longestPalindrome(string s) {
       int start=0,end=1;
       for(int i=1;i<s.length();i++)
       {
           int l=i-1;
           int h=i;
           while(l>=0&&h<s.length()&&s[l]==s[h])
           {
               if(h-l+1>end)
               {
                   start=l;
                   end=h-l+1;
               }
               l--;
               h++;

           }
           l=i-1;
           h=i+1;
            while(l>=0&&h<s.length()&&s[l]==s[h])
           {
               if(h-l+1>end)
               {
                   start=l;
                   end=h-l+1;
               }
               l--;
               h++;

           }
       } 
       string ans1=generate(start,end+start-1,s);
       return ans1;
    }
};