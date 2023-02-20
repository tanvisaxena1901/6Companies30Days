class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
         int n=nums.size();
        int l=0,r=n-1;
        int index;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==t){return mid;}
            else if(nums[mid]>t){r=mid-1;}
            else{
                l=mid+1;
            }
        }
        return l;
    }
};