class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
       int zero=0;
        while(i<n)
        {
            if(nums[i]!=0)
            {
                swap(nums[zero],nums[i]);
                zero++;
            }
            i++;
        }
    }
};