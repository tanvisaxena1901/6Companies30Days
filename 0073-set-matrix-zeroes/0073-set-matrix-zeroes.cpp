class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
       vector<int>v(m,-1);
        for(int i=0;i<n;i++)
        {
            bool flag=false;
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    flag=true;
                    v[j]=0;
                }
            }
            if(flag)
            {
                fill(matrix[i].begin(),matrix[i].end(),0);
            }
        }
         for(int i = 0;i<m;i++){
        if(v[i]==0){
        for(int j = 0;j<n;j++){
           matrix[j][i] = 0;
        }
        }
    }
       
    }
};