class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
     int solve(Node* node)

    {

        if(node==NULL)return 0;

        

        int leftsum = solve(node->left);

        int rightsum = solve(node->right);

        

        int total = leftsum+rightsum+node->data;

        

        node->data = leftsum+rightsum;

        return total;

    }

    void toSumTree(Node *node)

    {

       solve(node);

    }
};
