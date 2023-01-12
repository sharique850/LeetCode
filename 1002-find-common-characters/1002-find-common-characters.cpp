class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
        vector<int> common(26,INT_MAX);
        vector<string> ans;
        
        for(auto i:words){
            vector<int> cnt(26,0);
            for(auto j:i){
                cnt[j - 'a']++;
            }
            
            for(int k=0;k<26;k++)
            {
                common[k] = min(common[k], cnt[k]);
            }
        }
        
        for(int i=0; i<26; i++){
            for(int j=0;j<common[i];j++)
            {
                ans.push_back(string(1,i + 'a'));
            }
        }
        return ans;
        
    }
};