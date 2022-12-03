class Solution {
public:
    double average(vector<int>& salary) {
        int maxi = INT_MIN, mini = INT_MAX;
        
        for(auto i:salary)
        {
            maxi = max(maxi,i);
            mini = min(mini,i);
        }
        double sm=0;
        int c=0;
        for(auto j:salary)
        {
            if(j==maxi || j==mini)
                continue;
            sm += j;
            c++;
        }
        return sm/c;
        
    }
};