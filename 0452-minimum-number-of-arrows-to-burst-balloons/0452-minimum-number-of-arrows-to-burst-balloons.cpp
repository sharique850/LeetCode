class Solution {
public:
    
    bool static cmp(const vector<int> &v1, const vector<int> &v2){
        return v1[1]<v2[1];
    }
        
    
    int findMinArrowShots(vector<vector<int>>& points) {
        
        sort(points.begin(),points.end(), cmp);
        
        int count=1, x=points[0][1];
        
        for(int i=1; i<points.size(); i++)
        {
            if(!(x>=points[i][0] && x<=points[i][1]))
            {
                count++;
                x=points[i][1];
            }
        }
        return count;
        
    }
};