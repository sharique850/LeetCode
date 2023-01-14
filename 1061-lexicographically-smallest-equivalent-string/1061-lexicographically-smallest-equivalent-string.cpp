class Solution {
public:
    
    vector<int> headchar;
    
    int find(int x){
        if(headchar[x]==-1) return x;
        
        return headchar[x] = find(headchar[x]);
    }
    
    void Union(int x, int y){
        int p_x = find(x);
        int p_y = find(y);
        
        if(p_x == p_y) return;
        
        headchar[max(p_x,p_y)] = min(p_x,p_y);
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        
        // memset(headchar, -1, sizeof(headchar));
        headchar.resize(26,-1);
        
        for(int i=0; i<s1.size(); i++)
            Union(s1[i]-'a', s2[i]-'a');
        
        for(auto i=0; i<baseStr.size();i++)
        {
            baseStr[i] = find(baseStr[i]-'a')+'a';
        }
        return baseStr;
    }
};