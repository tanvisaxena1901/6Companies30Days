class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        int res=0;
        for(int i=0;i<n;i++)
        {
            unordered_map<double,int>mp;
            int curr_max=0;
            for(int j=0;j<n;j++)
            {
                if(i==j) continue;
                double m=(double)points[j][1]-points[i][1];
                double n=(double)points[j][0]-points[i][0];
                curr_max=max(curr_max,++mp[m/n]);
            }
            res=max(res,curr_max+1);
        }
        return res;
    }
};