//题目链接：https://leetcode.cn/problems/sum-root-to-leaf-numbers/

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
class Solution {
public:
    int dfs (TreeNode* root, int presum)
    {
        //root->left或者root->right为空，直接返回
        if (root == nullptr) return 0;
        if (root->left == nullptr && root->right == nullptr) return presum* 10 + root->val;
        int tmp = presum * 10 + root->val;
        int tmp1 = dfs(root->left, tmp);
        int tmp2 = dfs(root->right, tmp);
        return tmp1 + tmp2;
    }

    int sumNumbers(TreeNode* root) {
        return dfs(root, 0);
    }
};