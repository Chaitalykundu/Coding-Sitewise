class Solution {
public:
    int commonFactors(int a, int b) {
        int lesser, count=0;
        if(a<=b)
            lesser = a;
        else
            lesser = b;
    
        for(int i=1;i<=lesser;i++){
            if(a%i==0 && b%i==0)
                count++;
        }
        return count;
    }
};
