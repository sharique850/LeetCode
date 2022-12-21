class Solution {
public:
    int hammingWeight(uint32_t n) {
        // int cnt=0;
        // while(n!=0)
        // {
        //     if(n&1)
        //         cnt+=1;
        //     n=n>>1;
        // }
        // return cnt;
        
        // Brian Kernighan Algorithm
        int cnt=0;
        while(n!=0)
        {
            n = n&(n-1);
            cnt++;
        }
        return cnt;
    }
};