class Solution {
public:
   int dirX[8] = {0, 0, 1, -1};
    int dirY[8] = {1, -1, 0, 0};
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> ans(m, vector<int>(n, INT_MAX));
        queue<pair<int, int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    ans[i][j] = 0;
                    q.push({i, j});  
                }
            }
        }
        
        while(!q.empty()){
            pair<int, int> temp = q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int dX = temp.first + dirX[i];
                int dY = temp.second + dirY[i];
                if(dX>=0 and dX<m and dY>=0 and dY<n){ /* check for valid boundary */
                    if(ans[dX][dY]==0)   /* if ans[dX][dY]=0, distance = 0, no modification */
                        continue;
                    if(ans[dX][dY]==INT_MAX){  /* if ans[dX][dY]=INT_MAX, the node has not been visited, update its distance by adding its neighbors value +1 */ 
                        ans[dX][dY] = ans[temp.first][temp.second] + 1;
                        q.push({dX, dY}); /* push the index, so that its neighbors take updated value at the index*/
                    }
                }
            }
        }
        return ans;
    }
};