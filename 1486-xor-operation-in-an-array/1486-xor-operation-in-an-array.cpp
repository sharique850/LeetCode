class Solution {
public:
    int xorOperation(int n, int start) {
        int res=start;
        int i=0;
        if(start!=0)
            i++;
        while(i<n)
        {
            res = res ^ (start + (2*i));
            i++;
        }
        return res;
    }
};