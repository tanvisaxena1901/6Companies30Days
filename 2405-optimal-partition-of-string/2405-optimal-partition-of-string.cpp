class Solution {
public:
    int partitionString(string str) {
        int n=str.size();
       
        set<int>s;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s.find(str[i])!=s.end())
            {
                cnt++;
                s.clear();
            }
            s.insert(str[i]);
            
        }
        return cnt+1;
    }
};