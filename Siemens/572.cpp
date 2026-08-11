/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        if(p==nullptr and q==nullptr)
            return true;

        if(p and q and p->val == q->val)
            return isSameTree(p->left, q->left)
                   && isSameTree(p->right, q->right);
        else
            return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot)
    {
        if(subRoot==nullptr)
            return true;
        if(root==nullptr)
            return false;

        if(isSameTree(root, subRoot))
            return true;

        else
            return isSubtree(root->left, subRoot) ||
            isSubtree(root->right, subRoot);

    }
};
