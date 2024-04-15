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
    int result=0;
    int sumNumbers(TreeNode* root) {
        if(!root) return 0;
        findnode(root,0);
        return result;
    }
    void findnode(TreeNode* root, int val)
    {
        int temp= val*10+root->val;
        if(!root->left && !root->right)
        {
            result = result + temp;
            return;
        }
        if(root->left) findnode(root->left,temp);
        if(root->right) findnode(root->right,temp);
    }
};