class Solution {
public:
    
    int dp[310][10010];
    
    int solveDP(int idx, int amount, vector<int> &coins)
    {
        if(amount==0) return 1;
        if(idx<0) return 0;
        
        if(dp[idx][amount]!=-1) return dp[idx][amount];
        
        int ways=0;
        for(int c=0; c<=amount; c+=coins[idx])
        {
            ways += solveDP(idx-1, amount-c, coins);
        }
        
        return dp[idx][amount]=ways;
    }
    
    int change(int amount, vector<int>& coins) {
        
        memset(dp, -1, sizeof(dp));
        return solveDP(coins.size()-1, amount, coins);
        
    }
};