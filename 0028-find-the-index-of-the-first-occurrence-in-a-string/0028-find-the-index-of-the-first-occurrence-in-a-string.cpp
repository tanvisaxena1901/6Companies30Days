class Solution {
public:
    int strStr(string h, string ne) {
        int n=h.size();
     int m=ne.size();
      if(n==0) return -1;
      if(m==0) return 0;
      bool flag=0;
        for(int i=0;i<n;i++)
        {
            flag=0;
            if(h[i]==ne[0])
            {
                for(int j=0;j<m;j++)
                {
                    if(h[i+j]!=ne[j]){
                        flag=1;
                        break;
                    }
                    //return i;
                }
                if(flag==0)return i;
            }
            
        }
        return -1;
    }
};