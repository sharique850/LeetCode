class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> tmp;
//         int idx1=0,idx2=0, n=nums1.size(), m=nums2.size();
//         while(idx1<n && idx2<m)
//         {
//             if(nums1[idx1]<=nums2[idx2])
//                 tmp.push_back(nums1[idx1++]);
//             else
//                 tmp.push_back(nums2[idx2++]);
//         }
//         while(idx1<n)
//         {
//             tmp.push_back(nums1[idx1++]);
//         }
        
//         while(idx2<m)
//         {
//             tmp.push_back(nums2[idx2++]);
//         }
        
        
        for(int n1:nums1)
            tmp.push_back(n1);
        
        for(int n2:nums2)
            tmp.push_back(n2);
        
        sort(tmp.begin(),tmp.end());
        
        double ans;
        int t=tmp.size();
        if(t%2==0){
            ans = (tmp[t/2-1]+tmp[t/2])/2.0;
        }
        else{
            ans = tmp[t/2];
        }
        
        return ans;
           
    }
};