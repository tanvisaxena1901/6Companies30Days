class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=names.size();
        vector<pair<int,string>>v;
        for (int i = 0; i < n; i++)
        v.push_back({heights[i], names[i]});
        sort(v.begin(), v.end());
       reverse(v.begin(), v.end());

        for (int i =0; i<n; i++) {
         names[i]=v[i].second;
       }
        return names;
    }
};