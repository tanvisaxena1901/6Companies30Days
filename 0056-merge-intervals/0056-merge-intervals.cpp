class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>>v;
        int n=inter.size();
        int i=0,j=0;
        sort(inter.begin(),inter.end());
        v.push_back(inter[0]);
        for(i=1;i<n;i++)
        {
            if(inter[i][0]<=v[j][1])
            {
                v[j][1]=max(v[j][1],inter[i][1]);
            }
            else
            {
                v.push_back(inter[i]);
                   j++;
            }
         
        }
        return v;
    }
};