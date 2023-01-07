class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int ans_idx=0, t_gas=0, t_cost=0, curr_gas=0,i=0;
        
        while(i<gas.size())
        {
            t_gas += gas[i];
            t_cost += cost[i];
            curr_gas += gas[i]-cost[i];
            if(curr_gas<0){
                
               ans_idx=i+1;
                curr_gas=0;
            }
            
            i++;
        }
        if(t_gas<t_cost)
            return -1;
        return ans_idx;
        
    }
};