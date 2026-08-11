class Solution
{
public:
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        if(p==nullptr and q==nullptr)
            return true;

        if(p and q and p->val == q->val)
        {
            return isSameTree(p->left, q->left) &&
                   isSameTree(p->right, q->right);
        }
        else
            return false;
    }
};
