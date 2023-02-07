class Solution {
public:
    string largestOddNumber(string num) {
        
        string ans="";
        int n=num.size();
        for(int i=n-1;i>=0;i--)
        {
            int x=num[i]-'0';
            if(x%2!=0)
            {
                return num;
            }
            else
            {
                num.erase(num.begin() + i);
            }
        }
        return ans;
    }
};