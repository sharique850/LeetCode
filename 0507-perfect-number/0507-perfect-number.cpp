class Solution {
public:
    bool checkPerfectNumber(int num) {
        // take long integer
        long int sm=0;
        for(long int i=1;i<=num/2;i++)
        {
            if(num%i==0)
            {
                sm = sm + i;
            }
        }
        if(sm==num)
            return true;
        else
            return false;
        
    }
};