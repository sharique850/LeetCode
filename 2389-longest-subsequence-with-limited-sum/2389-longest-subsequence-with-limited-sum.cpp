class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        sort(nums.begin(), nums.end());
        
        vector<int> pre(nums.size(), 0);
        
        pre[0]=nums[0];
        
        for(int i=1; i<nums.size(); i++)
        {
            pre[i] = pre[i-1] + nums[i];
        }
        
        vector<int> ans;
        
        for(int i=0; i<queries.size(); i++)
        {
            int x = upper_bound(pre.begin(),pre.end(), queries[i]) - pre.begin();
            ans.push_back(x);
        }
        return ans;
        
    }
};