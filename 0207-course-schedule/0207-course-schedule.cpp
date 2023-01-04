class Solution {
public:
// queue<int>q;
//         vector<int>in(nC,0);
//         vector<int>graph[nC];
//         int n=pr.size();
//         for(int i=0;i<n;i++){
//             graph[pr[i][1]].push_back(pr[i][0]);
//             in[pr[i][0]]++;
//         }
//         for(int i=0;i<nC;i++){
//             if(in[i]==0)
//                 q.push(i);
//         }
//         int cnt=0;
//         while(!q.empty()){
//             int node=q.front();
//             q.pop();
//             cnt++;
//             if(cnt==nC)//means there is no cycle so we can access all courese so return true;
//                 return true;
//             for(auto k:graph[node]){
//                 in[k]--;
//                 if(in[k]==0)
//                     q.push(k);
//             }
//         }
//         return false;//
    bool canFinish(int nC, vector<vector<int>>& pr) {
        queue<int>q;
        vector<int>in(nC,0);
        vector<int>graph[nC];
        int n=pr.size();
        for(int i=0;i<n;i++)
        {
            graph[pr[i][1]].push_back(pr[i][0]);
            in[pr[i][0]]++;
        }
        for(int i=0;i<nC;i++)
        {
            if(in[i]==0)
            {
                q.push(i);
            }
        }
        int cnt=0;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            cnt++;
            if(cnt==nC)
            return true;
            for(auto k:graph[node])
            {
                in[k]--;
                if(in[k]==0)
                     q.push(k);
            }
        }
        return false;
    }
};