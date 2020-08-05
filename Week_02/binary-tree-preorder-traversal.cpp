class Solution {
public:
    vector<int> results;
    vector<int> preorderTraversal(TreeNode* root) {
        traversal(root);
        return results;
    }

    void traversal(TreeNode* node) {
        if (node == NULL)  return;
        results.push_back(node->val);
        traversal(node->left);
        traversal(node->right);
    }
};