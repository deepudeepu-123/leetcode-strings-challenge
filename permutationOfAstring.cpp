class Solution
{
	public:
	void permutation(string S,int low,int high,set<string> &set)
	{
	    if(low==high)
	    {
	       set.insert(S);
	       return;
	    }
	    
	    for(int i=low;i<=high;i++)
	    {
	        swap(S[i],S[low]);
	        permutation(S,low+1,high,set);
	        swap(S[i],S[low]);
	       
	    }
	    
	    
	}
	
		vector<string>find_permutation(string S)
		{
		    set<string> set;
		    permutation(S,0,S.length()-1,set);
		    vector<string> ans;
		    for(auto x:set)ans.push_back(x);
		    return ans;
		}
};