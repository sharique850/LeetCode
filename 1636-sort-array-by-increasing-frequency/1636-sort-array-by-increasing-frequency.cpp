class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> umap;
        // use unordered map
        for(auto it:nums)
        {
            umap[it]++;
        }

        // sort using lambda function
        sort(nums.begin(),nums.end(), [&](int a, int b)
        { return umap[a]!=umap[b] ? umap[a]<umap[b] : a>b; });

        return nums;
        
        
    }
};