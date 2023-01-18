class Solution {
public:
    
    int kadane(vector<int>& nums) {

        int maxi = INT_MIN;
        int currmax = 0;

        for(auto i:nums){
            currmax += i;
            
            if(currmax >maxi){
                maxi = max(maxi,currmax);
            }

            if(currmax<0){
                currmax =0;
            }
        }

        return maxi;

    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int maxsubarraySum = kadane(nums);

        int countpositive =0;
        int tSumInvert =0;

        for(int i=0;i<nums.size();i++)
        {
             nums[i]= -1*nums[i];
             if(nums[i]>0){countpositive++;}
             tSumInvert +=nums[i];
        }
        if(countpositive == nums.size()){
            return maxsubarraySum;
        }


       int maxsubarraySum_reverse = kadane(nums);

       int reverse_ans = -1 * (tSumInvert - maxsubarraySum_reverse);


       return max(maxsubarraySum,reverse_ans);
        
    }
};