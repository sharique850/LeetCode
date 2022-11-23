class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int mini = INT_MAX;
        int left=0;
        int total=0;
        
        for(int i=0;i<nums.size();i++)
        {
            total+=nums[i];
            
            while(total>=target)
            {
                mini = min(mini, i+1-left);
                total -= nums[left++];
            }
        }
        return mini==INT_MAX? 0: mini;
        
        
    }
};