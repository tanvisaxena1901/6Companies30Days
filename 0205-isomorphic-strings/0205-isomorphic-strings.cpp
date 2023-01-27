class Solution {
public:
    bool isIsomorphic(string s, string t) {
//         unordered_map<char,char>>mp;
//         int n=s.size();
//         int x=t;
//         unordered_set<char>set1;
//         for(int i=0;i<n;i++)
//         {
//             if(mp.find(s[i])==mp.end())
//             {
//                 mp.insert(pair<char,char>(s[i],t[i]));
//             }
//             else
//             {
                
//             }
//         }
        // int n=s.size();
        // unordered_map<char,int>mp1,mp2;
        // for(auto u:s)
        // {
        //     mp[u]++;
        // }
        // for(auto v:t)
        // {
        //     mp[v]++;
        // }
        
      unordered_map <char,int> mp1,mp2;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(mp1[s[i]]!=mp2[t[i]]) // If different values are assigned previously then Return False
                return false;
           mp1[s[i]]=i+1; // Assigning the Freq/Values to the letters
           mp2[t[i]]=i+1;
            // mp1[s[i]]++;
            // mp2[t[i]]++;
        }
        return true;
       
    }
};