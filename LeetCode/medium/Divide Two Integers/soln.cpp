class Solution {
public:
    int divide(int dividend, int divisor) {
        int ans = 0, flag = 0;
        if(divisor == 0)
            return 2147483647;
        if(divisor == -1 && dividend == -2147483648)
            return 2147483647;
        if(divisor == 1 && dividend == -2147483648)
            return -2147483648;
        
           long absdvend = abs((long) dividend);
           long absdvsr = abs((long) divisor);
        
        while(absdvend >= absdvsr){
            int numShift = 0;
            while(absdvend >= (absdvsr<<numShift))
                numShift++;
            
            ans += 1<<(numShift - 1);
            absdvend -= (absdvsr<<(numShift - 1)); 
        }
        
        if((dividend < 0) ^ (divisor < 0))
            return -ans;
        else
            return ans;
    }
};
