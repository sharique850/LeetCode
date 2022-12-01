class Solution {
public:
    
    int dp[110];
    int solveRec(vector<int> &nums, int n)
    {
        if(n<0)
            return 0;
        if(n==0)
            return nums[0];
        
        if(dp[n]!=-1) return dp[n];
        int inc = solveRec(nums, n-2) + nums[n];
        int exc = solveRec(nums, n-1) + 0;

        return dp[n]=max(inc, exc);
            
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        int ans=solveRec(nums, n-1);
        return ans;
        
    }
};