class Solution {
public:
    double sum(vector<int>&nums)
    {
        double wow=0;
        for(int i=0;i<nums.size();i++)
        {
            wow+=nums[i];
        }
        return wow;
    }
    int halveArray(vector<int>& nums) {
        priority_queue<double>pq;
        int n=nums.size();
        double osum=sum(nums);
        double hsum=osum/2;
        double cnt=0;
        for(int i=0;i<n;i++) pq.push(nums[i]);
        while(hsum<osum)
        {
            double x=pq.top();
            pq.pop();
            x=x/2;
            cnt++;
            pq.push(x);
            osum-=x;
            
        }
        return cnt;
    }
};