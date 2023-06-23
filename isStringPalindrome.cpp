class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    int n=S.length();
	    for(int i=0;i<n/2;i++)
	    {
	        if(S[i]!=S[n-1-i])
	        return 0;
	    }
	    return 1;
	}

};