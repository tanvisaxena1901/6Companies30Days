class Solution {
public:
    int minLength(string s) {
        int count=1;
        while(count!=0){
            count=0;
            for(int i=0;i<s.length()-1;i++){
                if(s.length()==2){                  //Edge case condition
                    if(s[i]=='A'&&s[i+1]=='B'){
                        return 0;
                    
                    }
                    if(s[i]=='C'&&s[i+1]=='D'){
                        return 0;
                    }
                    
                }
                if(s[i]=='A'&&s[i+1]=='B'){         //Normal time condition
                    count++;
                    s.erase(i,2);
                    break;
                    
                }
                if(s[i]=='C'&&s[i+1]=='D'){
                    count++;
                    s.erase(i,2);
                    break;
                }
                
                
            }
            
        }
        
        return s.length();
    }
};