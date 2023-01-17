class Solution {
public:
    int minFlipsMonoIncr(string s) {
        
        int c_one = 0;
        int c_flip = 0;
        
        for(auto i:s){
            if(i=='1') c_one++;
            else{
                c_flip = min(++c_flip, c_one);
            }
        }
        return c_flip;
        
    }
};