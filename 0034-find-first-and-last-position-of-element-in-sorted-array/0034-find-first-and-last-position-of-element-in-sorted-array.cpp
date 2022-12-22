class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;
        int n = nums.size();
        int l = 0, h = n-1, mid;
        int r=-1;
        while(l<=h)
        {
            mid = l + (h-l)/2;
            
            if(nums[mid]==target){
                r = mid;
                h = mid - 1;
            }
            else if(nums[mid]<target)
                l = mid + 1;
            else
                h = mid - 1;
        }
        ans.push_back(r);
        l = 0, h = n-1;
        while(l<=h)
        {
            mid = l + (h-l)/2;
            
            if(nums[mid]==target){
                r = mid;
                l = mid + 1;
            }
            else if(nums[mid]<target)
                l = mid + 1;
            else
                h = mid - 1;
        }
        ans.push_back(r);
        
        return ans;
        
    } 
    
};