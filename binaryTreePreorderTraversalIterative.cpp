// LeetCode - Binary Tree Preorder Traversal - Iterative Solution

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
        TreeNode* current = root;
        stack<TreeNode*> rightSubTrees;
        
        while(current != NULL)
        {
            output.push_back(current->val);
            if(current->left != NULL)
            {
                if(current->right != NULL)
                {
                    rightSubTrees.push(current->right);
                }
                current = current->left;
            }
            else
            {
                if(current->right != NULL)
                {
                    current=current->right;
                }
                else
                {
                    if(!rightSubTrees.empty())
                    {
                        current = rightSubTrees.top();
                        rightSubTrees.pop();
                    }
                    else
                    {
                        current = NULL;
                    }
                }
            }
        }
        return output;
    }
};
