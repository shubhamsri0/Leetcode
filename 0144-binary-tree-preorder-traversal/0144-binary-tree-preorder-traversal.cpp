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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        preorder(root,ans);
        return ans;
    }
    void preorder(TreeNode* root , vector<int>&ans) {
        if(root == nullptr) return ;

        ans.push_back(root->val);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
};