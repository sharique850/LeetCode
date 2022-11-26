class Solution {
public:
    
    bool static cmp(pair<int,int> &p1, pair<int,int> &p2)
    {
        if(p1.first==p2.first) return p1.second<p2.second;
        return p1.first>p2.first;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> ump;
        for(auto no:nums)
            ump[no]++;
        
        vector<pair<int,int>> vp;
        
        for(auto kv:ump)
            vp.push_back({kv.second,kv.first});
        
        sort(vp.begin(),vp.end(),cmp);
        
        vector<int> res;
        for(int i=0;i<k;i++)
            res.push_back(vp[i].second);
        
        return res;
        
    }
};