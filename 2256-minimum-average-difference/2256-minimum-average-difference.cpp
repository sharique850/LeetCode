class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        long long n=nums.size(), sm=0, curr=0, avg1=0,avg2=0,ans=0;
        
        for(long long x:nums)
            sm+=x;
        long long mini = INT_MAX;
        for(long long i=0;i<n;i++)
        {
            curr += nums[i];
            avg1 = curr/(i+1);
            if(i==n-1)
            {
                if(avg1<mini)
                    return n-1;
                else
                    break;
            }
            avg2 = (sm-curr)/(n-i-1);
        
            if(abs(avg1-avg2)<mini)
            {
                mini = abs(avg1-avg2);
                ans = i;
            }
        }
        
        return ans;
    }
};