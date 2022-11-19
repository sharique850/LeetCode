class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int pair=0,i=0;

        vector<int> result;

        while(i<nums.size()-1)
        {
            int flag=0;
            if(nums[i]==nums[i+1])
            {
                pair++;
                nums.erase(nums.begin()+i);
                nums.erase(nums.begin()+i);
                flag=1;
            }
            if(nums.size()==0)
                break;
            if(flag==0)
                i++;
        }
        result.push_back(pair);
        result.push_back(nums.size());

        return result;
        
        
    }
};