class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int m = mat.size();
        vector<vector<int>> res(r, vector<int>(c));
        
        if((m*mat[0].size()) != r*c)
            return mat;
        
        int row=0,col=0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<mat[0].size(); j++)
            {
                res[row][col] = mat[i][j];
                col++;
                
                if(col==c)
                {
                    row++;
                    col=0;
                }
            }
        }
        
        return res;
        
    }
};