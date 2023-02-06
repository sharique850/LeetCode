class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        
        sort(nums.begin(), nums.end());
        // bool flag=0;
        int sz=nums.size();
        for(int i=0;i<sz;i++)
        {
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
            int l=i+1, r=sz-1;
            while(l<r)
            {
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==0)
                {
                    // flag=1;
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                    res.push_back(v);
                    
                    while(l<r && nums[l]==nums[l+1]) l++;
                    while(l<r && nums[r]==nums[r-1]) r--;
                    
                    l++;
                    r--;
                }
                else if(sum<0)
                    l++;
                else
                    r--;
            }
            }
        }
        return res;
    }
};