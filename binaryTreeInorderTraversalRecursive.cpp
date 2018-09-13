// LeetCode - Binary Tree Inorder Traversal - Recursive Solution

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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> output, left, right;
        
        if(root != NULL)
        {
            if(root->left != NULL)
            {
                left = inorderTraversal(root->left);
                output.insert(output.end(), left.begin(), left.end());
            }
            output.push_back(root->val);
            if(root->right != NULL)
            {
                right = inorderTraversal(root->right);
                output.insert(output.end(), right.begin(), right.end());
            }
            return output;
        }
        return output;
    }
};
