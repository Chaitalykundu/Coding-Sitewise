class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        // your code here
        
        Node* slow = head;
        Node* fast = head;
        Node* temp = head;
        
        while(slow!=NULL && fast!=NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast)
            {
                while(temp!=slow)
                {
                    temp = temp -> next;
                    slow = slow -> next;
                }
                return temp-> data;
            }
        }
        return -1;
        

    }
};
