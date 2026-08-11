class Solution
{
public:
    int dfs(TreeNode* root, int& res)
    {
        if(root==nullptr)
            return 0;

        int left = dfs(root->left, res);
        int right = dfs(root->right, res);
        res = max(res, left+right);

        return 1 + max(left, right);
    }
    int diameterOfBinaryTree(TreeNode* root)
    {
        int res=0;
        dfs(root, res);
        return res;
    }
};

