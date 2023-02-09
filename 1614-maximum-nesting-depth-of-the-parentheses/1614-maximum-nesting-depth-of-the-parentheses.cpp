class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int mx=0;
        int balance=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                balance++;
                mx=max(mx,balance);
            }
            else if(s[i]==')')
            {
                balance--;
            }
        }
        return mx;
    }
};