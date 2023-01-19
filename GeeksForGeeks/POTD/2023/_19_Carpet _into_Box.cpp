class Solution{
    public:
    
    int fold(int x, int y){
        int moves =0;
        while(x>y){
            x = x/2;
            moves++;
        }
        return moves;
    }
    
    int carpetBox(int A, int B, int C, int D){
        //code here
       return min((fold(A,C)+fold(B,D)),(fold(A,D)+fold(B,C)));
    }
};
