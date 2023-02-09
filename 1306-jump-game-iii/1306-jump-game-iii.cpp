class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        
        queue<int> q;
        q.push(start);
        
        while(q.empty()==false)
        {
            int sz = q.size();
            
            for(int i=0; i<sz; i++)
            {
                int idx = q.front();
                q.pop();
                
                // check for idx + arr[idx]
                if(idx + arr[idx] <arr.size()){
                    if(arr[idx + arr[idx]]==0)
                        return true;
                    else if(arr[idx + arr[idx]]>0)
                        q.push(idx + arr[idx]);
                }
                
                // check for idx - arr[idx]
                if(idx - arr[idx] >= 0){
                    if(arr[idx - arr[idx]]==0)
                        return true;
                    else if(arr[idx - arr[idx]]<arr.size())
                        q.push(idx - arr[idx]);
                }
                arr[idx]=-1;
            }
            
        }
        
        return false;
        
    }
};