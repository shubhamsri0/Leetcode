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
    int countNodes(TreeNode* root) {
    //    int c=0;
    //    count(root,c); 
    //    return c;
    // }
    // void count(TreeNode* root, int& c){
    //     if(root==nullptr) return;
    //     c++;
    //     count(root->left,c);
    //     count(root->right,c);
    // }
    // App-2
    //     if(root==NULL) return 0;
    //     int l = countNodes(root->left);
    //     int r = countNodes(root->right);
    //     return 1+l+r;
    //App-3 TC-O(logn)

        int leftHeight = 0, rightHeight = 0;
        TreeNode* l = root;
        TreeNode* r = root;
        while (l) {
            l = l->left;
            leftHeight++;
        }
        while (r) {
            r = r->right;
            rightHeight++;
        }
        if (leftHeight == rightHeight) {
            return (1 << leftHeight) - 1;
        }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }

};