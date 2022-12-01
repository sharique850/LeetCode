class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        int n = 10010;
        vector<int> value(n,0);
        
        for(int num:nums)
            value[num] += num;
        int dp[n];
        dp[1]=value[1];
        for(int i=2;i<n;i++)
        {
            dp[i] = max(dp[i-2] + value[i], dp[i-1]);
        }
        return dp[n-1];
        
//         int n = 10010;
//         vector<int> freq(n, 0);

//         for(int num:nums)
//             freq[num] += num;

//         int prev2=0, prev1=freq[0];
//         for(int i=0; i<n;i++)
//         {
//             int ans = max(freq[i]+prev2, prev1);
//             prev2 = prev1;
//             prev1 = ans;
//         }
//         return prev1;
    }
};