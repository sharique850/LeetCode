class Solution {
public:
    // It will only check the number
    bool selfDivide(int n)
    {
        int x=n;
        while(x>0)
        {
            int rem = x%10;
            x = x/10;
            if(rem==0 || n%rem!=0)
                return false;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;

        for(int i=left;i<=right;i++)
        {
            if(selfDivide(i))
                res.push_back(i);
        }
        return res;
        
    }
};