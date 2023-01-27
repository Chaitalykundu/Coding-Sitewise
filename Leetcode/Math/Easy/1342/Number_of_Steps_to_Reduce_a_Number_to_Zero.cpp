class Solution {
public:
    int numberOfSteps(int num) {
        
        int count=0;
        
        while(num>0){
            if(num&1)
            {
                count++;
                num-=1;
            }
            else
            {
                count++;
                num/=2;
            }
        }
        return count;
    }
};
