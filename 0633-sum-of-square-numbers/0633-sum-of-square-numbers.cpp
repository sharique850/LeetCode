class Solution {
public:
    bool judgeSquareSum(int c) {
        
        long int left=0, right=sqrt(c);
        cout<<right<<endl;
        while(left<=right)
        {
            long int total = left*left + right*right;
            
            if(total==c)
                return true;
            else if(total<c)
                left++;
            else
                right--;
        }
        return false;
        
    }
};