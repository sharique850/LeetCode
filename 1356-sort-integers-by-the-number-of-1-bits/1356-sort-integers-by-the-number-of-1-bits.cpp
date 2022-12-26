class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> ans;
        vector<pair<int,int>> v;
        for (auto val: arr){
            int bit= val;
            int cnt=0;
            while (bit>0){
                cnt+= (bit&1);
                bit= bit>>1;
            }
            v.push_back({cnt,val});
        }
        sort(v.begin(),v.end());
        for (auto val: v)ans.push_back(val.second);
        return ans;
    }
};