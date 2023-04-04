class Solution {
public:
    int getSum(int a, int b) {
        int s=a^b;
        int c=(unsigned int)(a&b)<<1;
        if(c==0)
            return s;
        else
            return getSum(c,s);
    }
};