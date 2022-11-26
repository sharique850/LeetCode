class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        string s,k_s=to_string(k);
        
        vector<int> res;
        for(long long i=0;i<num.size();i++)
        {
            s+=to_string(num[i]);
            
        }
        
        int l = s.size()-1;
        int m = k_s.size()-1;
        int carry = 0;
        
        string ans;
        
        while(l>=0 || m>=0)
        {
            if(l>=0)
                carry += s[l--] - '0';
            if(m>=0)
                carry += k_s[m--] - '0';
            
            ans = to_string(carry%10) + ans;
            carry/=10;
        }
        
        ans = carry ? "1" + ans : ans;
        
        // cout<<ans<<endl;
        for(int i=0;i<ans.size();i++){
            int ans_i = ans[i]-'0';
            res.push_back(ans_i);
        }
        
        
        return res;
    }
};