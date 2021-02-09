/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {TreeNode}
 */
var convertBST = function(root) {
    let sum = 0
    const trav = node => {
        if (!node) return
        trav(node.right)
        sum += node.val, node.val = sum
        trav(node.left)
    }
    trav(root)
    return root
};