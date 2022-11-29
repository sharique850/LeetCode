class RandomizedSet {
    vector<int> v;
    unordered_map<int,int> ump;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        
        if(ump.find(val)!=ump.end())
            return false;
        
        v.push_back(val);
        ump[val] = v.size()-1;
        return true;        
    }
    
    bool remove(int val) {
        
        if(ump.find(val)==ump.end())
            return false;
        
        auto it = ump.find(val);
        v[it->second] = v.back();
        v.pop_back();
        ump[v[it->second]] = it->second;
        ump.erase(val);
        return true;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */