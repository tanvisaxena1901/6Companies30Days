class Solution {
public:
 void dfs(int i,int j,vector<vector<int>> &image){
        if(i<0 || j<0 || i>=(image.size()) || j>=(image[0].size()) || image[i][j] == 1) return;
        image[i][j]=1;
        dfs(i-1,j,image);
        dfs(i+1,j,image);
        dfs(i,j-1,image);
        dfs(i,j+1,image);
    }
    int closedIsland(vector<vector<int>>& grid) {
         int cnt=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0 || i==n-1 || j==m-1)
                {
                    dfs(i,j,grid);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                {
                    dfs(i,j,grid);
                    cnt++;
                }
            }
        }
        return cnt;
    
    }
};

