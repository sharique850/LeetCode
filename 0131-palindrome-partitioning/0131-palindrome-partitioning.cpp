class Solution {
public:
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> ans;
        vector<string> v;
        solve(s,v,ans);
        return ans;
    }
    
    void solve(string s, vector<string> &v, vector<vector<string>> &ans)
    {
        if(s.size()==0)
        {
            ans.push_back(v);
            return;
        }
        
        for(int i=1; i<=s.size(); i++)
        {
            string x = s.substr(0,i);
            if(isPalindrom(x))
            {
                v.push_back(x);
                string y = s.substr(i,s.size()-i);
                solve(y,v,ans);
                v.pop_back();
            }
        }
    }
    
    bool isPalindrom(string x)
    {
        string t=x;
        reverse(x.begin(),x.end());
        return t==x;
    }
};