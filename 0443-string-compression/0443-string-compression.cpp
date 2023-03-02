class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        //string s="";
        int i=0,j=0;
        if(n==1) return 1;
        while(i<n)
        {
            int cnt=1;
            
            while(i<n-1 && chars[i]==chars[i+1])
            {
               // cnt++;
                i++;
                cnt++;
            }
            chars[j++]=chars[i++];
            if(cnt>1){
                string s=to_string(cnt);
                for(auto c: s)
               chars[j++]=c;
            }
        }
        return j;
    }
};