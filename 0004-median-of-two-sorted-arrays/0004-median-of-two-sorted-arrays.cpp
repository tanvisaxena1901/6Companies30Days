class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
          vector<int>v;
       // double ans=0;
        int s=nums1.size()+nums2.size();
        for(int i=0;i<nums1.size();i++)
        {
            v.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        if(v.size()%2==0) 
        {
            return ((double)v[(v.size() / 2) - 1] + (double)v[v.size() / 2]) / 2;
        }
        else 
        {
            return (double)v[v.size()/2];
        }
    }
};