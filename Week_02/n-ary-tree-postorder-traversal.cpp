class Solution {
public:
    vector<int> res;
    vector<int> postorder(Node* root) {
        if(!root) return res;
        for(auto i:root->children)
        {
            postorder(i);
        }
        res.push_back(root->val);
        return res;
    }
};