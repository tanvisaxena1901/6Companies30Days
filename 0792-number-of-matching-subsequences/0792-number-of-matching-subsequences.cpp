class Solution {
public:
    bool check(string x,string y)
    {
        int n=x.size();
        int m=y.size();
        int i=0,j=0;
        while(i<n && j<m)
        { 
            if(x[i]==y[j])
            {
                j++;
            }
          
            i++;
        }
        if(j==m){return true;}
        return false;
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int n=s.size();
        int wn=words.size();
        unordered_map<string,int>mp;
        for(int i=0;i<wn;i++)
        {
            mp[words[i]]++;
        }
        //int mps=mp.size();
        int cnt=0;
        for(auto p:mp)
        {
            string a=p.first;
            if(check(s,a))
            {
                cnt+=p.second;
            }
        }
        
        return cnt;
    }
};