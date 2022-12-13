class Solution {
public:
    char findTheDifference(string s, string t) {

        int s1=s.length(),ans1=0,ans2=0;
        for(int i=0;i<s1;i++)
        {
            ans1=ans1+t[i];
            ans2=ans2+s[i];
        }
        ans1=ans1+t[s1];
        return char(ans1-ans2);
    }
};