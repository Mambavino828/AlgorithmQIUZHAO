class Solution {
public:
    vector<int> res;
    vector<int> inorderTraversal(TreeNode* root) {
        traversal(root);
        return res;
    }

    void traversal(TreeNode* node){
        if(node==nullptr) return;
        traversal(node->left);
        res.push_back(node->val);
        traversal(node->right);
    }
};