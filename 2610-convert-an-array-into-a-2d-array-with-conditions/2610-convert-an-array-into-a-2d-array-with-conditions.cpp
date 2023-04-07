class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        int n=nums.size();
        int r=0,c=0;
        unordered_map<int,int>mp;
        int mx=INT_MIN;
        for(int i =0;i<n;i++)
        {
            mp[nums[i]]++;
            mx=max(mx,mp[nums[i]]);
        }
        vector<vector<int>>v(mx);
           for(auto it:mp){   
            int x = it.second;
            for(int u=0;u<x;u++)
            {
                v[u].push_back(it.first);
            }
        }
        return v;
    }
};