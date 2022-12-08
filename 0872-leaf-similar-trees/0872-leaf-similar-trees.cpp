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
    void leaf(TreeNode* node, vector<int>& v)
    {
        if(!node) return;
        if(!node->left && !node->right)
            v.push_back(node->val);
        leaf(node->left, v);
        leaf(node->right, v);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> v1, v2;
        leaf(root1, v1);
        leaf(root2, v2);
        return v1==v2;
    }
};