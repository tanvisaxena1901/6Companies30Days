class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int cnt=0;
        unordered_map<int,int>mp;
        mp[sum]=1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int x=sum-k;
            if(mp.find(x)!=mp.end())
            {
                cnt+=mp[x];
                
            }
            mp[sum]++;
            
        }
        return cnt;
    }
};