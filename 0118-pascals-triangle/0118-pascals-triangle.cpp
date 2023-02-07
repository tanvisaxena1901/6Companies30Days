class Solution {
public:
    vector<vector<int>> generate(int n) {
  vector<vector<int>>v;
        if(n==1)
        {
            v.push_back({1});
            return v;
        }
        else if(n==2)
        {
            v.push_back({1});
            v.push_back({1,1});
            return v;
        }
        v.push_back(vector<int>{1});
            v.push_back(vector<int>{1,1});
        int k=2;
        for(int i=k;i<n;i++)
        { 
            int a=0;
            int  b=v[i-1].size();
            vector<int>tmp{1};
            for(int j=0;j<b-1;j++)
            {
               tmp.push_back(v[i-1][j]+v[i-1][j+1]);//This creates the current row on the basis of the previous rows excluding the first and element of the previous row which will be 1 always
            }
            tmp.push_back(1);
            v.push_back(tmp);
            
        }
        
        
        return v;
    }
};