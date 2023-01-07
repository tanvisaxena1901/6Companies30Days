class Solution {
public:
    int rev(int number)
    {
        int x=0,rem;
        while(number!=0)
        {
            rem=number%10;
            x=x*10+rem;
            number=number/10;
        }
        return x;
    }
    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        unordered_map<long,long>mp;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int a=nums[i];
            int b=rev(nums[i]);
            mp[a-b]++;
        }
        for(auto it:mp)
        {
            long long g=it.second;
          
                cnt+=((g)*(g-1)/2)%1000000007;
            
        }
        return cnt%1000000007;
        
    }
};