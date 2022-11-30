class Solution {
public:
    
    int solvRec(vector<int> &coins, int amount)
    {
        // base case
        if(amount==0)
            return 0;
        if(amount<0)
            return INT_MAX;
        
        // recursive case
        int mini = INT_MAX;
        for(int i=0; i<coins.size(); i++){
            int ans = solvRec(coins, amount-coins[i]);
            if(ans!=INT_MAX)
                mini = min(mini, 1+ans);
        }
        return mini;
    }
    
    int solveMemo(vector<int> &coins, int amount, vector<int> &dp)
    {
        // base case
        if(amount==0)
            return 0;
        if(amount<0)
            return INT_MAX;
        
        // Memoized
        if(dp[amount]!=-1)
            return dp[amount];
        
        // recursive case
        int mini = INT_MAX;
        for(int i=0; i<coins.size(); i++){
            int ans = solvRec(coins, amount-coins[i]);
            if(ans!=INT_MAX)
                mini = min(mini, 1+ans);
        }
        
        dp[amount]=mini;
        return mini;
    }
    
    
    int solveDP(vector<int> &coins, int amount)
    {
        vector<int> dp(amount+1, INT_MAX);
        dp[0]=0;
        
        for(int i=1;i<=amount;i++)
        {
            for(int j=0;j<coins.size();j++)
            {
                if(i-coins[j]>=0 && dp[i-coins[j]]!=INT_MAX)
                    dp[i] = min(dp[i] , 1 + dp[i-coins[j]]);
            }
        }
        
        if(dp[amount]==INT_MAX)
            return -1;
        return dp[amount];
    }
    
    int coinChange(vector<int>& coins, int amount) {
        // Recursive approch
        // int res = solvRec(coins, amount);
        // if(res==INT_MAX)
        //     return -1;
        // return res;
        
        // Memoized approch
        //STEP 1:
        // vector<int> dp(amount+1,-1);
        // int res = solveMemo(coins, amount,dp); 
        // if(res==INT_MAX)
        //     return -1;
        // return res;
        
        // DP Approch
        
        int res = solveDP(coins, amount);
        return res;
    }
};