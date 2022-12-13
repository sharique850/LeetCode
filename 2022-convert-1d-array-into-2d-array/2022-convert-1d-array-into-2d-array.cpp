class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        int sz=original.size();
        vector<vector<int>> res(m, vector<int>(n));
        // vector<int> v;
        if(sz != m*n){
            res.clear();
            return res;
        }
            
        
        int row=0, col=0;
        for(int i=0;i<sz;i++)
        {
            res[row][col] = original[i];
            col++;
            
            if(col==n)
            {
                row++;
                col=0;
            }
        }
        
        return res;
        
    }
};