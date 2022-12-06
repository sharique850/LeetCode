class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        for(auto x:arr)
            cout<<x<<" ";
        cout<<endl;
        int cd = arr[1]-arr[0];
        
        for(int i=1;i<arr.size()-1;i++)
        {
            int flag=0;
            if(arr[i+1]-arr[i]==cd){
                flag=1;
                cd=arr[i+1]-arr[i];
            }
            if(flag==0)
                return false;
                
        }
        return true;
        
    }
};