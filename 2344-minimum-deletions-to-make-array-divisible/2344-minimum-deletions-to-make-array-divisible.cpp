class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int gc = numsDivide[0];
        for(int i = 1; i < numsDivide.size(); ++i){
            gc = __gcd(gc, numsDivide[i]);
        }
        sort(nums.begin(), nums.end());
        int ans = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(gc%nums[i]) ans++;
            else return ans;
        }
        return -1;
    }
};