    bool areIsomorphic(string str1, string str2)
    {
        int n=str1.length();
        int m=str2.length();
        if(n!=m)
        return 0;
        map<char,char> mp;
        unordered_set<char> mappedChars;
        for(int i=0;i<n;i++)
        {
        if(mp.find(str1[i])!=mp.end())
        {
            if(str2[i]!=mp[str1[i]])
            return 0;
        }
        else
          {
            if (mappedChars.find(str2[i]) != mappedChars.end())//if the given char of Str2 is already mapped with other char of str1
                return 0;

            mp[str1[i]] = str2[i];
            mappedChars.insert(str2[i]);
          }  
        }
        return 1;
        
    }