class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size(), m=nums2.size();
        
        vector<vector<int>> res;
        set<int> ans1;
        set<int> ans2;
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int i=0,j=0;
        
        while(i<n)
        {
            auto it1 = find(nums2.begin(),nums2.end(), nums1[i]);
            if(it1==nums2.end()){

                ans1.insert(nums1[i]); 
            }
            i++;
        }
        
        while(j<m)
        {               
            auto it2 = find(nums1.begin(),nums1.end(), nums2[j]);
            if(it2==nums1.end()){

                ans2.insert(nums2[j]);
            }
            j++;
                    
            
        }
        vector<int> v1(ans1.begin(),ans1.end());
        vector<int> v2(ans2.begin(),ans2.end());
        res.push_back(v1);
        res.push_back(v2);
        return res;
        
    }
};