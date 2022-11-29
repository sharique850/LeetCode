class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        
        while(nums.size()!=1)
        {
            vector<int> tmp;
            int flag=1;
            for(int i=0;i<nums.size();i+=2)
            {
                if(flag)
                {
                    tmp.push_back(min(nums[i],nums[i+1]));
                    flag=0;
                }
                else{
                    tmp.push_back(max(nums[i],nums[i+1]));
                    flag=1;
                }
            }
            nums.clear();
            nums = tmp;
        }
        
        return nums[0];
        
    }
};