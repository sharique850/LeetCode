class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        // int i=0,j=n-1;
        int lcount=0, rcount=0;
        vector<char> vowels={'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0,j=n-1; i<j; i++, j--)
        {
            auto it1 = find (vowels.begin(), vowels.end(), s[i]);
            if(it1!=vowels.end())
                lcount++;
            
            auto it2 = find (vowels.begin(), vowels.end(), s[j]);
            if(it2!=vowels.end())
                rcount++;
                
        }
        if(lcount==rcount)
            return true;
        return false;
    }
};