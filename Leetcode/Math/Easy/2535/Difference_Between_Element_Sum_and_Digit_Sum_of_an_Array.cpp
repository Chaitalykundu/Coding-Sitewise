class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int elementSum=0, digitSum=0;
        
        for(int i=0;i<n;i++){
            elementSum+=nums[i];
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]<=9)
                digitSum+=nums[i];
            else{
                int num=nums[i];
                while(num>0){
                    int d=num%10;
                    digitSum+=d;
                    num/=10;
                }
            }
        }
        return abs(elementSum-digitSum);
    }
};
