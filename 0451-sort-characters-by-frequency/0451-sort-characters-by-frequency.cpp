class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,int>>pq;
        unordered_map<char,int>mp;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
       
        string ans="";
        for(auto it : mp){
            pq.push({it.second , it.first});
        }
        while(!pq.empty())
        {
            auto it=pq.top();
            pq.pop();
            while(it.first--)
            {
                ans+=it.second;
            }
        }
        return ans;
    }
};