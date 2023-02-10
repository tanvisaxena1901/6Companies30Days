class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
                map<int,bool> mp;
        for (auto val: banned){
            mp[val]=1;
        }
        int cnt=0;
        long long int summ= 0;
        for (int i=1; i<=n; i++){
            if (!mp[i]){
                summ+= i;
                if (summ> maxSum)break;
                cnt++;
            }
        }
        return cnt;

    }
};