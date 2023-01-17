class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        for(int i=0;i<n-2;i++)
        {
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                if(nums[i]+nums[l]+nums[r]==0)
                {
                   s.insert({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                }
                else if(nums[i]+nums[l]+nums[r]>0)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
        }
        vector<vector<int>>v(s.begin(),s.end());
        return v;
        
    }
};