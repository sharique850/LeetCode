class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> st;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0){
                if(i%5==0)
                    st.push_back("FizzBuzz");
                else
                    st.push_back("Fizz");
            }
            
            else if(i%5==0)
                st.push_back("Buzz");
    
            else{
                string t= to_string(i);
                st.push_back(t);
            }
                
        }
        return st;
        
    }
};