class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> h(26,0);
        for(int i=0;i<s.size();i++)
            h[s[i]-97]+=1;
        
        for(int i=0;i<t.size();i++)
        {
            h[t[i]-97]-=1;
        }
        for(int i=0;i<26;i++)
            if(h[i]<0 || h[i]>0) return false;
        return true;
    }
};