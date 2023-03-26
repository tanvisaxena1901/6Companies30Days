class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int n=s.size();
        unordered_map<char,int>mp1;
        for(auto x:target)mp1[x]++;
        unordered_map<char,int>mp2;
        for(auto x:s)mp2[x]++;
        int mn=INT_MAX;
        for(auto m:mp1)
        {
            mn=min(mn,mp2[m.first]/m.second);
        }
        return mn;
    }
};