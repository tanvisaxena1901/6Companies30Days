class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        set<pair<int,vector<int>>>s;
        pair<int,vector<int>>vec;
        for(int i=0;i<mat.size();i++)
        {
            vec.second.push_back(0);
            vec.first+=mat[i][0];
        }
        s.insert(vec);
        if(k==1){
            return vec.first;
        }
         while(k>1)
         {
             auto itr=s.begin();
             pair<int,vector<int>>a=(*itr);
             s.erase(itr);
             for(int i=0;i<mat.size();i++)
             {
                 if(a.second[i]+1<mat[i].size())
                 {
                     a.first+=mat[i][a.second[i]+1]-mat[i][a.second[i]];
                      a.second[i]++;
                    s.insert(a);
                    a.second[i]--;
                    a.first += mat[i][a.second[i]] - mat[i][a.second[i]+1];
                 }
             }
             k--;
         }
         auto temp = s.begin();
        int ans= (*temp).first;
        return ans;
    }
};