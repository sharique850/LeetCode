class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n = nums.size();
        int maxReach=0, curr=0, jumps=0;
        
        // if(n==1 && nums[0]==0)
        //     return nums[0];
        for(int i=0;i<n-1;i++)
        {
            maxReach = max(maxReach, i+nums[i]);
            
            if(i==curr)
            {
                curr = maxReach;
                jumps++;
            }
        }
        
        return jumps;
        
    }
};