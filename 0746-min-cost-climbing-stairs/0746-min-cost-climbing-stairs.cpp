class Solution {
public:
    int solvetab(vector<int>&cost,vector<int>&dp,int n)
    {
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<=n;i++)
        {
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
            //cout<<i<<"  "<<dp[i]<<endl;
        }
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        cost.push_back(0);
        vector<int>dp(n+1,-1);
        int sol=solvetab(cost,dp,n);
        return sol;
    }
};