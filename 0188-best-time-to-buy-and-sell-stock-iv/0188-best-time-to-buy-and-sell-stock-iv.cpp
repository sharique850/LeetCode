class Solution {
public:
    
    int solve(int idx, int operationNo, vector<int> &prices, int k, vector<vector<int>> &dp){
        
        if(idx==prices.size())
            return 0;
        if(operationNo==2*k)
            return 0;
        
        if(dp[idx][operationNo] != -1)
            return dp[idx][operationNo];
        
        int ans=0;
        if(operationNo%2==0)
        {
            int bk = -prices[idx] + solve(idx+1, operationNo+1, prices, k, dp);
            int sk = 0 + solve(idx+1, operationNo, prices, k, dp);
            ans = max(bk, sk);
        }
        else
        {
            int slk = prices[idx] + solve(idx+1, operationNo+1, prices, k, dp);
            int sk = 0 + solve(idx+1, operationNo, prices, k, dp);
            ans = max(slk, sk);
        }
        
        return dp[idx][operationNo] = ans;
    }
    
    int maxProfit(int k, vector<int>& prices) {
        
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2*k,-1));
        return solve(0, 0, prices, k, dp);
    }
};