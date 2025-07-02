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
    unordered_map<TreeNode*,int>dp;
    int recur(TreeNode* root){
        if (root==nullptr) return 0;
        if (dp.count(root)) return dp[root];
        int t=root->val+(root->left==nullptr ? 0 : recur(root->left->left))+(root->left==nullptr ? 0 : recur(root->left->right))+(root->right==nullptr ? 0 : recur(root->right->left))+(root->right==nullptr ? 0 : recur(root->right->right));
        int nt=(root->left==nullptr ? 0 : recur(root->left))+(root->right==nullptr ? 0 : recur(root->right));
        dp[root]=max(t,nt);
        return dp[root];
    }
public:
    int rob(TreeNode* root) {
        return recur(root);
    }
};