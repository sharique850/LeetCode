class Solution {
public:
    // bool isSorted(vector<)
    bool isSubsequence(string s, string t) {
        
        int i=0,j=0,cnt=0;
        while(j<t.size())
        {
            if(s[i]==t[j]){
                i++,j++;
                cnt++;
            }
            else{
                j++;
            }
            
        }
        if(cnt==s.size())
            return true;
        return false;
    }
};