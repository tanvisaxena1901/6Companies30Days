class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int start=-1;
       int end=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]>t){r=mid-1;}
            else if(nums[mid]<t){l=mid+1;}
            else{
                start=mid;
                r=mid-1;
            }
        }
         l=0;
        r=n-1;
      while(l<=r)
      {
          int mid=l+(r-l)/2;
          if(nums[mid]>t){r=mid-1;}
          else if(nums[mid]<t){l=mid+1;}
          else{
              end=mid;
              l=mid+1;
          }
      }
        return {start,end};
    }
};