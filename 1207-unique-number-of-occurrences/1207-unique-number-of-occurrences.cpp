class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        sort(arr.begin(),arr.end());
        int i=0;

        while(i<arr.size())
        {
            int cnt=1;
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[i]==arr[j])
                {
                    cnt++;
                }
            }
            ans.push_back(cnt);
            i=i+cnt;
        }

        sort(ans.begin(),ans.end());

        for(int c=0;c<ans.size()-1;c++)
        {
            if(ans[c]==ans[c+1])
                return false;
        }
        return true;
        
    }
};