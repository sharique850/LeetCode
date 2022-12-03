class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        map<int,int> mp;
        
        for(auto n:nums)
        {
            if(n%2==0)
                mp[n]++;
        }
        
        int freq=0, res=-1;
        
        for(auto x:mp)
        {
            if(x.second>freq)
            {
                res = x.first;
                freq = x.second;
            }
        }
        return res;
    }
};