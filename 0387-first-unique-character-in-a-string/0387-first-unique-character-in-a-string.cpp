class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();
        if(n==1)
            return 0;
        for(int i=0;i<n;i++)
        {
            int flag=0;
            for(int j=0;j<n;j++)
            {
                if(s[i]!=s[j])
                    flag=1;
                else if(i==j)
                {
                    continue;
                }
                else{
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                return i;
        }
        return -1;
        
    }
};