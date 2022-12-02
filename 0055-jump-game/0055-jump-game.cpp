class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        int reach = 0;
        
        if(n==1 && nums[0]==0)
            return true;
        for(int i=0;i<n;i++)
        {
            if(reach<i)
                return false;
            reach = max(reach, i+nums[i]);
        }
        
        return true;
        
    }
};