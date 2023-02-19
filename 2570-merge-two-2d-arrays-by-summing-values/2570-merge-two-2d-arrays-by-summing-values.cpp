class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
       vector<vector<int>> ans;
        unordered_map<int,int> val;
        for(auto it: nums1)
        {
            val[it[0]]+=it[1];
        }
        for(auto it: nums2)
        {
            val[it[0]]+=it[1];
        }
        for(auto it: val)
        {
            ans.push_back({it.first,it.second});
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};