class Solution {
public:
    int subtractProductAndSum(int n) {
        
        long long int prod =1;
        long long int sum = 0;
        
        while(n>0){
            int d = n%10;
            prod *=d;
            sum+=d;
            n/=10;
        }
        
        return prod-sum;
    }
};
