class Solution {
public:
    string intToRoman(int num) {
        int values[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string symbols[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans="";
        int a=sizeof(values)/sizeof(values[0]);
        for(int i=0;i<a;i++)
        {
            while(values[i]<=num)
            {
                ans+=symbols[i];
                num-=values[i];
            }
        }
        return ans;
    }
};