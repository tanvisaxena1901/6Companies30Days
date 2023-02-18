class Solution {
public:
       int mx=INT_MIN;
        string ans="";
    bool ispalind(string &s,int i,int j)
    {
       while(i<j)
       {
           if(s[i]!=s[j])
           {
               return false;
           }
           i++;
           j--;
       }
        
        return true;
    }
  void solve(string &s,int n)
  {
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             if(ispalind(s,i,j))
             {
                 if(j-i+1>mx)
                 {
                     ans=s.substr(i,j-i+1);
                     mx=j-i+1;
                 }
             }
         }
     }
      
  }
 string longestPalindrome(string s) {
        int n=s.size();
        solve(s,n);
     return  ans;
        
    }
};