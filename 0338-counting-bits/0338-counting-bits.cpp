class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        
        while(n!=-1)
        {
            int cnt_one=0;
            int x=n;
            while(x!=0)
            {
                if(x%2!=0){
                    cnt_one++;
                }
                x=x/2; 
            }
            v.push_back(cnt_one);
            n--;
            
        }
        reverse(v.begin(),v.end());

        return v;
    }
};