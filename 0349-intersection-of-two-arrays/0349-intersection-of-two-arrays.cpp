class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size(), m=nums2.size(),k;
        if(n<m)
            k=n;
        else
            k=m;
        set<int> res;
        
        for(int i=0;i<k;i++)
        {
            if(k==n){
            auto it = find(nums2.begin(),nums2.end(), nums1[i]);
            if(it!=nums2.end())
                // if(it!=res.end())
                    res.insert(nums1[i]);
            }
            else if(k==m){
                auto it = find(nums1.begin(),nums1.end(), nums2[i]);
                if(it!=nums1.end())
                    // if(it!=res.end())
                        res.insert(nums2[i]);
            }
        }
        // for(auto x:res)
        //     cout<<x<<" ";
        vector<int> ans(res.begin(),res.end());
        // vector<int> ans;
        
        return ans;
    }
};