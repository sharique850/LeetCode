class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        
        priority_queue<int> pq;
        int mini=INT_MAX, diff=INT_MAX;
        
        for(auto i:nums){
            if(i%2!=0)
                i*=2;
            mini = min(mini, i);
            pq.push(i);
        }
        
        while(pq.top()%2==0){
            int tp = pq.top();
            pq.pop();
            diff = min(diff, tp-mini);
            mini = min(mini, tp/2);
            pq.push(tp/2);
        }
        
        return min(diff, pq.top()-mini);
        
    }
};