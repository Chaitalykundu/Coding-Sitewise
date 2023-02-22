class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        
        int c=0;
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j])
                    c++;
            }
        }
        
        return c;
    }
};


/* 

T.C - O(n^2)

*/