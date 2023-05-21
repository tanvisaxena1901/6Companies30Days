class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m=grid.size();cout<<m<<endl;
        int n=grid[0].size();cout<<n<<endl;
        for(int i=0;i<m;i++)
            sort(grid[i].begin(),grid[i].end(),greater<int>());
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int mx=0;
            for(int j=0;j<m;j++)
             mx=max(mx,grid[j][i]);   
            
            sum+=mx;
        }
        
        return sum;
        
    }
};