class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int p=0,i=0;

        vector<int> result;

        while(i<nums.size()-1)
        {
            // cout<<i<<endl;
            int flag=0;
            if(nums[i]==nums[i+1])
            {
                p++;
                nums.erase(nums.begin()+i);
                nums.erase(nums.begin()+i);
                flag=1;
            }
            // cout<<nums[i]<<" "<<nums[i+1]<<endl;
            if(nums.size()==0)
                break;
            if(flag==0)
                i++;
        }
        // cout<<"Pairs "<<p<<endl;
        // cout<<"Size of nums "<<nums.size()<<endl;
        // for(auto a:nums)
        // 	cout<<a<<" ";
        // cout<<endl;
        result.push_back(p);
        result.push_back(nums.size());

        return result;
        
        
    }
};