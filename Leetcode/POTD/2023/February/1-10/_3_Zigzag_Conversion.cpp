class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        string ans="";
        
        int val=0;
        for(int i=2*(numRows-1);i>=0;i=i-2){
            int j=val;
            int turn=true;
            while(j<s.size()){
                
                ans+=s[j];
                //for the alternate pattern 
                j+=(i!=0&&i!=2*numRows-2?turn?i:2*numRows-2-i:2*numRows-2);
                //toggling the turn pattern
                turn=!turn;
            }
            val++;
        }
        //return the ans
        return ans;
    }
};
