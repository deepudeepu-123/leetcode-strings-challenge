class Solution {
public:
//Split the binary string into substrings with equal number of 0s and 1s
//0111100010->01 111000 10
    int maxSubStr(string str){
         int n=str.size();
        int c=0;
        int zeros=0,ones=0;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='0')zeros++;
            if(str[i]=='1')ones++;
            if(zeros==ones)c++;
        }
        if(zeros!=ones) return -1;
        return c;
        // stack<char> st;
        // char a;
        // bool b;
        // int ans=0;
        // for(int i=0;i<str.length();i++)
        // {
        //     a=str[i];
        //     if(st.empty())
        //     {
        //         st.push(a);
        //         b=false;
        //     }
        //     else if(a=='1'&&st.top()=='0')
        //     {
        //     st.pop();
        //     if(b==false)
        //     {
        //         ans++;
        //         b=true;
        //     }
            
        //     }
        //     else if(a=='0'&&st.top()=='1')
        //     {
        //     st.pop();
        //     if(b==false)
        //     {
        //         ans++;
        //         b=true;
        //     }
        //     }
        //     else
        //     {
        //     st.push(a);
        //     b=false;
        //     }
            
        // }
        // if(st.empty())
        // return ans;
        // else
        // return -1;
    }
};