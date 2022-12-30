class Solution {
public:
    string reverseWords(string s) {
        
        vector<string> st;
        string t;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                t+=' ';
                st.push_back(t);
                t.clear();
            }
            else{
                t+=s[i];
            }
        }
        st.push_back(t+' ');
        string ans;
        for(string i:st)
        {
            reverse(i.begin(),i.end());
            i.erase(i.begin());
            // cout<<i<<endl;
            ans+=i+' ';
        }
        ans.erase(ans.begin()+ans.size()-1);
                
        
        return ans;
        
    }
};