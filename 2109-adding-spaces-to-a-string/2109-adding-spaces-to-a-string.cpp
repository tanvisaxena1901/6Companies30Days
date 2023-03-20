class Solution {
public:
    string addSpaces(string s, vector<int>& v) {
       string em="";
        int n=s.size();
        int m=v.size();
        int i=0;
        int j=0;
        
        for(int i=0;i<n;i++)
        {
        
         if(j<m && i==v[j])
         {
            
             em+=" ";
             em+=s[i];
             j++;
       
         }
            else{em+=s[i];}
            //i++;
            
        }
        return em;
    }
};