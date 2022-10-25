class Solution {
public:
    int countPrimes(int n) {
        // long int sz=50000000;
        long int Prime[5000000]={0};
        for(long int i=2;i*i<n;i++)
        {
            if(Prime[i]==0)
            {
                for(long int j=i*i;j<n;j+=i)
                {
                    Prime[j]=1;
                }
            }
        }
        long int cnt=0;
        for(long int i=2;i<n;i++)
        {
            if(Prime[i]==0){
                cnt++;
                // cout<<i<<endl;
            }
        }
        return cnt;
        
    }
};