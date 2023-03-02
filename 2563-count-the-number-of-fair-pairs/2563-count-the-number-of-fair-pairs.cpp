class Solution {
public:
    long long countFairPairs(vector<int>& nums, int l, int u) {
        int n=nums.size();
        long long ans=0;
        sort(nums.begin(),nums.end());
        
        long long cnt=0;
        int i=0,j=n-1;
        int k=i+1;
        while(i<j)
        {
            if(nums[i]+nums[j]<=u)
            {
                if(nums[i]+nums[j]>=l)
                {
                    while((nums[i]+nums[k])<l)
                     k++;
                     cnt+=(j-k+1);
                     i++;k=i+1;
                }
                else
                {
                    i++;
                    k=i+1;
                }
            
            }
            else
                j--;
        }
        
    
   return cnt;
    }
};