class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
        if(s1==s2)
            return true;
        vector<int> tmp;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i]) tmp.push_back(i);
        }
        
        if(tmp.size()==2)
        {
            int a=tmp[0], b=tmp[1];
            if(s1[a]==s2[b] && s1[b]==s2[a])
                return true;
        }
        return false;
            
        
    }
};