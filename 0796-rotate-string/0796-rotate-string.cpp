class Solution {
public:
    bool rotateString(string s, string g) {
         if (s.length() != g.length())
        return false;
        int n=s.size();
        string ans=s+s;
        return (ans.find(g) != string::npos);
    }
};