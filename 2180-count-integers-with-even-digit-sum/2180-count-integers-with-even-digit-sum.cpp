class Solution {
public:
    int countEven(int num) {
        
        int count=0;
        for(int i=1;i<=num;i++)
        {
            int t=i;
            int sm=0;
            while(t!=0)
            {
                sm+=t%10;
                t/=10;
            }
            if(sm%2==0)
                count++;
        }

        // cout<<count<<endl;
        return count;
        
    }
};