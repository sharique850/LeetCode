class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        
        int mx=INT_MIN;
        for(int i=0; i<n; i++)
        {
            int sm=0;
            for(int j=0; j<accounts[i].size(); j++)
            {
                sm+=accounts[i][j];
            }
            mx=max(mx,sm);
        }
        
        return mx;
        
    }
};