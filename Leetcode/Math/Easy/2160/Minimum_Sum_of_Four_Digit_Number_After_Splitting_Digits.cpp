class Solution {
public:
    int minimumSum(int num) {
        vector<int>a(4);
        
        int i=0;
        while(num>0){
            a[i++]=num%10;
            num/=10;
        }
        sort(a.begin(), a.end());
        
        return ((a[0]*10) + (a[1]*10) + a[2] + a[3]);
    }
};
