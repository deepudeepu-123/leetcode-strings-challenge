class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0,j=s.size()-1;
        char temp;
        for(;i<=j;i++,j--)
        {
         temp=s[j];
            s[j]=s[i];
            s[i]=temp;            
        }
    }
};