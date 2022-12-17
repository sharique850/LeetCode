class Solution {
public:
    int dp[2501];
    int solve(int i, vector<int> &v)
    {
        int ans=1;
        if(dp[i]!=-1) return dp[i];
        for(int j=0; j<i;j++)
        {
            if(v[i]>v[j])
                ans = max(ans, solve(j,v)+1);
        }
        return dp[i]=ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int mx=0;
        for(int i=0;i<nums.size();i++)
        {
            mx = max(mx,solve(i, nums));
        }
        return mx;
        
    }
};