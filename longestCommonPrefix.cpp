class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //sort the vector of string
        //compare the first string and last string of the sorted vector

       sort(strs.begin(),strs.end());
       string a1=strs[0];
       string a2=strs[strs.size()-1];
       int a=a1.size()>a2.size()?a2.size():a1.size();
       int i=0;
       while(i<a&&a1[i]==a2[i])
       {
        i++;
       }
       return a1.substr(0,i);
    }
};