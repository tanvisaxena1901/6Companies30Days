class Solution {
public:
    bool isPossible(vector<int>& nums) {
        int n=nums.size(); 
        unordered_map<int,int>mp1,mp2;
        for(int i=0;i<n;i++)
        {
            mp1[nums[i]]++;
        }
        for(auto i:nums)
        {
            if(mp1[i]==0)continue;
            mp1[i]--;
            if(mp2[i-1]>0)
            {
                mp2[i-1]--;
                mp2[i]++;      
            }
            else if(mp1[i+1]!=0 && mp1[i+2]!=0)
            {
                mp1[i+1]--;
                mp1[i+2]--;
                mp2[i+2]++;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};