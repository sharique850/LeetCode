class Solution {
public:
    bool checkPowersOfThree(int n) {
        
        for(int i=15;i>=0;i--)
        {
            int p = pow(3,i);
            
            if(n-p >= 0) n -= p;
            
            if(n==0) return true;
        }
        
        return false;
        
        
    }
};