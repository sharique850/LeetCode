class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int n=coordinates.size();
        
        int xcd = (coordinates[1][0] - coordinates[0][0]);
        int ycd = (coordinates[1][1] - coordinates[0][1]);
        
        int xdiff, ydiff;
        for(int i=2; i<n; ++i)
        {
            xdiff = (coordinates[i][0] - coordinates[i-1][0]);
            ydiff = (coordinates[i][1] - coordinates[i-1][1]);
            
            if(ycd * xdiff != xcd * ydiff)
                return false;
        }
        return true;
        
    }
};