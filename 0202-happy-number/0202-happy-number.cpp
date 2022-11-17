class Solution {
public:
    bool isHappy(int n) {
        int res,temp=0,x;
        for(int i=0;i<=5;i++)
        {
            res=0;
            x=n;
            while(x!=0)
            {
                temp=x%10;
                res+=temp*temp;
                x/=10;
            }
            if(res==1)
                return 1;
            /*else if(res>=2 && res<=9)
                return 0;*/
            else
                n=res;
        }
        return 0;
        
    }
};