class Solution {
public:
    bool search(vector<int>v,int x)
    {
        int n=v.size();
        int l=0;
        int r=n-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(v[m]==x){return true;}
            else if(v[m]>x){r=m-1;}
            else{l=m+1;}
        }
        return false;
        
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int flag=0;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
          if(search(matrix[i],target))
          {
              flag++;
          }
            
        }
        if(flag>0){return true;}
        return false;
    }
};