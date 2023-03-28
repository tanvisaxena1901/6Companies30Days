class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int mx=*max_element(nums.begin(),nums.end());
        int size=0;
        for(int i=0;i<n;i++)
        {
            if(mx==nums[i])
            {
                size=max(size,++cnt);
            }
            else cnt = 0;
        }
        return size;
    }
};