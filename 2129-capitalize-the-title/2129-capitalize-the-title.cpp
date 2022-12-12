class Solution {
public:
    string capitalizeTitle(string title) {
        
        vector<string> v;
        int i=0, n=title.size();
        string temp;
        while(i<n)
        {
            if(title[i]==' '){
                v.push_back(temp);
                temp="";
            }
            else{
                title[i]=tolower(title[i]);
                temp+=title[i];
            }
            i++;
        }
        if(temp.size())
            v.push_back(temp);
        
        for(int j=0; j<v.size(); j++)
        {
            if(v[j].size()>2)
                v[j][0]-=32;
        }
        
        string ans;
        for(auto s:v)
        {
            ans+=" "+s;
        }
        ans.erase(ans.begin());
        return ans;
        
    }
};