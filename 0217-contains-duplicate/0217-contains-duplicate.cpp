class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int n = nums.size(),i=0;
//         vector<int> v(nums.begin(),nums.end());
//         while(i<n)
//         {
//             int x = nums[i];
//             v.erase(v.begin());
            
//             auto it = find(v.begin(), v.end(), x);
//             if(it!=v.end())
//                 return true;
//             i++;
//         }
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
            if(nums[i]==nums[i+1])
                return true;
        return false;
        
    }
};