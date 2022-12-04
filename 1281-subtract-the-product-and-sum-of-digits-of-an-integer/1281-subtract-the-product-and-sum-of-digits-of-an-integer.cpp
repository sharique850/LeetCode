class Solution {
public:
    int subtractProductAndSum(int n) {
        int sm=0,pd=1;
        while(n!=0)
        {
            int tmp=n%10;
            pd*=tmp;
            sm+=tmp;
            n/=10;
        }
        
        return pd-sm;
        
    }
};