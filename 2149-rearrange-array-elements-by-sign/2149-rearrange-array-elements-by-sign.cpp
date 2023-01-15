class Solution {
public:
    vector<int> rearrangeArray(vector<int>& numsi) {
        int n=numsi.size();
        vector<int>nums(numsi.size(),0);
        int u=0,v=1;
        for(int i=0;i<n;i++)
        {
            if(numsi[i]>0)
            {
                nums[u]=numsi[i];
                u+=2;
            }
            else
            {
                nums[v]=numsi[i];
                v+=2;
            }
        }
        return nums;
    }
};