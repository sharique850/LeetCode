class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<long long,long long> mp;
        long long n=nums.size()/2;
        for(long long num:nums)
            mp[num]++;
        
        for(auto i:mp)
        {
            if(i.second > n)
                return i.first;
        }
        
        return -1;
        
    }
};