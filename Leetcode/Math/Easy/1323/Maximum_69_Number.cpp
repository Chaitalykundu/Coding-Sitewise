class Solution {
public:
    int maximum69Number (int num) {
        
        long long int temp = num, i=1, idx, ans=0, d;
        
        while(temp>0){
            d= temp%10;
            if(d==6)
            {    
                idx=i;
            }
            i++;
            temp/=10;
        }

        long long int temp2=num, j=0;
        while(temp2>0){
            d=temp2%10;
            
            if(j==idx)
                d=9;
            ans = ans + (int)(d * pow(10,j));
        }        
        return ans;
    }
};
