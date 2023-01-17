class Solution {
public:
    int minFlipsMonoIncr(string s) {
        
        int n = s.length();
        int ans = 0;
        int ones = 0;
    
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                ones++;
            } 
            else {
                ans++;
            }
            ans = min(ones,ans);
        }   
        return ans;
        
    }
};
