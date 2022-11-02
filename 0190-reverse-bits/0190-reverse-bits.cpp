class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int res=0;
        for(int i=0;i<32;i++)
        {
            int bitMask = n & 1;
            int revBit = bitMask << (31-i);
            res = res | revBit;
            n >>= 1;
        }
        
        return res;
        
    }
};