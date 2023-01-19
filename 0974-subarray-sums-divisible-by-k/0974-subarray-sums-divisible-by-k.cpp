class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;
        mp[0]++;
        
        int ans=0,currSum=0;
        
        for(auto i:nums)
        {
            currSum+=i;
            int rem = (currSum%k + k)%k;
            
            if(mp.find(rem)!=mp.end())
            {
                ans += mp[rem];
            }
            mp[rem]++;
        }
        return ans;
        
    }
};