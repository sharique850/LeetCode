class Solution {
public:
    int arrangeCoins(int n) {
        int tmp=n, c=0;
        for(int i=1;i<=n;i++)
        {
           tmp = tmp - i;
            if(tmp<0)
                break;
            c++;
            
        }
        return c;
    }
};