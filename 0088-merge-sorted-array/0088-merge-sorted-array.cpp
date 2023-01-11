class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> tmp;
        int i=0,j=0;
        
        if(n==0)
            return;
        else if(m==0)
        {
            nums1=nums2;
            return;
        }
        
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
                tmp.push_back(nums1[i++]);

            else
                tmp.push_back(nums2[j++]);
        }
        while(i<m)
            tmp.push_back(nums1[i++]);
        while(j<n)
            tmp.push_back(nums2[j++]);

        for(int i=0,j=0;i<tmp.size();i++,j++)
            nums1[j]=tmp[i];
        
    }
};