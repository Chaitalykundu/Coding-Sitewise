class Solution {
public:
   bool check(vector<int> &v1, vector<int> &v2) 
    {
        for(int i=0; i<26; i++)
            if(v1[i]!=v2[i]) return false;
        return true;
    }

    bool checkInclusion(string s1, string s2) 
    {
        if(s1.size() > s2.size()) return false;
        vector<int> freqs1(26,0), freqs2(26,0); //for storing frequency of strings
        for(auto it:s1) freqs1[it-'a']++; //storing s1 string frequency

        int low=0;
        for(int high=0; high<s2.size(); high++)
        {
            freqs2[s2[high]-'a']++;

            //When both pointers difference is equal to length of s1 string
            //we check substring formed using that pointers is equal to s1's permutation or not
            if(high-low+1 == s1.size()) 
                if(check(freqs1, freqs2)) return true;

            //When both pointers difference is greater than or equal to length of s1 string
            //we decrease low pointer's character frequency and move low pointer
            if(high-low+1 >= s1.size())
            {
                freqs2[s2[low]-'a']--;
                low++;
            }
        }
        return false;
          
    }
};
