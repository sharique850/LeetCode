class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> tmp;
        int idx1=0,idx2=0, n=nums1.size(), m=nums2.size();
        while(idx1<n && idx2<m)
        {
            if(nums1[idx1]<=nums2[idx2])
                tmp.push_back(nums1[idx1++]);
            else
                tmp.push_back(nums2[idx2++]);
        }
        while(idx1<n)
        {
            tmp.push_back(nums1[idx1++]);
        }
        
        while(idx2<m)
        {
            tmp.push_back(nums2[idx2++]);
        }
        // for(int ni:nums1)
        //     tmp.push_
        
        // for(auto p:tmp)
        //     cout<<p<<" ";
        double ans;
        int t=tmp.size();
        if(t%2==0){
            ans = (tmp[t/2-1]+tmp[t/2])/2.0;
        }
        else{
            ans = tmp[t/2];
        }
        
        return ans;
        
        
        
        
//         vector<int>v;
        
//         // store the array in the new array
//         for(auto num:nums1)   // O(n1)
//             v.push_back(num);
        
//         for(auto num:nums2)  // O(n2)
//             v.push_back(num);
        
//         // Sort the array to find the median
//         sort(v.begin(),v.end());  // O(nlogn)
        
//         // Find the median and Return it
//         int n=v.size();  // O(n)
        
//         return n%2?v[n/2]:(v[n/2-1]+v[n/2])/2.0;
           
    }
};