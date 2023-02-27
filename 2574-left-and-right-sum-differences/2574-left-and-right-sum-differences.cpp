class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
       int n = nums.size();
        vector<int> pre(n,0),suff(n,0);
        pre[0] = 0;
        suff[n-1] = 0;
        for(int i=1;i<n;i++){
            pre[i] = pre[i-1]+nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suff[i] = suff[i+1] + nums[i+1];
        }
        for(int i=0;i<nums.size();i++){
            nums[i] = abs(pre[i]-suff[i]);
        }
        return nums;
    }
};