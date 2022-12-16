class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()==1)
            return s;
        string ans;
        int n=s.size(), max_len = 0;
        vector<vector<int>> dp(n, vector<int>(n,0));
        for(int k = 0; k<n; k++)
        {
            for(int i=0, j=i+k; j<n; i++, j++)
            {
                if(i==j)
                    dp[i][j]=1;
                else if(k==1)
                    dp[i][j]=(s[i]==s[j])? 2:0;
                else{
                    if(s[i]==s[j] && dp[i+1][j-1])
                        dp[i][j]=dp[i+1][j-1]+2;
                }
                
                if(dp[i][j])
                {
                    if(j-i+1>max_len){
                     max_len = j-i+1;
                     ans = s.substr(i,max_len);   
                    }
                }
            }
        }
       return ans; 
    }
};