class Solution {
public:
    int countDigits(int num) {
        int cnt=0;
        int rem;
        int x=num;
        while(num!=0)
        {
            rem=num%10;
            if(rem!=0){
            if(x%rem==0){cnt++;}}
            
            num=num/10;
        }
        return cnt;
    }
};