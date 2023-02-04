class Solution {
public:
    
    void solve(vector<int>& nums, vector<vector<int>> &ans, int indx){
        
        if(indx>=nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int j=indx;j<nums.size();j++)
        {
            swap(nums[indx], nums[j]);
            
            solve(nums, ans, indx+1);
            
            swap(nums[indx], nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int indx=0;
        solve(nums, ans, indx);
        
        return ans;
    }
};