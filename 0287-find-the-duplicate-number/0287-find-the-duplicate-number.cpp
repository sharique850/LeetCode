class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        
        // Using Brute Force Approch
//         int sz=nums.size()-1;
//         int sum1=sz*(sz+1)/2;
//         int sum2=0;
//         for(int i=0;i<sz+1;i++)
//         {
//             sum2+=nums[i];
//         }
        
//         return sum2-sum1;
        
        // Using Set method
        set<int> s;
        for(auto i:nums)
        {
           if(s.find(i)!=s.end())
               return i;
            else
                s.insert(i);
        }
        return 0;
        
    }
};