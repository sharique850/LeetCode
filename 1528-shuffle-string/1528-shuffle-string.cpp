class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        int n=indices.size();
        string st=s;
        for(int i=0;i<n;i++)
        {
            s[indices[i]]=st[i];
        }
        return s;
    }
};