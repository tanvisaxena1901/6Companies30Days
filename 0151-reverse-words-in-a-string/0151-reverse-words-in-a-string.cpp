class Solution {
public:
    string reverseWords(string s) {
              
       
 stack<string>st;
        string word="",ans;
        for(auto i:s)
        {
            if(i==' ')
            {
                if(word.size()>0) st.push(word);
                word="";
            }
            else
            {
                word+=i;
            }
        }
        st.push(word);
        while(!st.empty())
        {
            string x=st.top();
            
            if(ans.size()!=0){ ans+=' '+x;}
            else{ans+=x;}
             st.pop();
        }
      return ans; 
    }
};