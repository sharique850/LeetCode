class Solution {
public:
    
    int solve(vector<int> &nums)
    {
        int prev2=0;
        int prev1=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            int inc = prev2 + nums[i];
            int exc = prev1 + 0;
            
            int ans = max(inc, exc);
            prev2 = prev1;
            prev1 = ans;
        }
        return prev1;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return nums[0];

        vector<int> first, second;

        for(int i=0;i<nums.size();i++)
        {
            if(i!=n-1)
                first.push_back(nums[i]);
            if(i!=0)
                second.push_back(nums[i]);
        }
        return max(solve(first),solve(second));
    }
};