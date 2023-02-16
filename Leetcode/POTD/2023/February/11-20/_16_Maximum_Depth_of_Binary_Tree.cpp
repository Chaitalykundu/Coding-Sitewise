class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
    
        int depthOfLeft = maxDepth(root->left);
        int depthOfRight = maxDepth(root->right);
        
        if(depthOfLeft>depthOfRight)
            return depthOfLeft + 1;
        return depthOfRight + 1;
    }
};



/*
alternative


class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        return max(maxDepth(root->right),maxDepth(root->left))+1;
    }
};

*/
