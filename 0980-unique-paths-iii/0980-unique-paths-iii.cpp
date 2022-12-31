class Solution {
public:
    int ans=0;
    int cnt_0=1;
    
    void dfs(int i, int j, vector<vector<int>>& grid, int count)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==-1)
            return;
        
        if(grid[i][j]==2)
        {
            if(count==cnt_0)
                ans++;
            return;
        }
        
        
        grid[i][j]=-1;
        
        dfs(i+1,j,grid,count+1);
        dfs(i,j+1,grid,count+1);
        dfs(i-1,j,grid,count+1);
        dfs(i,j-1,grid,count+1);
        
        grid[i][j]=0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        
        int si=0,sj=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==1){
                    si=i;
                    sj=j;
                }
                else if(grid[i][j]==0)
                    cnt_0++;
            }
        }
        
        dfs(si,sj,grid,0);
        
        return ans;
    }
};