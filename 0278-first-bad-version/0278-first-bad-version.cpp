// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int s = 1, e = n, mid = s +(e-s)/2, ans = 0;
        while(s<=e)
        {
            bool flag = isBadVersion(mid);
            if(flag == true)
            {
                e = mid -1;
                 ans = mid;
            }
            
            if(flag == false)
            {
               s =  mid + 1;
            }
            mid = s +(e-s)/2;
        }
        return ans;
        
    }
};