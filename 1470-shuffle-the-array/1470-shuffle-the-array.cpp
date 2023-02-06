class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        int sz=nums.size();
        vector<int> ans;
        for(int i=0; i<sz-n; i++)
        {
            for(int j=i; j<sz; j+=n)
            {
                ans.push_back(nums[j]);
            }
        }
        
        return ans;
        
    }
};