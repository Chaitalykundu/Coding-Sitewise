class Solution{
public:
   Node *targ;
    long long int ans = 0;
private :
    bool find(Node *root,int target)
    {
        if(!root) return false;
        if(root->data > target) find(root->left,target);
        else if(root->data < target) find(root->right,target);
        else{
            targ = root;
            return true;
        }
    }
    void solve(Node *root,int pos)
    {
        if(root == NULL) return;
        if(pos == 0) ans += root->data;
        solve(root->left,pos - 1);
        solve(root->right,pos + 1);
    }
public:
    long long int verticallyDownBST(Node *root,int target){
        if(find(root,target))
        {
            solve(targ,0);
            return ans - targ->data;
        }else{
            return -1;
        }
    }
};
