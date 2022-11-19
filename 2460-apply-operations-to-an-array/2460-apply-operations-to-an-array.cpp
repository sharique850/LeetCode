class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
        vector<int> res;
       
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        
        for(auto x:nums)
        {
            if(x!=0)
                res.push_back(x);
        }
        
        for(auto a:nums)
        {
            if(a==0)
                res.push_back(a);
        }
               
        
        return res;
    }
};