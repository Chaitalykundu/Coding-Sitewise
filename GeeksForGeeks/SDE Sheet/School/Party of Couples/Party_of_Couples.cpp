class Solution{
    public:
    int findSingle(int N, int arr[]){
        // code here
        
        int oddNum=0;
        for(int i=0;i<N;i++){
            oddNum = oddNum ^ arr[i];
        }
        return oddNum;
    }
};


// Tip : XOR of similar number is 0
