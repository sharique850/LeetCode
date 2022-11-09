class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int n=word.length();
        int i=0,cnt1=0,cnt2=0;
        
        while(i<n)
        {
            if(word[i]>=65 && word[i]<=90)
                cnt1++;
            else if(word[i]>=97 && word[i]<=122)
                cnt2++;
            
            i++;
        }
        if(n==cnt1)
            return true;
        else if(n==cnt2)
            return true;
        else if(cnt1==1 && (word[0]>=65 && word[0]<=90))
            return true;
        else;
            return false;
    
        
    }
};