class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        int n=word.size();
        vector<int>v(n,0);
        string temp="";
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            //temp+=word[i];
            //int tempo=stoi(temp);
            sum*=10;
            sum+=word[i]-'0';
            sum=sum%m;
            if(sum==0){
                v[i]=1;
            }
              else
           {
            v[i]=0;
           }
        }
        return v;
    }
};