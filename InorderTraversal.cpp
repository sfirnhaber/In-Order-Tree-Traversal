/*
 * Binary Tree Inorder Traversal
 * By Sam Firnhaber
 */

Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    
    void inOrder(vector<int>& list, TreeNode* root) {
        if (root == NULL)
            return;
        inOrder(list, root->left);
        list.push_back(root->val);
        inOrder(list, root->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> list;
        inOrder(list, root);
        return list;
    }
};