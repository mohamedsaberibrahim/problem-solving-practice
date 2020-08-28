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
    int sumOfLeftLeaves(TreeNode* root) {
        return sumOfLeftLeaves_withFlag(root, false);
    }
    int sumOfLeftLeaves_withFlag(TreeNode* root, bool isLeft){
        if(root == nullptr) return 0;
        else if(isLeft && (root->left == nullptr) &&(root->right == nullptr)){
            return root-> val;
        }
        else{
            return sumOfLeftLeaves_withFlag(root->left, true) + sumOfLeftLeaves_withFlag(root->right, false);
        }
    }
};