class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        
        ListNode* temp = head;
        
        while(temp!= NULL){
            ans = ans * 2;
            ans += (temp -> val);
            temp = temp -> next;
        }
        return ans;
    }
};

// reference - https://www.youtube.com/watch?v=rPbzUW7usJE
