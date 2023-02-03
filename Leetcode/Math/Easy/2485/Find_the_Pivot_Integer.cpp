class Solution {
public:
    
    int sumOfX(int x){
        return (x*(x+1))/2;
    }
    int pivotInteger(int n) {
        
        int frontSum=0, endSum=0;
        
        if(n==1)
            return 1;
        
                 
        for(int i=1;i<=n;i++){
            frontSum = sumOfX(i);
            endSum = sumOfX(n) - sumOfX(i-1);
            
            if(frontSum==endSum)
                return i;
        }
        return -1;
        
    }
};
