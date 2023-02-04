class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        int n = nums.size();
        
        int max=nums[0], min=nums[0], gcd;
        
        for(int i=0;i<n;i++){
            if(nums[i]>max)
                max = nums[i];
            if(nums[i]< min)
                min = nums[i];
        }
        
        for(int i=1;i<=max;i++)
        {
            if(min%i==0 && max%i==0)
                gcd=i;
        }
        return gcd;
    }
};
