class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
         int m=grid.size();
        int n=grid[0].size();
        vector<int> row1(m,0);
        vector<int> col1(n,0);
        vector<int> row0(m,0);
        vector<int> col0(n,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                row1[i]+=(grid[i][j]==1);
                row0[i]+=(grid[i][j]==0);
            }
        }
        for(int j=0;j<n;j++)
        {
            for(int i=0;i<m;i++)
            {
                col1[j]+=(grid[i][j]==1);
                col0[j]+=(grid[i][j]==0);
            }
        }
        vector<vector<int>> diff(m,vector<int>(n,-1));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                diff[i][j]=row1[i]+col1[j]-row0[i]-col0[j];
                // cout<<row1[i]<<" "<<row0[i]<<" "<<col1[j]<<" "<<col0[j]<<endl;
            }
        }
        return diff;
    }
};