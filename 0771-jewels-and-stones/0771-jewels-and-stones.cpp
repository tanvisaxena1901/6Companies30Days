class Solution {
public:
    int numJewelsInStones(string j, string s) {
        int n=j.size();
        int m=s.size();
        unordered_map<char,int>mp;
        for(auto x:j)mp[x]++;
        int ans=0;
        for(int i=0;i<m;i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
                ans+=mp[s[i]];
            }
        }
        return ans;
    }
};