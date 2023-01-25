class Solution {
  public:
    int minOperation(string s) {
        // code here
        int n=s.length();
        int op2Done=false;
        
        int i=n-1;
        int ans=0;
        while(i>=0){
            ans++;
            if(i%2==1){
                int idx=i/2;
                if(!op2Done && s.substr(0,idx+1)==s.substr(idx+1,i-idx)){
                    op2Done=true;
                    i=idx+1;
                }
            }
            i--;
        }
        return ans;
    }
};
