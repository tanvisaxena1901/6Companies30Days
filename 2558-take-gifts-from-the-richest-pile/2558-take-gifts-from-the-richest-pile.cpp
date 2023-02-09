class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n=gifts.size();
        long long ans=0;
        priority_queue<int>pq;
        for(auto i:gifts) pq.push(i);
        while(k-- && !pq.empty())
        {
            int x=pq.top();
            pq.pop();
            pq.push(floor(sqrt(x)));
        }
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};