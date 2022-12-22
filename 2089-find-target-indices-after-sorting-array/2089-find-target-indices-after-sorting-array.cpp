class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        vector<int> ans;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==target)
        //         ans.push_back(i);
        // }
        // return ans;
        
        int small=0, large=0, n=nums.size();
        for(auto i:nums)
        {
            if(i<target)
                small++;
            else if(i>target)
                large++;
        }
        
        for(int i=small; i<= n - large - 1; i++)
            ans.push_back(i);
        
        return ans;
        
    }
};