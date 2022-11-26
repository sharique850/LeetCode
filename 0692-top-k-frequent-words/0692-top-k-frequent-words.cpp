class Solution {
public:
    
    bool static cmp(pair<int,string> &p1, pair<int,string> &p2)
    {
        if(p1.first==p2.first) return p1.second<p2.second;
        return p1.first>p2.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int> ump;
        for(auto word:words)
            ump[word]++;
        
        vector<pair<int,string>> vp;
        
        for(auto kv:ump)
            vp.push_back({kv.second,kv.first});
        
        sort(vp.begin(),vp.end(),cmp);
        
        vector<string> res;
        for(int i=0;i<k;i++)
            res.push_back(vp[i].second);
        
        return res;
        
    }
};