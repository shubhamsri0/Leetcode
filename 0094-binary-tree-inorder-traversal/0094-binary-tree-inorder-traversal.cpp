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
    TreeNode* findPred(TreeNode* curr) {
        TreeNode* pre = curr->left;  // Start from the left child
        // Move to the rightmost node of the left subtree
        while (pre->right != nullptr && pre->right != curr) {
            pre = pre->right;
        }
        return pre;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        
//     /*Recursive Approach (TC-O(n);SC-O(n))/*

//         // if(!root) {
//         //     return ans;
//         // }
//         // vector<int>left=inorderTraversal(root->left);
//         // ans.insert(ans.end(),left.begin(),left.end());
//         // ans.push_back(root->val);
        
//         // vector<int>right=inorderTraversal(root->right);
//         // ans.insert(ans.end(),right.begin(),right.end());

//         // return ans;

//     /* Iterative Approach  (TC-O(n);SC-O(n)) */

//         // stack<TreeNode*>st;
//         // TreeNode* curr=root;

//         // while(curr!=NULL || !st.empty()) {
//         //     //Left Coverage
//         //     while(curr!=NULL) {
//         //         st.push(curr);
//         //         curr=curr->left;
//         //     }
//         //     curr=st.top();
//         //     st.pop();
//         //     ans.push_back(curr->val);
//         //     curr=curr->right;
//         // }
//         // return ans;

//     /* Moris travesal */


        TreeNode* curr = root;

        while (curr != nullptr) {
            // If left child is NULL, visit the current node and move to the right
            if (curr->left == nullptr) {
                ans.push_back(curr->val);
                curr = curr->right;
            } else {
                // Find the inorder predecessor of the current node
                TreeNode* pre = findPred(curr);

                // If the right pointer of the predecessor is NULL, make a temporary link
                if (pre->right == nullptr) {
                    pre->right = curr;  // Make curr the right child of the predecessor
                    curr = curr->left;  // Move to the left child
                } else {
                    // If the right pointer of the predecessor points to curr, we have finished the left subtree
                    pre->right = nullptr;  // Restore the tree structure
                    ans.push_back(curr->val);  // Visit the current node
                    curr = curr->right;  // Move to the right child
                }
            }
        }

        return ans;
    }
};


