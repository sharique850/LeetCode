class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        vector<int> s1(26,0), s2(26,0), s3(26,0), s4(26,0);
        
        for(auto word:word1)
        {
            s1[word-'a']++;
            s3[word-'a'] = 1;
        }
        
        for(auto word:word2)
        {
            s2[word-'a']++;
            s4[word-'a'] = 1;
        }
        
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        
        return s1==s2 && s3==s4;
        
    }
};