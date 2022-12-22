class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int j=0, n=nums.size();
        // while(j<k)
        // {
        //     int x = nums[n-1];
        //     for(int i=n-2; i>=0; i--)
        //     {
        //         nums[i+1]=nums[i];
        //     }
        //     nums[0]=x;
        //     j++;
        // }
//         if(k>n)
//             k=k%n;
//         queue<int> q;
//         for(int i=0;i<k;i++)
//             q.push(nums[n-i-1]);
        
//         for(int i=0;i<k;i++)
//         {
//             auto it = nums.begin();
//             nums.insert(it, q.front());
//             q.pop();
//         }
        
//         for(int i=0;i<k;i++)
//         {
//             nums.erase(nums.begin()+n-i-1+k);
//         }
        
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        
    }
};