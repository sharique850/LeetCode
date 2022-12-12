class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int n = mat.size(), sm=0;
        
        for(int i=0;i<n;i++)
        {
            sm += mat[i][i] + mat[i][n-i-1];
        }
        if(n%2)
            sm -= mat[n/2][n/2];
        return sm;
        
    }
};