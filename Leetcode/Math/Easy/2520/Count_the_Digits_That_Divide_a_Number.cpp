class Solution {
public:
    int countDigits(int num) {
        
        int count=0, n=num;
        
        while(n>0){
            int d = n%10;
            if(num%d==0)
                count++;
            n/=10;
        }
        return count;
    }
};
