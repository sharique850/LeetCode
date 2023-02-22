class Solution {
public:
    bool possible(vector<int>& weights,int mid,int days){
        int sum=0;
        int m=1;
        for(int i=0;i<weights.size();i++){
            if(sum+weights[i]<=mid){
                sum=sum+weights[i];
            }
            else{
                m++;
                if(m>days||weights[i]>mid)return false;
                sum=weights[i];
            }
        }
        
       return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int total=0;int ans;
        for(auto a : weights){
            total=total+a;
        }
        int i=0;int j = total;int mid;
        while (i<=j){
            mid=(i+j)/2;
            if (possible(weights,mid, days)){
                ans=mid;
                j=mid-1;}
            else{
                i=mid+1;
            }
        }
    return ans;    
    }
    
};