class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        
        if(nums.size()==1) return nums[0];
        
        while(i<=j){
            if(nums[i]==nums[i+1] && nums[j]==nums[j-1])
                i+=2,j-=2;
            else{
                if(nums[i]!=nums[i+1])
                    return nums[i];
                else
                    return nums[j];
            }
        }
        return -1;
    }
};