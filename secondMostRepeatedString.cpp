class Solution
{//Given a sequence of strings, the task is to find out the second most repeated (or frequent) string in the given sequence.
  public:
    string secFrequent (string arr[], int n)
    {
    map<string,int> mp;
    for(int i=0;i<n;i++)
    mp[arr[i]]++;
    
    priority_queue<pair<int,string>> pq;
    for(auto x:mp)
    {
        pq.push({x.second,x.first});
    }
    pq.pop();
    if(!pq.empty())
    return pq.top().second;
    else
    return "";
    }
};