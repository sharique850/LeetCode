class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int n=arr.size();
        vector<int> preSum(n);
        preSum[0]=arr[0];
        int sum=arr[0];
        for(int i=1;i<n;i++)
        {
            preSum[i]=preSum[i-1]+arr[i];
            sum+=arr[i];
        }
        
        for(int i=2;i<n;i+=2)
        {
            for(int j=0;(j+i)<n;j++)
            {
                j==0 ? sum+=preSum[i] : sum+=preSum[j+i]-preSum[j-1];
            }
        }
        return sum;
        
    }
};