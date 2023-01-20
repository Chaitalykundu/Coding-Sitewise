class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> result;
        vector<int> sequence;
        backtrack(nums, sequence, result, 0);
        return vector(result.begin(), result.end());        
    }

    void backtrack(vector<int>& nums, vector<int>& sequence, set<vector<int>>& result, int index ){
       
        if (index == nums.size()) {
            if (sequence.size() >= 2) result.insert(sequence);
            return;
        }
            
        //case 1: append if increase
        if (sequence.empty() || sequence.back() <= nums[index]) {                
            sequence.push_back(nums[index]);                
            backtrack(nums, sequence, result,index + 1);                
            sequence.pop_back();
        }
            
        // case 2: not appending an element if not increase
        backtrack(nums, sequence, result,index + 1);
    }
};
