class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
         int ans = logs[0][1];
    int id = logs[0][0];
    for(int i = 0 ; i < logs.size()-1 ; i++){
        int sub = logs[i+1][1] - logs[i][1];
        if(sub > ans){
            ans = sub;
            id = logs[i+1][0];
            
        }
        else if(sub==ans){
            id = min(id,logs[i+1][0]);
        }
        
        
    }
    return id;
    }
};