class Solution {
public:
    int countOdds(int low, int high) {
        // int count=0;
        // for(int i=low; i<=high; i++){
        //     if(i%2!=0)
        //         count++;
        // }
        // return count;
        
//         int s = (high - low) + 1;

//         if(low%2!=0 && high%2!=0)
//             return s/2+1;
//         return s/2; 
        
        int s = (high-low)/2;
        if(low%2!=0 || high%2!=0)
            return s+1;
        return s;
        
        
        // int ans= (high-low)/2;
        // if (low&1 || high&1)ans++;
        // return ans;
        
    }
};