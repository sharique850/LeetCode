class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        
        int n=nums.size();
        unordered_map<int,int> mp;
        vector<int> ans;
        for(auto i:nums)
            mp[i]++;
        
        for(const auto [n, cnt] : mp)
            if (cnt == 1 && mp.count(n + 1) == 0 && mp.count(n - 1) == 0)
                ans.push_back(n);
        return ans;
        
        
        
        
        
        
        
        
        // unordered_map<int, int> m;
        // vector<int> res;
        // for (int n : nums)
        //     ++m[n];
        // for (const auto [n, cnt] : m)
        //     if (cnt == 1 && m.count(n + 1) == 0 && m.count(n - 1) == 0)
        //         res.push_back(n);
        // return res;
        
    }
};
