class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //solving by boyer moore majority voting algorithm
        int n=nums.size();
        int cnt=0,candi=-1;
        for(int i=0;i<n;i++)
        {
            if(cnt==0)
            {
                candi=nums[i];
                cnt=1;
            }
            else
            {
                if(nums[i]==candi)
                {
                    cnt++;
                }
                else
                {
                    cnt--;
                }
            }
        }
        int rcnt=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]==candi)
        //     {
        //         rcnt++;
        //     }
        // }
        return candi;
        
    }
};