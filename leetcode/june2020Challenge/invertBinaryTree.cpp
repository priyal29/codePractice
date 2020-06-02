/* Defition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

/*
1. In symmetric tree/ mirror tree true or not, we are traversing tree and checking whether tree is Mirror or not. In that case, we have to divide root in two parts and confirm left is mirror if right or not.

2. In this case, given a tree, we need to convert the tree into Mirror/ inverted. so we can swap the left and right subtree while traversing

3. This problem can also be done by level order traversal, swap left and right subtree before pushing on queue.

*/
class Solution {
public:
    
TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
            return NULL;
        
        invertTree(root->left);
        invertTree(root->right);
        
        swap(root->left, root->right);
        
        return root;
    }
};
