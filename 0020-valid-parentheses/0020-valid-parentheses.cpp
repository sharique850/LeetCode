class Solution {
public:
    bool isValid(string s) {
        
       unordered_map<char,int> ump = {{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}}; 
        
        stack<char> st;
        
        for(char i:s)
        {
            if(ump[i]<0)
                st.push(i);
            else
            {
                if(st.empty()) return false;
                
                char tp = st.top();    
                st.pop();
                
                if(ump[tp] + ump[i] != 0)
                    return false;
                
            }
        }
        
        if(st.empty()) return true;
        return false;
    }
};