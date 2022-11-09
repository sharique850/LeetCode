class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> ump;
        for(char ch:s)
        {
            ump[ch]++;
        }
        
        vector<pair<char,int>> v(ump.begin(),ump.end());
        
        sort(v.begin(),v.end(), 
             [](pair<char,int> &p1, pair<char,int> &p2){
                 return p1.second>p2.second;
             }
            );
        string res="";
        for(pair<char,int> p: v)
        {
            for(int i=0;i<p.second;++i)
                res+=p.first;
        }
        return res;
            
    }
};