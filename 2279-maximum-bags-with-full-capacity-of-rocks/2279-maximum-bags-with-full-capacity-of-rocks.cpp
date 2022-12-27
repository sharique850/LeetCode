class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        int n = capacity.size();
        
        for(int i=0;i<n;i++)
            capacity[i] -= rocks[i];
        
        int cnt=0;
        sort(capacity.begin(),capacity.end());
        for(int i=0;i<n;i++)
        {
            if(capacity[i]==0)
                cnt++;
            else if(capacity[i]<=additionalRocks){
                cnt++;
                additionalRocks -= capacity[i];
            }
            else
                break;
        }
        
        return cnt;
        
    }
};