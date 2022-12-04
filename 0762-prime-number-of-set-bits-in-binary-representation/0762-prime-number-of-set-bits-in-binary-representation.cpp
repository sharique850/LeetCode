class Solution {
public:
    
    int isPrime(int n)
    {
        if(n<2)
            return false;
        if(n==2)
            return true;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
    
    int countPrimeSetBits(int left, int right) {
        
        vector<int> v;
        
        while(left<=right)
        {
            int cnt_one=0;
            int x=left;
            while(x!=0)
            {
                if(x%2!=0){
                    cnt_one++;
                }
                x=x/2; 
            }
            v.push_back(cnt_one);
            left++;
            
        }
        for(auto i:v)
            cout<<i<<" ";
        cout<<endl;
        int p=0;
        for(auto i:v){
            int c = isPrime(i);
            cout<<c<<" ";
            if(c) p++;
        }

        return p;
        
    }
};