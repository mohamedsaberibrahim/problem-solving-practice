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
    vector<int> result;
    vector<int> rightSideView(TreeNode* root) {
        
        int max_level = 0; 
        rightViewUtil(root, 1, &max_level);
        
        return result;
        
    }
    void rightViewUtil(TreeNode* root, int level, int *max_level)
    {
        // Base Case 
        if (root == NULL) return; 

        // If this is the last Node of its level 
        if (*max_level < level) 
        { 
            result.push_back(root->val);
            *max_level = level; 
        } 

        // Recur for right subtree first,  
        // then left subtree 
        rightViewUtil(root->right, level + 1, max_level); 
        rightViewUtil(root->left, level + 1, max_level); 
        
    }
};