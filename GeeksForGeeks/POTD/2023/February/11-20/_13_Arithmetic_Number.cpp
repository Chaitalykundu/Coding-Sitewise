class Solution{
public:
    int inSequence(int A, int B, int C){
        // code here
        if(C==0){
            if(A==B){
                return 1;
            }else{
                return 0;
            }
        }        
        int N= (B-A)/C + 1;
        if(B== A+(N-1)*C && N>0)
            return 1;
        else
            return 0;
            
    }
};
