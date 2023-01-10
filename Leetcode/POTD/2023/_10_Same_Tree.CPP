bool isSameTree(TreeNode* p, TreeNode* q) {
        return (p==nullptr && q==nullptr) || !(p==nullptr || q==nullptr) && p->val==q->val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
