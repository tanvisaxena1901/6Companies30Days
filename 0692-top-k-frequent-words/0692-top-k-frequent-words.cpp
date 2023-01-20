class Solution {
    struct compare{
        bool operator()(pair<int,string>&a,pair<int,string>&b)
        {
            if(a.first==b.first)
                return a.second>b.second;
            return a.first<b.first;
             
        }
    };
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n=words.size();
        priority_queue<pair<int,string>,vector<pair<int,string>>,compare>pq;
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[words[i]]++;
        }
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
        }
        vector<string>v;
        while(k--)
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};