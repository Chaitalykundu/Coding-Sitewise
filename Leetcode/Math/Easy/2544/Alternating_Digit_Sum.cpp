class Solution {
public:
    int alternateDigitSum(int n) {
        int num = n, d, i=0, firstSum=0, lastSum=0, res;
        while(num>0){
            int d = num%10;
            i++;
            if(i&1){
                firstSum+=d;
            }
            else
                lastSum+=d;
            num/=10;
        }
        
        if(i&1)
            res = firstSum-lastSum;
        else
            res = lastSum - firstSum;
        
        return res;
    }
};
