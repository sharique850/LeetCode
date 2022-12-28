class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        priority_queue<int> q;
        int sm=0;
        
        for(int i=0;i<piles.size();i++){
            q.push(piles[i]);
            sm += piles[i];
        }
        
        while(k--)
        {
            int x = q.top();
            q.pop();
            sm -= x/2;
            q.push(x-x/2);
        }
        
        return sm;
        
    }
};