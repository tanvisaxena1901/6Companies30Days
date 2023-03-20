class Solution {
public:
    void permute(set<vector<int>>&vec,int i,vector<int>&nums)
    {
        if(i>=nums.size())
        {
            vec.insert(nums);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            swap(nums[i],nums[j]);
            permute(vec,i+1,nums);
            swap(nums[i],nums[j]);
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>vec;
        permute(vec,0,nums);
        vector<vector<int>>reans;
        for(auto i:vec)
        {
            reans.push_back(i);
        }
        return reans;
    }
};