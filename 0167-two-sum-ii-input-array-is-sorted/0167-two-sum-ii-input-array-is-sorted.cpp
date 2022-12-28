class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> ans;
        
        int i=0,j=numbers.size()-1;
        
        while(i<j)
        {
            int tmp = numbers[i]+numbers[j];
            if(tmp==target)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            else if(tmp>target)
            {
                j--;
            }
            else
                i++;
        }
        return ans;
        
    }
};