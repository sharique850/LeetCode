class Solution {
public:
    string truncateSentence(string s, int k) {
        
        string st="";
        string word;
        int cnt=1;
        stringstream i(s);
        
        while(i >> word && cnt<=k)
        {
            st.append(word);
            if(cnt==k)
                break;
            st.append(" ");
            cnt++;
        }
        return st;
    }
};