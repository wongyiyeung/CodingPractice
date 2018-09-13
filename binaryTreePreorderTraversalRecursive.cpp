// LeetCode - Binary Tree Preorder Traversal - Recursive Solution

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> output, left, right;
        if(root != NULL)
        {
            output.push_back(root->val);
            if(root->left != NULL)
            {
                left = preorderTraversal(root->left);
                output.insert(output.end(), left.begin(), left.end());
            }
            if(root->right != NULL)
            {
                right = preorderTraversal(root->right);
                output.insert(output.end(), right.begin(), right.end());
            }
            return output;
        }
        return output;
    }
};
