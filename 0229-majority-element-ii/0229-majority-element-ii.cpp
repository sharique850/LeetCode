class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        map<long long, long long> mp;
        int n = nums.size()/3;
        
        for(long long i:nums)
            mp[i]++;
        
        vector<int> res;
        
        for(auto i:mp)
        {
            if(i.second > n)
                res.push_back(i.first);
        }
        
        return res;
        
        
    }
};