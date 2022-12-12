class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        
        for(int i=0; i<n; i++)
        {
            set<int> s;
            for(int j=0;j<n;j++)
            {
                auto it = find(s.begin(),s.end(), matrix[i][j]);
                if(it==s.end())
                    s.insert(matrix[i][j]);
                else
                    return false;
            }
        }
        
        for(int i=0; i<n; i++)
        {
            set<int> s;
            for(int j=0;j<n;j++)
            {
                auto it = find(s.begin(),s.end(), matrix[j][i]);
                if(it==s.end())
                    s.insert(matrix[j][i]);
                else
                    return false;
            }
        }
        
        return true;
        
    }
};