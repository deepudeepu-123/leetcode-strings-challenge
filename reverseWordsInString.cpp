class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int b=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                reverse(s.begin()+b,s.begin()+i);
                b=i+1;
            }

        }
        reverse(s.begin()+b,s.end());
        int i=0;
        while(s[i]==' ')
        {
             s.erase(i,1);
            
        }
       
        int j=s.size()-1;
        while(s[j]==' ')
        {
             s.erase(j,1);
            j--;
        }
        string newSentence = ""; 

    bool isSpace = false; 
    for (char c : s) {
        if (c == ' ') {
            if (!isSpace) { 
                newSentence += ' ';
                isSpace = true;
            }
        } else {
            newSentence += c;
            isSpace = false;
        }
    }
         
        return newSentence;
    }
};