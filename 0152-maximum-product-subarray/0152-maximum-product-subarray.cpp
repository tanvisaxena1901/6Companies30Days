class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];
        int mx=ans;
        int mn=ans;
        for(int i=1;i<n;i++)
        {
            if(nums[i]<0)
            {
                swap(mx,mn);
            }
            mx=max(nums[i],nums[i]*mx);
            mn=min(nums[i],nums[i]*mn);
            ans=max(ans,mx);
        }
        return ans;
    }
};