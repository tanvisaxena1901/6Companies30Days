class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n+1;i++)
        {
            mp[i]=0;
        }
       
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int ans;
        for(int i=0;i<mp.size();i++)
        {
            if(mp[i]==0)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};