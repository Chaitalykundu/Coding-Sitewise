class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        
        int max = nums[0], min=nums[0];
        
        for(int i=1;i<n;i++){
            if(nums[i]>max)
                max=nums[i];
            else if(nums[i]<min)
                min=nums[i];
        }
        
        int ans;
        for(int i=min;i>=1;i--){
            if(min%i==0 && max%i==0)
            {
                ans = i;
                break;
                
            }    
            
        }
        return ans;
        
    }
};
