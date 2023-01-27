class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string ans="";
        sort(strs.begin(),strs.end());
        string start=strs[0];
        string last=strs[n-1];
        for(int i=0;i<start.size();i++)
        {
            if(start[i]==last[i]){ans+=start[i];}
            else return ans;
        }
        return ans;
    }
};