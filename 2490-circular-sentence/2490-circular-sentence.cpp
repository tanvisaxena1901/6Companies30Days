class Solution {
public:
    bool isCircularSentence(string s) {
        int n=s.size();
        bool x=true,y=true;
        for(int i=1;i<n-1;i++)
        {
            if(s[i]==' ')
            {
                if(s[i-1]!=s[i+1])
                {
                    x=false;
                }
            }
        }
        if(s[n-1]!=s[0])y=false;
        if(x==true && y==true)return true;
        return false;
    }
};