class Solution {
public:
    vector<int> findOrder(int nc, vector<vector<int>>& p) {
        vector<int>ans;
        queue<int>q;
        vector<int>in(nc,0);
        vector<vector<int>>graph(nc);
        int n=p.size();
        for(auto i:p)
        {
            graph[i[1]].push_back(i[0]);
             ++in[i[0]];
        }
       for(int i=0;i<nc;i++)
       {
                         if(in[i]==0)    {
                             q.push(i);
                         }          
       }
      int cnt=0;
            
        while(!q.empty()){
            int node=q.front();
            ans.push_back(node);
            q.pop();
            cnt++;
            for(auto k:graph[node]){
                //in[k]--;
                if(--in[k]==0)
                    q.push(k);
            }
        }
        if(cnt==nc){return ans;}
        
            
         else{ vector<int>a;
        return a;}                       
    }
};