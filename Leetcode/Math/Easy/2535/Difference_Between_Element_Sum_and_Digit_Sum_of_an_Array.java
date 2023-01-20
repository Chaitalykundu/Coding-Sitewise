class Solution {
    public int differenceOfSum(int[] nums) {
        int n = nums.length;
        
        int elementSum=0, digitSum=0;
        
        
        for(int i=0;i<n;i++){
            elementSum+=nums[i];
            
                int num=nums[i];
                while(num>0){
                    int d=num%10;
                    digitSum+=d;
                    num/=10;
                }
            }
        return Math.abs(elementSum-digitSum);
    }
}
