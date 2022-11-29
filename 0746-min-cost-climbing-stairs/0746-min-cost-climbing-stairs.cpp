class Solution {
public:
    
    int solve(vector<int> &cost, int n)
    {
        // BASE CASE
        if(n==0)
            return cost[0];
        if(n==1)
            return cost[1];
        
        //Recursive case
        int res = cost[n] + min(solve(cost,n-1), solve(cost,n-2));
        return res;
    }
    
    int solve1(vector<int> &cost, int n, vector<int> &dp)
    {
        // BASE CASE
        if(n==0)
            return cost[0];
        if(n==1)
            return cost[1];
        
        //STEP 3:
        if(dp[n]!=-1)
            return dp[n];
        
        
        //STEP 2:
        dp[n] = cost[n] + min(solve1(cost,n-1, dp), solve1(cost,n-2, dp));
        return dp[n];
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        // Recursive approch
        // // calculate the size of list
        // int n=cost.size();
        // // find the minimum steps to required to reach last position
        // int ans = min(solve(cost, n-1),solve(cost, n-2));
        // return ans;
        
        // Memoized Approch
        int n=cost.size();
        //STEP 1:
        vector<int> dp(n+1, -1);
        int ans = min(solve1(cost, n-1, dp),solve1(cost, n-2, dp));
        return ans;
                                                  
                                                  
                                                  
                                                  
        
    }
};