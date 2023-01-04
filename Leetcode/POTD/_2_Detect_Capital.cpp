class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int upper=0, lower=0;
        for(int i=0;i<n;i++){
            if(word[i]>=97 && word[i]<=122)
                lower++;
            else{
                if(word[i]>=65 && word[i]<=90)
                   upper++;
            }
            
        }
            if(n==upper || n==lower)
                return true;
            else{
                if(upper==1 && word[0]>=65 && word[0]<=90)
                    return true;
                else
                    return false;
            }
        }
};
