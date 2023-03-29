class Solution {
public:
    bool canJump(vector<int>& nums) {
         int n=nums.size();
        int i=0;
         for(int j=0;j<n;j++)
         {
            if(j>i){
                return false;
            }
            i=max(i,nums[j]+j);
         }
        
        return true;
    
        
        
    }
    
    
};